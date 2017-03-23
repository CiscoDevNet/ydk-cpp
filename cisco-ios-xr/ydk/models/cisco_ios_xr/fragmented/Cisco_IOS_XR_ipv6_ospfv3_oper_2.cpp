
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_3.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::SpfStatTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{
    yang_name = "spf-stat-time"; yang_parent_name = "area-stat";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::~SpfStatTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_data() const
{
    return dijkstra.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_operation() const
{
    return is_set(operation)
	|| is_set(dijkstra.operation)
	|| is_set(external_prefix.operation)
	|| is_set(external_prefix_del.operation)
	|| is_set(inter_prefix.operation)
	|| is_set(inter_prefix_del.operation)
	|| is_set(intra_prefix.operation)
	|| is_set(intra_prefix_del.operation)
	|| is_set(rib_add.operation)
	|| is_set(rib_del.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stat-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStatTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.operation)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.operation)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.operation)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.operation)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.operation)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.operation)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.operation)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.operation)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.operation)) leaf_name_data.push_back(rib_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::RawioStats()
    :
    in_bytes{YType::uint64, "in-bytes"},
    in_error_drops{YType::uint64, "in-error-drops"},
    in_handle_drops{YType::uint64, "in-handle-drops"},
    in_ipsec_drops{YType::uint64, "in-ipsec-drops"},
    in_long_packets{YType::uint64, "in-long-packets"},
    in_malloc_drops{YType::uint64, "in-malloc-drops"},
    in_packets{YType::uint64, "in-packets"},
    in_queue_drops{YType::uint64, "in-queue-drops"},
    in_short_drops{YType::uint64, "in-short-drops"},
    out_bytes{YType::uint64, "out-bytes"},
    out_error_drops{YType::uint64, "out-error-drops"},
    out_ipsec_drops{YType::uint64, "out-ipsec-drops"},
    out_nofd_drops{YType::uint64, "out-nofd-drops"},
    out_nopak_drops{YType::uint64, "out-nopak-drops"},
    out_packets{YType::uint64, "out-packets"},
    out_pakapi_errors{YType::uint64, "out-pakapi-errors"},
    raw_conn_close{YType::uint64, "raw-conn-close"},
    raw_conn_error{YType::uint64, "raw-conn-error"},
    raw_conn_open{YType::uint64, "raw-conn-open"},
    raw_conn_state{YType::uint32, "raw-conn-state"}
{
    yang_name = "rawio-stats"; yang_parent_name = "vrf-statistics";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::~RawioStats()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::has_data() const
{
    return in_bytes.is_set
	|| in_error_drops.is_set
	|| in_handle_drops.is_set
	|| in_ipsec_drops.is_set
	|| in_long_packets.is_set
	|| in_malloc_drops.is_set
	|| in_packets.is_set
	|| in_queue_drops.is_set
	|| in_short_drops.is_set
	|| out_bytes.is_set
	|| out_error_drops.is_set
	|| out_ipsec_drops.is_set
	|| out_nofd_drops.is_set
	|| out_nopak_drops.is_set
	|| out_packets.is_set
	|| out_pakapi_errors.is_set
	|| raw_conn_close.is_set
	|| raw_conn_error.is_set
	|| raw_conn_open.is_set
	|| raw_conn_state.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_bytes.operation)
	|| is_set(in_error_drops.operation)
	|| is_set(in_handle_drops.operation)
	|| is_set(in_ipsec_drops.operation)
	|| is_set(in_long_packets.operation)
	|| is_set(in_malloc_drops.operation)
	|| is_set(in_packets.operation)
	|| is_set(in_queue_drops.operation)
	|| is_set(in_short_drops.operation)
	|| is_set(out_bytes.operation)
	|| is_set(out_error_drops.operation)
	|| is_set(out_ipsec_drops.operation)
	|| is_set(out_nofd_drops.operation)
	|| is_set(out_nopak_drops.operation)
	|| is_set(out_packets.operation)
	|| is_set(out_pakapi_errors.operation)
	|| is_set(raw_conn_close.operation)
	|| is_set(raw_conn_error.operation)
	|| is_set(raw_conn_open.operation)
	|| is_set(raw_conn_state.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rawio-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RawioStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bytes.is_set || is_set(in_bytes.operation)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_error_drops.is_set || is_set(in_error_drops.operation)) leaf_name_data.push_back(in_error_drops.get_name_leafdata());
    if (in_handle_drops.is_set || is_set(in_handle_drops.operation)) leaf_name_data.push_back(in_handle_drops.get_name_leafdata());
    if (in_ipsec_drops.is_set || is_set(in_ipsec_drops.operation)) leaf_name_data.push_back(in_ipsec_drops.get_name_leafdata());
    if (in_long_packets.is_set || is_set(in_long_packets.operation)) leaf_name_data.push_back(in_long_packets.get_name_leafdata());
    if (in_malloc_drops.is_set || is_set(in_malloc_drops.operation)) leaf_name_data.push_back(in_malloc_drops.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_queue_drops.is_set || is_set(in_queue_drops.operation)) leaf_name_data.push_back(in_queue_drops.get_name_leafdata());
    if (in_short_drops.is_set || is_set(in_short_drops.operation)) leaf_name_data.push_back(in_short_drops.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.operation)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_error_drops.is_set || is_set(out_error_drops.operation)) leaf_name_data.push_back(out_error_drops.get_name_leafdata());
    if (out_ipsec_drops.is_set || is_set(out_ipsec_drops.operation)) leaf_name_data.push_back(out_ipsec_drops.get_name_leafdata());
    if (out_nofd_drops.is_set || is_set(out_nofd_drops.operation)) leaf_name_data.push_back(out_nofd_drops.get_name_leafdata());
    if (out_nopak_drops.is_set || is_set(out_nopak_drops.operation)) leaf_name_data.push_back(out_nopak_drops.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_pakapi_errors.is_set || is_set(out_pakapi_errors.operation)) leaf_name_data.push_back(out_pakapi_errors.get_name_leafdata());
    if (raw_conn_close.is_set || is_set(raw_conn_close.operation)) leaf_name_data.push_back(raw_conn_close.get_name_leafdata());
    if (raw_conn_error.is_set || is_set(raw_conn_error.operation)) leaf_name_data.push_back(raw_conn_error.get_name_leafdata());
    if (raw_conn_open.is_set || is_set(raw_conn_open.operation)) leaf_name_data.push_back(raw_conn_open.get_name_leafdata());
    if (raw_conn_state.is_set || is_set(raw_conn_state.operation)) leaf_name_data.push_back(raw_conn_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-bytes")
    {
        in_bytes = value;
    }
    if(value_path == "in-error-drops")
    {
        in_error_drops = value;
    }
    if(value_path == "in-handle-drops")
    {
        in_handle_drops = value;
    }
    if(value_path == "in-ipsec-drops")
    {
        in_ipsec_drops = value;
    }
    if(value_path == "in-long-packets")
    {
        in_long_packets = value;
    }
    if(value_path == "in-malloc-drops")
    {
        in_malloc_drops = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "in-queue-drops")
    {
        in_queue_drops = value;
    }
    if(value_path == "in-short-drops")
    {
        in_short_drops = value;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
    }
    if(value_path == "out-error-drops")
    {
        out_error_drops = value;
    }
    if(value_path == "out-ipsec-drops")
    {
        out_ipsec_drops = value;
    }
    if(value_path == "out-nofd-drops")
    {
        out_nofd_drops = value;
    }
    if(value_path == "out-nopak-drops")
    {
        out_nopak_drops = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "out-pakapi-errors")
    {
        out_pakapi_errors = value;
    }
    if(value_path == "raw-conn-close")
    {
        raw_conn_close = value;
    }
    if(value_path == "raw-conn-error")
    {
        raw_conn_error = value;
    }
    if(value_path == "raw-conn-open")
    {
        raw_conn_open = value;
    }
    if(value_path == "raw-conn-state")
    {
        raw_conn_state = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::PrefixPriorityStats()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "prefix-priority-stats"; yang_parent_name = "vrf-statistics";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::~PrefixPriorityStats()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixPriorityStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::VrfRibBatchStats()
    :
    batches_sent{YType::uint32, "batches-sent"},
    max_routes{YType::uint32, "max-routes"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_sent{YType::uint32, "paths-sent"},
    routes_pending{YType::uint32, "routes-pending"},
    routes_sent{YType::uint32, "routes-sent"}
{
    yang_name = "vrf-rib-batch-stats"; yang_parent_name = "vrf-statistics";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::~VrfRibBatchStats()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::has_data() const
{
    return batches_sent.is_set
	|| max_routes.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| paths_pending.is_set
	|| paths_sent.is_set
	|| routes_pending.is_set
	|| routes_sent.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::has_operation() const
{
    return is_set(operation)
	|| is_set(batches_sent.operation)
	|| is_set(max_routes.operation)
	|| is_set(paths_add.operation)
	|| is_set(paths_add_errs.operation)
	|| is_set(paths_del.operation)
	|| is_set(paths_del_errs.operation)
	|| is_set(paths_pending.operation)
	|| is_set(paths_sent.operation)
	|| is_set(routes_pending.operation)
	|| is_set(routes_sent.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-rib-batch-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRibBatchStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.operation)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.operation)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.operation)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.operation)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.operation)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.operation)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.operation)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.operation)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.operation)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.operation)) leaf_name_data.push_back(routes_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Summary()
    :
    ospfv3(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_>())
	,protocol(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol>())
	,route(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route>())
{
    ospfv3->parent = this;
    children["ospfv3"] = ospfv3;

    protocol->parent = this;
    children["protocol"] = protocol;

    route->parent = this;
    children["route"] = route;

    yang_name = "summary"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::~Summary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::has_data() const
{
    return (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (route !=  nullptr && route->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(operation)
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (route !=  nullptr && route->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 != nullptr)
        {
            children["ospfv3"] = ospfv3;
        }
        else
        {
            ospfv3 = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_>();
            ospfv3->parent = this;
            children["ospfv3"] = ospfv3;
        }
        return children.at("ospfv3");
    }

    if(child_yang_name == "protocol")
    {
        if(protocol != nullptr)
        {
            children["protocol"] = protocol;
        }
        else
        {
            protocol = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol>();
            protocol->parent = this;
            children["protocol"] = protocol;
        }
        return children.at("protocol");
    }

    if(child_yang_name == "route")
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
        else
        {
            route = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route>();
            route->parent = this;
            children["route"] = route;
        }
        return children.at("route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::get_children()
{
    if(children.find("ospfv3") == children.end())
    {
        if(ospfv3 != nullptr)
        {
            children["ospfv3"] = ospfv3;
        }
    }

    if(children.find("protocol") == children.end())
    {
        if(protocol != nullptr)
        {
            children["protocol"] = protocol;
        }
    }

    if(children.find("route") == children.end())
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::Protocol()
    :
    administrative_distance{YType::uint32, "administrative-distance"},
    administrative_distance_external{YType::uint32, "administrative-distance-external"},
    administrative_distance_inter_area{YType::uint32, "administrative-distance-inter-area"},
    distribute_list_in{YType::str, "distribute-list-in"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    protocol_router_id{YType::str, "protocol-router-id"}
{
    yang_name = "protocol"; yang_parent_name = "summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::~Protocol()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::has_data() const
{
    return administrative_distance.is_set
	|| administrative_distance_external.is_set
	|| administrative_distance_inter_area.is_set
	|| distribute_list_in.is_set
	|| is_graceful_restart.is_set
	|| protocol_router_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative_distance.operation)
	|| is_set(administrative_distance_external.operation)
	|| is_set(administrative_distance_inter_area.operation)
	|| is_set(distribute_list_in.operation)
	|| is_set(is_graceful_restart.operation)
	|| is_set(protocol_router_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.operation)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (administrative_distance_external.is_set || is_set(administrative_distance_external.operation)) leaf_name_data.push_back(administrative_distance_external.get_name_leafdata());
    if (administrative_distance_inter_area.is_set || is_set(administrative_distance_inter_area.operation)) leaf_name_data.push_back(administrative_distance_inter_area.get_name_leafdata());
    if (distribute_list_in.is_set || is_set(distribute_list_in.operation)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.operation)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (protocol_router_id.is_set || is_set(protocol_router_id.operation)) leaf_name_data.push_back(protocol_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
    }
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external = value;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area = value;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
    }
    if(value_path == "protocol-router-id")
    {
        protocol_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::Ospfv3_()
    :
    areas{YType::uint16, "areas"},
    as_dc_bitless_ls_as{YType::uint32, "as-dc-bitless-ls-as"},
    as_do_not_age_ls_as{YType::uint32, "as-do-not-age-ls-as"},
    as_ls_as{YType::uint32, "as-ls-as"},
    as_lsa_flood_list_length{YType::uint32, "as-lsa-flood-list-length"},
    context_name{YType::str, "context-name"},
    default_metric{YType::uint32, "default-metric"},
    default_metric_type{YType::enumeration, "default-metric-type"},
    default_policy_name{YType::str, "default-policy-name"},
    default_tag{YType::uint32, "default-tag"},
    grace_resync_time{YType::uint32, "grace-resync-time"},
    graceful_shutdown_state{YType::enumeration, "graceful-shutdown-state"},
    is_area_border_router{YType::boolean, "is-area-border-router"},
    is_as_border_router{YType::boolean, "is-as-border-router"},
    is_auto_cost{YType::boolean, "is-auto-cost"},
    is_default_always{YType::boolean, "is-default-always"},
    is_default_originated{YType::boolean, "is-default-originated"},
    is_default_policy{YType::boolean, "is-default-policy"},
    is_grace_restart_enabled{YType::boolean, "is-grace-restart-enabled"},
    is_nsr_enabled{YType::boolean, "is-nsr-enabled"},
    is_nsr_switchover_on_restart{YType::boolean, "is-nsr-switchover-on-restart"},
    is_opaque_capable{YType::boolean, "is-opaque-capable"},
    is_role_standby{YType::boolean, "is-role-standby"},
    is_router_id_stalled{YType::boolean, "is-router-id-stalled"},
    last_nsf_time{YType::uint32, "last-nsf-time"},
    lsa_flood_pacing_interval{YType::uint32, "lsa-flood-pacing-interval"},
    lsa_group_interval{YType::uint32, "lsa-group-interval"},
    lsa_hold_time{YType::uint32, "lsa-hold-time"},
    lsa_maximum_time{YType::uint32, "lsa-maximum-time"},
    lsa_retransmission_pacing_interval{YType::uint32, "lsa-retransmission-pacing-interval"},
    lsa_start_time{YType::uint32, "lsa-start-time"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_paths{YType::uint32, "maximum-paths"},
    metric{YType::uint32, "metric"},
    minimum_lsa_interval{YType::uint32, "minimum-lsa-interval"},
    normal_areas{YType::uint16, "normal-areas"},
    nssa_areas{YType::uint16, "nssa-areas"},
    opaque_lsa_checksum{YType::uint32, "opaque-lsa-checksum"},
    opaque_lsas{YType::uint32, "opaque-lsas"},
    redistribution_limit{YType::uint32, "redistribution-limit"},
    redistribution_threshold{YType::uint32, "redistribution-threshold"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"},
    role{YType::uint32, "role"},
    router_id{YType::str, "router-id"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    spf_hold_time{YType::uint32, "spf-hold-time"},
    spf_maximum_time{YType::uint32, "spf-maximum-time"},
    spf_start_time{YType::uint32, "spf-start-time"},
    stub_areas{YType::uint16, "stub-areas"}
    	,
    domain_id(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId>())
{
    domain_id->parent = this;
    children["domain-id"] = domain_id;

    yang_name = "ospfv3"; yang_parent_name = "summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::~Ospfv3_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::has_data() const
{
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<stub_router.size(); index++)
    {
        if(stub_router[index]->has_data())
            return true;
    }
    return areas.is_set
	|| as_dc_bitless_ls_as.is_set
	|| as_do_not_age_ls_as.is_set
	|| as_ls_as.is_set
	|| as_lsa_flood_list_length.is_set
	|| context_name.is_set
	|| default_metric.is_set
	|| default_metric_type.is_set
	|| default_policy_name.is_set
	|| default_tag.is_set
	|| grace_resync_time.is_set
	|| graceful_shutdown_state.is_set
	|| is_area_border_router.is_set
	|| is_as_border_router.is_set
	|| is_auto_cost.is_set
	|| is_default_always.is_set
	|| is_default_originated.is_set
	|| is_default_policy.is_set
	|| is_grace_restart_enabled.is_set
	|| is_nsr_enabled.is_set
	|| is_nsr_switchover_on_restart.is_set
	|| is_opaque_capable.is_set
	|| is_role_standby.is_set
	|| is_router_id_stalled.is_set
	|| last_nsf_time.is_set
	|| lsa_flood_pacing_interval.is_set
	|| lsa_group_interval.is_set
	|| lsa_hold_time.is_set
	|| lsa_maximum_time.is_set
	|| lsa_retransmission_pacing_interval.is_set
	|| lsa_start_time.is_set
	|| maximum_interfaces.is_set
	|| maximum_paths.is_set
	|| metric.is_set
	|| minimum_lsa_interval.is_set
	|| normal_areas.is_set
	|| nssa_areas.is_set
	|| opaque_lsa_checksum.is_set
	|| opaque_lsas.is_set
	|| redistribution_limit.is_set
	|| redistribution_threshold.is_set
	|| reference_bandwidth.is_set
	|| role.is_set
	|| router_id.is_set
	|| snmp_trap_enabled.is_set
	|| spf_hold_time.is_set
	|| spf_maximum_time.is_set
	|| spf_start_time.is_set
	|| stub_areas.is_set
	|| (domain_id !=  nullptr && domain_id->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<stub_router.size(); index++)
    {
        if(stub_router[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(areas.operation)
	|| is_set(as_dc_bitless_ls_as.operation)
	|| is_set(as_do_not_age_ls_as.operation)
	|| is_set(as_ls_as.operation)
	|| is_set(as_lsa_flood_list_length.operation)
	|| is_set(context_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(default_metric_type.operation)
	|| is_set(default_policy_name.operation)
	|| is_set(default_tag.operation)
	|| is_set(grace_resync_time.operation)
	|| is_set(graceful_shutdown_state.operation)
	|| is_set(is_area_border_router.operation)
	|| is_set(is_as_border_router.operation)
	|| is_set(is_auto_cost.operation)
	|| is_set(is_default_always.operation)
	|| is_set(is_default_originated.operation)
	|| is_set(is_default_policy.operation)
	|| is_set(is_grace_restart_enabled.operation)
	|| is_set(is_nsr_enabled.operation)
	|| is_set(is_nsr_switchover_on_restart.operation)
	|| is_set(is_opaque_capable.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(is_router_id_stalled.operation)
	|| is_set(last_nsf_time.operation)
	|| is_set(lsa_flood_pacing_interval.operation)
	|| is_set(lsa_group_interval.operation)
	|| is_set(lsa_hold_time.operation)
	|| is_set(lsa_maximum_time.operation)
	|| is_set(lsa_retransmission_pacing_interval.operation)
	|| is_set(lsa_start_time.operation)
	|| is_set(maximum_interfaces.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_lsa_interval.operation)
	|| is_set(normal_areas.operation)
	|| is_set(nssa_areas.operation)
	|| is_set(opaque_lsa_checksum.operation)
	|| is_set(opaque_lsas.operation)
	|| is_set(redistribution_limit.operation)
	|| is_set(redistribution_threshold.operation)
	|| is_set(reference_bandwidth.operation)
	|| is_set(role.operation)
	|| is_set(router_id.operation)
	|| is_set(snmp_trap_enabled.operation)
	|| is_set(spf_hold_time.operation)
	|| is_set(spf_maximum_time.operation)
	|| is_set(spf_start_time.operation)
	|| is_set(stub_areas.operation)
	|| (domain_id !=  nullptr && domain_id->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3_' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (areas.is_set || is_set(areas.operation)) leaf_name_data.push_back(areas.get_name_leafdata());
    if (as_dc_bitless_ls_as.is_set || is_set(as_dc_bitless_ls_as.operation)) leaf_name_data.push_back(as_dc_bitless_ls_as.get_name_leafdata());
    if (as_do_not_age_ls_as.is_set || is_set(as_do_not_age_ls_as.operation)) leaf_name_data.push_back(as_do_not_age_ls_as.get_name_leafdata());
    if (as_ls_as.is_set || is_set(as_ls_as.operation)) leaf_name_data.push_back(as_ls_as.get_name_leafdata());
    if (as_lsa_flood_list_length.is_set || is_set(as_lsa_flood_list_length.operation)) leaf_name_data.push_back(as_lsa_flood_list_length.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.operation)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (default_metric_type.is_set || is_set(default_metric_type.operation)) leaf_name_data.push_back(default_metric_type.get_name_leafdata());
    if (default_policy_name.is_set || is_set(default_policy_name.operation)) leaf_name_data.push_back(default_policy_name.get_name_leafdata());
    if (default_tag.is_set || is_set(default_tag.operation)) leaf_name_data.push_back(default_tag.get_name_leafdata());
    if (grace_resync_time.is_set || is_set(grace_resync_time.operation)) leaf_name_data.push_back(grace_resync_time.get_name_leafdata());
    if (graceful_shutdown_state.is_set || is_set(graceful_shutdown_state.operation)) leaf_name_data.push_back(graceful_shutdown_state.get_name_leafdata());
    if (is_area_border_router.is_set || is_set(is_area_border_router.operation)) leaf_name_data.push_back(is_area_border_router.get_name_leafdata());
    if (is_as_border_router.is_set || is_set(is_as_border_router.operation)) leaf_name_data.push_back(is_as_border_router.get_name_leafdata());
    if (is_auto_cost.is_set || is_set(is_auto_cost.operation)) leaf_name_data.push_back(is_auto_cost.get_name_leafdata());
    if (is_default_always.is_set || is_set(is_default_always.operation)) leaf_name_data.push_back(is_default_always.get_name_leafdata());
    if (is_default_originated.is_set || is_set(is_default_originated.operation)) leaf_name_data.push_back(is_default_originated.get_name_leafdata());
    if (is_default_policy.is_set || is_set(is_default_policy.operation)) leaf_name_data.push_back(is_default_policy.get_name_leafdata());
    if (is_grace_restart_enabled.is_set || is_set(is_grace_restart_enabled.operation)) leaf_name_data.push_back(is_grace_restart_enabled.get_name_leafdata());
    if (is_nsr_enabled.is_set || is_set(is_nsr_enabled.operation)) leaf_name_data.push_back(is_nsr_enabled.get_name_leafdata());
    if (is_nsr_switchover_on_restart.is_set || is_set(is_nsr_switchover_on_restart.operation)) leaf_name_data.push_back(is_nsr_switchover_on_restart.get_name_leafdata());
    if (is_opaque_capable.is_set || is_set(is_opaque_capable.operation)) leaf_name_data.push_back(is_opaque_capable.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (is_router_id_stalled.is_set || is_set(is_router_id_stalled.operation)) leaf_name_data.push_back(is_router_id_stalled.get_name_leafdata());
    if (last_nsf_time.is_set || is_set(last_nsf_time.operation)) leaf_name_data.push_back(last_nsf_time.get_name_leafdata());
    if (lsa_flood_pacing_interval.is_set || is_set(lsa_flood_pacing_interval.operation)) leaf_name_data.push_back(lsa_flood_pacing_interval.get_name_leafdata());
    if (lsa_group_interval.is_set || is_set(lsa_group_interval.operation)) leaf_name_data.push_back(lsa_group_interval.get_name_leafdata());
    if (lsa_hold_time.is_set || is_set(lsa_hold_time.operation)) leaf_name_data.push_back(lsa_hold_time.get_name_leafdata());
    if (lsa_maximum_time.is_set || is_set(lsa_maximum_time.operation)) leaf_name_data.push_back(lsa_maximum_time.get_name_leafdata());
    if (lsa_retransmission_pacing_interval.is_set || is_set(lsa_retransmission_pacing_interval.operation)) leaf_name_data.push_back(lsa_retransmission_pacing_interval.get_name_leafdata());
    if (lsa_start_time.is_set || is_set(lsa_start_time.operation)) leaf_name_data.push_back(lsa_start_time.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.operation)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_lsa_interval.is_set || is_set(minimum_lsa_interval.operation)) leaf_name_data.push_back(minimum_lsa_interval.get_name_leafdata());
    if (normal_areas.is_set || is_set(normal_areas.operation)) leaf_name_data.push_back(normal_areas.get_name_leafdata());
    if (nssa_areas.is_set || is_set(nssa_areas.operation)) leaf_name_data.push_back(nssa_areas.get_name_leafdata());
    if (opaque_lsa_checksum.is_set || is_set(opaque_lsa_checksum.operation)) leaf_name_data.push_back(opaque_lsa_checksum.get_name_leafdata());
    if (opaque_lsas.is_set || is_set(opaque_lsas.operation)) leaf_name_data.push_back(opaque_lsas.get_name_leafdata());
    if (redistribution_limit.is_set || is_set(redistribution_limit.operation)) leaf_name_data.push_back(redistribution_limit.get_name_leafdata());
    if (redistribution_threshold.is_set || is_set(redistribution_threshold.operation)) leaf_name_data.push_back(redistribution_threshold.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.operation)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.operation)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (spf_hold_time.is_set || is_set(spf_hold_time.operation)) leaf_name_data.push_back(spf_hold_time.get_name_leafdata());
    if (spf_maximum_time.is_set || is_set(spf_maximum_time.operation)) leaf_name_data.push_back(spf_maximum_time.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.operation)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (stub_areas.is_set || is_set(stub_areas.operation)) leaf_name_data.push_back(stub_areas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-id")
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
        else
        {
            domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId>();
            domain_id->parent = this;
            children["domain-id"] = domain_id;
        }
        return children.at("domain-id");
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(std::move(c));
        children[segment_path] = ipfrr_tiebreakers.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "stub-router")
    {
        for(auto const & c : stub_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter>();
        c->parent = this;
        stub_router.push_back(std::move(c));
        children[segment_path] = stub_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::get_children()
{
    if(children.find("domain-id") == children.end())
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : stub_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "areas")
    {
        areas = value;
    }
    if(value_path == "as-dc-bitless-ls-as")
    {
        as_dc_bitless_ls_as = value;
    }
    if(value_path == "as-do-not-age-ls-as")
    {
        as_do_not_age_ls_as = value;
    }
    if(value_path == "as-ls-as")
    {
        as_ls_as = value;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length = value;
    }
    if(value_path == "context-name")
    {
        context_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "default-metric-type")
    {
        default_metric_type = value;
    }
    if(value_path == "default-policy-name")
    {
        default_policy_name = value;
    }
    if(value_path == "default-tag")
    {
        default_tag = value;
    }
    if(value_path == "grace-resync-time")
    {
        grace_resync_time = value;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state = value;
    }
    if(value_path == "is-area-border-router")
    {
        is_area_border_router = value;
    }
    if(value_path == "is-as-border-router")
    {
        is_as_border_router = value;
    }
    if(value_path == "is-auto-cost")
    {
        is_auto_cost = value;
    }
    if(value_path == "is-default-always")
    {
        is_default_always = value;
    }
    if(value_path == "is-default-originated")
    {
        is_default_originated = value;
    }
    if(value_path == "is-default-policy")
    {
        is_default_policy = value;
    }
    if(value_path == "is-grace-restart-enabled")
    {
        is_grace_restart_enabled = value;
    }
    if(value_path == "is-nsr-enabled")
    {
        is_nsr_enabled = value;
    }
    if(value_path == "is-nsr-switchover-on-restart")
    {
        is_nsr_switchover_on_restart = value;
    }
    if(value_path == "is-opaque-capable")
    {
        is_opaque_capable = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "is-router-id-stalled")
    {
        is_router_id_stalled = value;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time = value;
    }
    if(value_path == "lsa-flood-pacing-interval")
    {
        lsa_flood_pacing_interval = value;
    }
    if(value_path == "lsa-group-interval")
    {
        lsa_group_interval = value;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time = value;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time = value;
    }
    if(value_path == "lsa-retransmission-pacing-interval")
    {
        lsa_retransmission_pacing_interval = value;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time = value;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval = value;
    }
    if(value_path == "normal-areas")
    {
        normal_areas = value;
    }
    if(value_path == "nssa-areas")
    {
        nssa_areas = value;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum = value;
    }
    if(value_path == "opaque-lsas")
    {
        opaque_lsas = value;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit = value;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold = value;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time = value;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time = value;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
    }
    if(value_path == "stub-areas")
    {
        stub_areas = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId>())
{
    primary_domain_id->parent = this;
    children["primary-domain-id"] = primary_domain_id;

    yang_name = "domain-id"; yang_parent_name = "ospfv3";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::~DomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainId' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
        else
        {
            primary_domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId>();
            primary_domain_id->parent = this;
            children["primary-domain-id"] = primary_domain_id;
        }
        return children.at("primary-domain-id");
    }

    if(child_yang_name == "secondary-domain-id")
    {
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(std::move(c));
        children[segment_path] = secondary_domain_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::get_children()
{
    if(children.find("primary-domain-id") == children.end())
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
    }

    for (auto const & c : secondary_domain_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{
    yang_name = "primary-domain-id"; yang_parent_name = "domain-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_type.operation)
	|| is_set(domain_id_value.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryDomainId' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.operation)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{
    yang_name = "secondary-domain-id"; yang_parent_name = "domain-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_type.operation)
	|| is_set(domain_id_value.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainId' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.operation)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StubRouter()
    :
    abr_off_reason{YType::enumeration, "abr-off-reason"},
    active{YType::boolean, "active"},
    external_lsa_metric{YType::uint32, "external-lsa-metric"},
    include_stub_links{YType::boolean, "include-stub-links"},
    mode{YType::enumeration, "mode"},
    remaining_time{YType::uint32, "remaining-time"},
    set_reason{YType::enumeration, "set-reason"},
    summary_lsa_metric{YType::uint32, "summary-lsa-metric"},
    unset_reason{YType::enumeration, "unset-reason"}
    	,
    abr_resume_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime>())
	,start_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime>())
	,unset_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime>())
{
    abr_resume_time->parent = this;
    children["abr-resume-time"] = abr_resume_time;

    start_time->parent = this;
    children["start-time"] = start_time;

    unset_time->parent = this;
    children["unset-time"] = unset_time;

    yang_name = "stub-router"; yang_parent_name = "ospfv3";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::has_data() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return abr_off_reason.is_set
	|| active.is_set
	|| external_lsa_metric.is_set
	|| include_stub_links.is_set
	|| mode.is_set
	|| remaining_time.is_set
	|| set_reason.is_set
	|| summary_lsa_metric.is_set
	|| unset_reason.is_set
	|| (abr_resume_time !=  nullptr && abr_resume_time->has_data())
	|| (start_time !=  nullptr && start_time->has_data())
	|| (unset_time !=  nullptr && unset_time->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::has_operation() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(abr_off_reason.operation)
	|| is_set(active.operation)
	|| is_set(external_lsa_metric.operation)
	|| is_set(include_stub_links.operation)
	|| is_set(mode.operation)
	|| is_set(remaining_time.operation)
	|| is_set(set_reason.operation)
	|| is_set(summary_lsa_metric.operation)
	|| is_set(unset_reason.operation)
	|| (abr_resume_time !=  nullptr && abr_resume_time->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation())
	|| (unset_time !=  nullptr && unset_time->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StubRouter' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_off_reason.is_set || is_set(abr_off_reason.operation)) leaf_name_data.push_back(abr_off_reason.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (external_lsa_metric.is_set || is_set(external_lsa_metric.operation)) leaf_name_data.push_back(external_lsa_metric.get_name_leafdata());
    if (include_stub_links.is_set || is_set(include_stub_links.operation)) leaf_name_data.push_back(include_stub_links.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (set_reason.is_set || is_set(set_reason.operation)) leaf_name_data.push_back(set_reason.get_name_leafdata());
    if (summary_lsa_metric.is_set || is_set(summary_lsa_metric.operation)) leaf_name_data.push_back(summary_lsa_metric.get_name_leafdata());
    if (unset_reason.is_set || is_set(unset_reason.operation)) leaf_name_data.push_back(unset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "abr-resume-time")
    {
        if(abr_resume_time != nullptr)
        {
            children["abr-resume-time"] = abr_resume_time;
        }
        else
        {
            abr_resume_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime>();
            abr_resume_time->parent = this;
            children["abr-resume-time"] = abr_resume_time;
        }
        return children.at("abr-resume-time");
    }

    if(child_yang_name == "start-time")
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
        else
        {
            start_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime>();
            start_time->parent = this;
            children["start-time"] = start_time;
        }
        return children.at("start-time");
    }

    if(child_yang_name == "trigger")
    {
        for(auto const & c : trigger)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger>();
        c->parent = this;
        trigger.push_back(std::move(c));
        children[segment_path] = trigger.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unset-time")
    {
        if(unset_time != nullptr)
        {
            children["unset-time"] = unset_time;
        }
        else
        {
            unset_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime>();
            unset_time->parent = this;
            children["unset-time"] = unset_time;
        }
        return children.at("unset-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::get_children()
{
    if(children.find("abr-resume-time") == children.end())
    {
        if(abr_resume_time != nullptr)
        {
            children["abr-resume-time"] = abr_resume_time;
        }
    }

    if(children.find("start-time") == children.end())
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
    }

    for (auto const & c : trigger)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("unset-time") == children.end())
    {
        if(unset_time != nullptr)
        {
            children["unset-time"] = unset_time;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-off-reason")
    {
        abr_off_reason = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "external-lsa-metric")
    {
        external_lsa_metric = value;
    }
    if(value_path == "include-stub-links")
    {
        include_stub_links = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
    if(value_path == "set-reason")
    {
        set_reason = value;
    }
    if(value_path == "summary-lsa-metric")
    {
        summary_lsa_metric = value;
    }
    if(value_path == "unset-reason")
    {
        unset_reason = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::UnsetTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "unset-time"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::~UnsetTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unset-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnsetTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::StartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "start-time"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::~StartTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::AbrResumeTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "abr-resume-time"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::~AbrResumeTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abr-resume-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AbrResumeTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::Trigger()
    :
    time{YType::uint32, "time"},
    trigger{YType::enumeration, "trigger"},
    unset_reason{YType::enumeration, "unset-reason"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
    	,
    start_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime>())
	,unset_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime>())
{
    start_time->parent = this;
    children["start-time"] = start_time;

    unset_time->parent = this;
    children["unset-time"] = unset_time;

    yang_name = "trigger"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::~Trigger()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::has_data() const
{
    return time.is_set
	|| trigger.is_set
	|| unset_reason.is_set
	|| wait_for_bgp.is_set
	|| (start_time !=  nullptr && start_time->has_data())
	|| (unset_time !=  nullptr && unset_time->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation)
	|| is_set(trigger.operation)
	|| is_set(unset_reason.operation)
	|| is_set(wait_for_bgp.operation)
	|| (start_time !=  nullptr && start_time->has_operation())
	|| (unset_time !=  nullptr && unset_time->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.operation)) leaf_name_data.push_back(trigger.get_name_leafdata());
    if (unset_reason.is_set || is_set(unset_reason.operation)) leaf_name_data.push_back(unset_reason.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "start-time")
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
        else
        {
            start_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime>();
            start_time->parent = this;
            children["start-time"] = start_time;
        }
        return children.at("start-time");
    }

    if(child_yang_name == "unset-time")
    {
        if(unset_time != nullptr)
        {
            children["unset-time"] = unset_time;
        }
        else
        {
            unset_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime>();
            unset_time->parent = this;
            children["unset-time"] = unset_time;
        }
        return children.at("unset-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::get_children()
{
    if(children.find("start-time") == children.end())
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
    }

    if(children.find("unset-time") == children.end())
    {
        if(unset_time != nullptr)
        {
            children["unset-time"] = unset_time;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "trigger")
    {
        trigger = value;
    }
    if(value_path == "unset-reason")
    {
        unset_reason = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::UnsetTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "unset-time"; yang_parent_name = "trigger";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::~UnsetTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unset-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnsetTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::StartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "start-time"; yang_parent_name = "trigger";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::~StartTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{
    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "ospfv3";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_index.operation)
	|| is_set(tiebreaker_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrTiebreakers' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::Route()
    :
    extern_one_route{YType::uint32, "extern-one-route"},
    extern_two_route{YType::uint32, "extern-two-route"},
    inter_area_route{YType::uint32, "inter-area-route"},
    intra_area_route{YType::uint32, "intra-area-route"},
    nssa_one_route{YType::uint32, "nssa-one-route"},
    nssa_two_route{YType::uint32, "nssa-two-route"},
    redistribution_route{YType::uint32, "redistribution-route"},
    route_connected{YType::uint32, "route-connected"},
    route_id{YType::str, "route-id"},
    total_received_route{YType::uint32, "total-received-route"},
    total_sent_route{YType::uint32, "total-sent-route"}
{
    yang_name = "route"; yang_parent_name = "summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::~Route()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::has_data() const
{
    return extern_one_route.is_set
	|| extern_two_route.is_set
	|| inter_area_route.is_set
	|| intra_area_route.is_set
	|| nssa_one_route.is_set
	|| nssa_two_route.is_set
	|| redistribution_route.is_set
	|| route_connected.is_set
	|| route_id.is_set
	|| total_received_route.is_set
	|| total_sent_route.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(extern_one_route.operation)
	|| is_set(extern_two_route.operation)
	|| is_set(inter_area_route.operation)
	|| is_set(intra_area_route.operation)
	|| is_set(nssa_one_route.operation)
	|| is_set(nssa_two_route.operation)
	|| is_set(redistribution_route.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_id.operation)
	|| is_set(total_received_route.operation)
	|| is_set(total_sent_route.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_one_route.is_set || is_set(extern_one_route.operation)) leaf_name_data.push_back(extern_one_route.get_name_leafdata());
    if (extern_two_route.is_set || is_set(extern_two_route.operation)) leaf_name_data.push_back(extern_two_route.get_name_leafdata());
    if (inter_area_route.is_set || is_set(inter_area_route.operation)) leaf_name_data.push_back(inter_area_route.get_name_leafdata());
    if (intra_area_route.is_set || is_set(intra_area_route.operation)) leaf_name_data.push_back(intra_area_route.get_name_leafdata());
    if (nssa_one_route.is_set || is_set(nssa_one_route.operation)) leaf_name_data.push_back(nssa_one_route.get_name_leafdata());
    if (nssa_two_route.is_set || is_set(nssa_two_route.operation)) leaf_name_data.push_back(nssa_two_route.get_name_leafdata());
    if (redistribution_route.is_set || is_set(redistribution_route.operation)) leaf_name_data.push_back(redistribution_route.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_id.is_set || is_set(route_id.operation)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (total_received_route.is_set || is_set(total_received_route.operation)) leaf_name_data.push_back(total_received_route.get_name_leafdata());
    if (total_sent_route.is_set || is_set(total_sent_route.operation)) leaf_name_data.push_back(total_sent_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extern-one-route")
    {
        extern_one_route = value;
    }
    if(value_path == "extern-two-route")
    {
        extern_two_route = value;
    }
    if(value_path == "inter-area-route")
    {
        inter_area_route = value;
    }
    if(value_path == "intra-area-route")
    {
        intra_area_route = value;
    }
    if(value_path == "nssa-one-route")
    {
        nssa_one_route = value;
    }
    if(value_path == "nssa-two-route")
    {
        nssa_two_route = value;
    }
    if(value_path == "redistribution-route")
    {
        redistribution_route = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-id")
    {
        route_id = value;
    }
    if(value_path == "total-received-route")
    {
        total_received_route = value;
    }
    if(value_path == "total-sent-route")
    {
        total_sent_route = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::RetransmissionListProcessTable()
{
    yang_name = "retransmission-list-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::~RetransmissionListProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-list-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionListProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission>();
        c->parent = this;
        retransmission.push_back(std::move(c));
        children[segment_path] = retransmission.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::get_children()
{
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    is_retransmission_sham_link{YType::boolean, "is-retransmission-sham-link"},
    is_retransmissionvirtual_link{YType::boolean, "is-retransmissionvirtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_length{YType::uint32, "retransmission-length"},
    retransmission_neighbor_address{YType::str, "retransmission-neighbor-address"},
    retransmission_sham_link_id{YType::uint32, "retransmission-sham-link-id"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmissionvirtual_link_id{YType::uint32, "retransmissionvirtual-link-id"}
{
    yang_name = "retransmission"; yang_parent_name = "retransmission-list-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::~Retransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_retransmission_sham_link.is_set
	|| is_retransmissionvirtual_link.is_set
	|| neighbor_address.is_set
	|| retransmission_length.is_set
	|| retransmission_neighbor_address.is_set
	|| retransmission_sham_link_id.is_set
	|| retransmission_timer.is_set
	|| retransmissionvirtual_link_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_retransmission_sham_link.operation)
	|| is_set(is_retransmissionvirtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(retransmission_length.operation)
	|| is_set(retransmission_neighbor_address.operation)
	|| is_set(retransmission_sham_link_id.operation)
	|| is_set(retransmission_timer.operation)
	|| is_set(retransmissionvirtual_link_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_retransmission_sham_link.is_set || is_set(is_retransmission_sham_link.operation)) leaf_name_data.push_back(is_retransmission_sham_link.get_name_leafdata());
    if (is_retransmissionvirtual_link.is_set || is_set(is_retransmissionvirtual_link.operation)) leaf_name_data.push_back(is_retransmissionvirtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_length.is_set || is_set(retransmission_length.operation)) leaf_name_data.push_back(retransmission_length.get_name_leafdata());
    if (retransmission_neighbor_address.is_set || is_set(retransmission_neighbor_address.operation)) leaf_name_data.push_back(retransmission_neighbor_address.get_name_leafdata());
    if (retransmission_sham_link_id.is_set || is_set(retransmission_sham_link_id.operation)) leaf_name_data.push_back(retransmission_sham_link_id.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.operation)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmissionvirtual_link_id.is_set || is_set(retransmissionvirtual_link_id.operation)) leaf_name_data.push_back(retransmissionvirtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(std::move(c));
        children[segment_path] = retransmission_area_db.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(std::move(c));
        children[segment_path] = retransmission_asdb.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmissionvirtual-link-db")
    {
        for(auto const & c : retransmissionvirtual_link_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb>();
        c->parent = this;
        retransmissionvirtual_link_db.push_back(std::move(c));
        children[segment_path] = retransmissionvirtual_link_db.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::get_children()
{
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : retransmissionvirtual_link_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-retransmission-sham-link")
    {
        is_retransmission_sham_link = value;
    }
    if(value_path == "is-retransmissionvirtual-link")
    {
        is_retransmissionvirtual_link = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "retransmission-length")
    {
        retransmission_length = value;
    }
    if(value_path == "retransmission-neighbor-address")
    {
        retransmission_neighbor_address = value;
    }
    if(value_path == "retransmission-sham-link-id")
    {
        retransmission_sham_link_id = value;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
    }
    if(value_path == "retransmissionvirtual-link-id")
    {
        retransmissionvirtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::RetransmissionvirtualLinkDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmissionvirtual-link-db"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::~RetransmissionvirtualLinkDb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissionvirtual-link-db";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionvirtualLinkDb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAreaDb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAsdb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksums()
{
    yang_name = "bad-checksums"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::~BadChecksums()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::has_data() const
{
    for (std::size_t index=0; index<bad_checksum.size(); index++)
    {
        if(bad_checksum[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::has_operation() const
{
    for (std::size_t index=0; index<bad_checksum.size(); index++)
    {
        if(bad_checksum[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bad-checksums";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BadChecksums' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bad-checksum")
    {
        for(auto const & c : bad_checksum)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum>();
        c->parent = this;
        bad_checksum.push_back(std::move(c));
        children[segment_path] = bad_checksum.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::get_children()
{
    for (auto const & c : bad_checksum)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::BadChecksum()
    :
    packet_number{YType::uint32, "packet-number"},
    computed_checksum{YType::uint16, "computed-checksum"},
    received_checksum{YType::uint16, "received-checksum"},
    received_data{YType::str, "received-data"}
    	,
    timestamp(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "bad-checksum"; yang_parent_name = "bad-checksums";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::~BadChecksum()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::has_data() const
{
    return packet_number.is_set
	|| computed_checksum.is_set
	|| received_checksum.is_set
	|| received_data.is_set
	|| (timestamp !=  nullptr && timestamp->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::has_operation() const
{
    return is_set(operation)
	|| is_set(packet_number.operation)
	|| is_set(computed_checksum.operation)
	|| is_set(received_checksum.operation)
	|| is_set(received_data.operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bad-checksum" <<"[packet-number='" <<packet_number <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BadChecksum' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_number.is_set || is_set(packet_number.operation)) leaf_name_data.push_back(packet_number.get_name_leafdata());
    if (computed_checksum.is_set || is_set(computed_checksum.operation)) leaf_name_data.push_back(computed_checksum.get_name_leafdata());
    if (received_checksum.is_set || is_set(received_checksum.operation)) leaf_name_data.push_back(received_checksum.get_name_leafdata());
    if (received_data.is_set || is_set(received_data.operation)) leaf_name_data.push_back(received_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet-number")
    {
        packet_number = value;
    }
    if(value_path == "computed-checksum")
    {
        computed_checksum = value;
    }
    if(value_path == "received-checksum")
    {
        received_checksum = value;
    }
    if(value_path == "received-data")
    {
        received_data = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::Timestamp()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "timestamp"; yang_parent_name = "bad-checksum";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::~Timestamp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummaryTable()
    :
    database_summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary>())
{
    database_summary->parent = this;
    children["database-summary"] = database_summary;

    yang_name = "database-summary-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::~DatabaseSummaryTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::has_data() const
{
    return (database_summary !=  nullptr && database_summary->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::has_operation() const
{
    return is_set(operation)
	|| (database_summary !=  nullptr && database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummaryTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database-summary")
    {
        if(database_summary != nullptr)
        {
            children["database-summary"] = database_summary;
        }
        else
        {
            database_summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary>();
            database_summary->parent = this;
            children["database-summary"] = database_summary;
        }
        return children.at("database-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::get_children()
{
    if(children.find("database-summary") == children.end())
    {
        if(database_summary != nullptr)
        {
            children["database-summary"] = database_summary;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseSummary()
    :
    database_router_id{YType::str, "database-router-id"},
    is_opaque_database_capable{YType::boolean, "is-opaque-database-capable"}
    	,
    database_counters(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>())
{
    database_counters->parent = this;
    children["database-counters"] = database_counters;

    yang_name = "database-summary"; yang_parent_name = "database-summary-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_data())
            return true;
    }
    return database_router_id.is_set
	|| is_opaque_database_capable.is_set
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(database_router_id.operation)
	|| is_set(is_opaque_database_capable.operation)
	|| (database_counters !=  nullptr && database_counters->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_router_id.is_set || is_set(database_router_id.operation)) leaf_name_data.push_back(database_router_id.get_name_leafdata());
    if (is_opaque_database_capable.is_set || is_set(is_opaque_database_capable.operation)) leaf_name_data.push_back(is_opaque_database_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-database")
    {
        for(auto const & c : area_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase>();
        c->parent = this;
        area_database.push_back(std::move(c));
        children[segment_path] = area_database.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "database-counters")
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
        else
        {
            database_counters = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>();
            database_counters->parent = this;
            children["database-counters"] = database_counters;
        }
        return children.at("database-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::get_children()
{
    for (auto const & c : area_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("database-counters") == children.end())
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "database-router-id")
    {
        database_router_id = value;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::DatabaseCounters()
    :
    deleted_lsa{YType::uint32, "deleted-lsa"},
    lsa{YType::uint32, "lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"},
    max_age_lsa{YType::uint32, "max-age-lsa"}
{
    yang_name = "database-counters"; yang_parent_name = "database-summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::~DatabaseCounters()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_data() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_operation() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deleted_lsa.operation)
	|| is_set(lsa.operation)
	|| is_set(lsa_checksum.operation)
	|| is_set(max_age_lsa.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseCounters' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabase()
    :
    lsa_area_id{YType::str, "lsa-area-id"}
    	,
    area_database_summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>())
{
    area_database_summary->parent = this;
    children["area-database-summary"] = area_database_summary;

    yang_name = "area-database"; yang_parent_name = "database-summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::~AreaDatabase()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_data() const
{
    return lsa_area_id.is_set
	|| (area_database_summary !=  nullptr && area_database_summary->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_area_id.operation)
	|| (area_database_summary !=  nullptr && area_database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaDatabase' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-database-summary")
    {
        if(area_database_summary != nullptr)
        {
            children["area-database-summary"] = area_database_summary;
        }
        else
        {
            area_database_summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>();
            area_database_summary->parent = this;
            children["area-database-summary"] = area_database_summary;
        }
        return children.at("area-database-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_children()
{
    if(children.find("area-database-summary") == children.end())
    {
        if(area_database_summary != nullptr)
        {
            children["area-database-summary"] = area_database_summary;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::AreaDatabaseSummary()
    :
    deleted_lsa{YType::uint32, "deleted-lsa"},
    lsa{YType::uint32, "lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"},
    max_age_lsa{YType::uint32, "max-age-lsa"}
{
    yang_name = "area-database-summary"; yang_parent_name = "area-database";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::~AreaDatabaseSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_data() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_operation() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deleted_lsa.operation)
	|| is_set(lsa.operation)
	|| is_set(lsa_checksum.operation)
	|| is_set(max_age_lsa.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaDatabaseSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::NeighborProcessTable()
{
    yang_name = "neighbor-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::~NeighborProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    is_neighbor_sham_link{YType::boolean, "is-neighbor-sham-link"},
    is_neighbor_virtual_link{YType::boolean, "is-neighbor-virtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_designated_router{YType::str, "neighbor-designated-router"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_sham_link_id{YType::uint32, "neighbor-sham-link-id"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_virtual_link_id{YType::uint32, "neighbor-virtual-link-id"}
    	,
    neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo>())
	,neighbor_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail>())
{
    neighbor_bfd_info->parent = this;
    children["neighbor-bfd-info"] = neighbor_bfd_info;

    neighbor_detail->parent = this;
    children["neighbor-detail"] = neighbor_detail;

    yang_name = "neighbor"; yang_parent_name = "neighbor-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::has_data() const
{
    return interface_name.is_set
	|| is_neighbor_sham_link.is_set
	|| is_neighbor_virtual_link.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_designated_router.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_sham_link_id.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| neighbor_virtual_link_id.is_set
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_data())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_neighbor_sham_link.operation)
	|| is_set(is_neighbor_virtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_designated_router.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_sham_link_id.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| is_set(neighbor_virtual_link_id.operation)
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_operation())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_neighbor_sham_link.is_set || is_set(is_neighbor_sham_link.operation)) leaf_name_data.push_back(is_neighbor_sham_link.get_name_leafdata());
    if (is_neighbor_virtual_link.is_set || is_set(is_neighbor_virtual_link.operation)) leaf_name_data.push_back(is_neighbor_virtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_designated_router.is_set || is_set(neighbor_designated_router.operation)) leaf_name_data.push_back(neighbor_designated_router.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_sham_link_id.is_set || is_set(neighbor_sham_link_id.operation)) leaf_name_data.push_back(neighbor_sham_link_id.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_virtual_link_id.is_set || is_set(neighbor_virtual_link_id.operation)) leaf_name_data.push_back(neighbor_virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-info")
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        else
        {
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo>();
            neighbor_bfd_info->parent = this;
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        return children.at("neighbor-bfd-info");
    }

    if(child_yang_name == "neighbor-detail")
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
        else
        {
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail>();
            neighbor_detail->parent = this;
            children["neighbor-detail"] = neighbor_detail;
        }
        return children.at("neighbor-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::get_children()
{
    if(children.find("neighbor-bfd-info") == children.end())
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
    }

    if(children.find("neighbor-detail") == children.end())
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link = value;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborDetail()
    :
    interface_type{YType::enumeration, "interface-type"},
    is_neighbor_filtered{YType::boolean, "is-neighbor-filtered"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_ignore_timer{YType::uint32, "neighbor-ignore-timer"},
    neighbor_option{YType::uint32, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_changes{YType::uint16, "state-changes"}
    	,
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;
    children["neighbor-retransmission"] = neighbor_retransmission;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::has_data() const
{
    return interface_type.is_set
	|| is_neighbor_filtered.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_ignore_timer.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_changes.is_set
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_type.operation)
	|| is_set(is_neighbor_filtered.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_ignore_timer.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_changes.operation)
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (is_neighbor_filtered.is_set || is_set(is_neighbor_filtered.operation)) leaf_name_data.push_back(is_neighbor_filtered.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_ignore_timer.is_set || is_set(neighbor_ignore_timer.operation)) leaf_name_data.push_back(neighbor_ignore_timer.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-retransmission")
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        else
        {
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission>();
            neighbor_retransmission->parent = this;
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        return children.at("neighbor-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::get_children()
{
    if(children.find("neighbor-retransmission") == children.end())
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered = value;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::NeighborRetransmission()
    :
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    area_flood_index{YType::uint32, "area-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"}
{
    yang_name = "neighbor-retransmission"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::has_data() const
{
    return area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| area_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| database_descriptor_retransmissions.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| link_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood.operation)
	|| is_set(area_first_flood_index.operation)
	|| is_set(area_flood_index.operation)
	|| is_set(area_next_flood.operation)
	|| is_set(area_next_flood_index.operation)
	|| is_set(as_first_flood.operation)
	|| is_set(as_first_flood_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood.operation)
	|| is_set(as_next_flood_index.operation)
	|| is_set(database_descriptor_retransmissions.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(link_first_flood.operation)
	|| is_set(link_first_flood_index.operation)
	|| is_set(link_flood_index.operation)
	|| is_set(link_next_flood.operation)
	|| is_set(link_next_flood_index.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmissions.operation)
	|| is_set(retransmissions.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood.is_set || is_set(area_first_flood.operation)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.operation)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.operation)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.operation)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.operation)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.operation)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.operation)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.operation)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.operation)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.operation)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.operation)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.operation)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.operation)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.operation)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.operation)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.operation)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.operation)) leaf_name_data.push_back(retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
    }
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroutes()
{
    yang_name = "fast-reroutes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::~FastReroutes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::has_data() const
{
    for (std::size_t index=0; index<fast_reroute.size(); index++)
    {
        if(fast_reroute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::has_operation() const
{
    for (std::size_t index=0; index<fast_reroute.size(); index++)
    {
        if(fast_reroute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroutes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroutes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fast-reroute")
    {
        for(auto const & c : fast_reroute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute>();
        c->parent = this;
        fast_reroute.push_back(std::move(c));
        children[segment_path] = fast_reroute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::get_children()
{
    for (auto const & c : fast_reroute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::FastReroute()
    :
    area_id{YType::int32, "area-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    router_id{YType::str, "router-id"}
{
    yang_name = "fast-reroute"; yang_parent_name = "fast-reroutes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::has_data() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| ipfrr_area_revision.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| router_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(ipfrr_area_revision.operation)
	|| is_set(ipfrr_router_id.operation)
	|| is_set(ipfrr_topo_area_id.operation)
	|| is_set(router_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.operation)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.operation)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.operation)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipfrr-topo")
    {
        for(auto const & c : ipfrr_topo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo>();
        c->parent = this;
        ipfrr_topo.push_back(std::move(c));
        children[segment_path] = ipfrr_topo.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::get_children()
{
    for (auto const & c : ipfrr_topo)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::IpfrrTopo()
    :
    distance{YType::uint32, "distance"},
    dr{YType::boolean, "dr"},
    lsaid{YType::uint32, "lsaid"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    node_id{YType::str, "node-id"},
    revision{YType::uint32, "revision"},
    type4{YType::boolean, "type4"}
{
    yang_name = "ipfrr-topo"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::has_data() const
{
    return distance.is_set
	|| dr.is_set
	|| lsaid.is_set
	|| neighbor_sourced.is_set
	|| node_id.is_set
	|| revision.is_set
	|| type4.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(dr.operation)
	|| is_set(lsaid.operation)
	|| is_set(neighbor_sourced.operation)
	|| is_set(node_id.operation)
	|| is_set(revision.operation)
	|| is_set(type4.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrTopo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (dr.is_set || is_set(dr.operation)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (lsaid.is_set || is_set(lsaid.operation)) leaf_name_data.push_back(lsaid.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.operation)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (type4.is_set || is_set(type4.operation)) leaf_name_data.push_back(type4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "dr")
    {
        dr = value;
    }
    if(value_path == "lsaid")
    {
        lsaid = value;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
    if(value_path == "type4")
    {
        type4 = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBriefProcessTable()
{
    yang_name = "interface-brief-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::~InterfaceBriefProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBriefProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(std::move(c));
        children[segment_path] = interface_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::get_children()
{
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adjacent_neighbors{YType::uint16, "interface-adjacent-neighbors"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbors{YType::uint16, "interface-neighbors"},
    network_type{YType::enumeration, "network-type"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-brief"; yang_parent_name = "interface-brief-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adjacent_neighbors.is_set
	|| interface_link_cost.is_set
	|| interface_neighbors.is_set
	|| network_type.is_set
	|| ospf_interface_state.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_adjacent_neighbors.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbors.operation)
	|| is_set(network_type.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBrief' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adjacent_neighbors.is_set || is_set(interface_adjacent_neighbors.operation)) leaf_name_data.push_back(interface_adjacent_neighbors.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbors.is_set || is_set(interface_neighbors.operation)) leaf_name_data.push_back(interface_neighbors.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-adjacent-neighbors")
    {
        interface_adjacent_neighbors = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbors")
    {
        interface_neighbors = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetailProcessTable()
{
    yang_name = "neighbor-detail-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::~NeighborDetailProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetailProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(std::move(c));
        children[segment_path] = neighbor_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::get_children()
{
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail()
    :
    interface_name{YType::str, "interface-name"},
    is_neighbor_sham_link{YType::boolean, "is-neighbor-sham-link"},
    is_neighbor_virtual_link{YType::boolean, "is-neighbor-virtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_designated_router{YType::str, "neighbor-designated-router"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_sham_link_id{YType::uint32, "neighbor-sham-link-id"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_virtual_link_id{YType::uint32, "neighbor-virtual-link-id"}
    	,
    neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo>())
	,neighbor_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_>())
{
    neighbor_bfd_info->parent = this;
    children["neighbor-bfd-info"] = neighbor_bfd_info;

    neighbor_detail->parent = this;
    children["neighbor-detail"] = neighbor_detail;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::has_data() const
{
    return interface_name.is_set
	|| is_neighbor_sham_link.is_set
	|| is_neighbor_virtual_link.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_designated_router.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_sham_link_id.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| neighbor_virtual_link_id.is_set
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_data())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_neighbor_sham_link.operation)
	|| is_set(is_neighbor_virtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_designated_router.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_sham_link_id.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| is_set(neighbor_virtual_link_id.operation)
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_operation())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_neighbor_sham_link.is_set || is_set(is_neighbor_sham_link.operation)) leaf_name_data.push_back(is_neighbor_sham_link.get_name_leafdata());
    if (is_neighbor_virtual_link.is_set || is_set(is_neighbor_virtual_link.operation)) leaf_name_data.push_back(is_neighbor_virtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_designated_router.is_set || is_set(neighbor_designated_router.operation)) leaf_name_data.push_back(neighbor_designated_router.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_sham_link_id.is_set || is_set(neighbor_sham_link_id.operation)) leaf_name_data.push_back(neighbor_sham_link_id.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_virtual_link_id.is_set || is_set(neighbor_virtual_link_id.operation)) leaf_name_data.push_back(neighbor_virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-info")
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        else
        {
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo>();
            neighbor_bfd_info->parent = this;
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        return children.at("neighbor-bfd-info");
    }

    if(child_yang_name == "neighbor-detail")
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
        else
        {
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_>();
            neighbor_detail->parent = this;
            children["neighbor-detail"] = neighbor_detail;
        }
        return children.at("neighbor-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::get_children()
{
    if(children.find("neighbor-bfd-info") == children.end())
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
    }

    if(children.find("neighbor-detail") == children.end())
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link = value;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborDetail_()
    :
    interface_type{YType::enumeration, "interface-type"},
    is_neighbor_filtered{YType::boolean, "is-neighbor-filtered"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_ignore_timer{YType::uint32, "neighbor-ignore-timer"},
    neighbor_option{YType::uint32, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_changes{YType::uint16, "state-changes"}
    	,
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;
    children["neighbor-retransmission"] = neighbor_retransmission;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::~NeighborDetail_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::has_data() const
{
    return interface_type.is_set
	|| is_neighbor_filtered.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_ignore_timer.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_changes.is_set
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_type.operation)
	|| is_set(is_neighbor_filtered.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_ignore_timer.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_changes.operation)
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail_' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (is_neighbor_filtered.is_set || is_set(is_neighbor_filtered.operation)) leaf_name_data.push_back(is_neighbor_filtered.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_ignore_timer.is_set || is_set(neighbor_ignore_timer.operation)) leaf_name_data.push_back(neighbor_ignore_timer.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-retransmission")
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        else
        {
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>();
            neighbor_retransmission->parent = this;
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        return children.at("neighbor-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_children()
{
    if(children.find("neighbor-retransmission") == children.end())
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered = value;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::NeighborRetransmission()
    :
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    area_flood_index{YType::uint32, "area-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"}
{
    yang_name = "neighbor-retransmission"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_data() const
{
    return area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| area_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| database_descriptor_retransmissions.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| link_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood.operation)
	|| is_set(area_first_flood_index.operation)
	|| is_set(area_flood_index.operation)
	|| is_set(area_next_flood.operation)
	|| is_set(area_next_flood_index.operation)
	|| is_set(as_first_flood.operation)
	|| is_set(as_first_flood_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood.operation)
	|| is_set(as_next_flood_index.operation)
	|| is_set(database_descriptor_retransmissions.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(link_first_flood.operation)
	|| is_set(link_first_flood_index.operation)
	|| is_set(link_flood_index.operation)
	|| is_set(link_next_flood.operation)
	|| is_set(link_next_flood_index.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmissions.operation)
	|| is_set(retransmissions.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood.is_set || is_set(area_first_flood.operation)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.operation)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.operation)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.operation)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.operation)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.operation)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.operation)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.operation)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.operation)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.operation)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.operation)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.operation)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.operation)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.operation)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.operation)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.operation)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.operation)) leaf_name_data.push_back(retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
    }
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospfv3::Processes::Process::Statistics::Statistics()
    :
    issu_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats>())
	,nsr_pl_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats>())
	,prefix_priority_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::PrefixPriorityStats>())
	,protocol_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::ProtocolStats>())
	,rawio_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::RawioStats>())
	,rib_thread_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats>())
	,spf_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats>())
	,vrf_rib_batch_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::VrfRibBatchStats>())
{
    issu_stats->parent = this;
    children["issu-stats"] = issu_stats;

    nsr_pl_stats->parent = this;
    children["nsr-pl-stats"] = nsr_pl_stats;

    nsr_stats->parent = this;
    children["nsr-stats"] = nsr_stats;

    prefix_priority_stats->parent = this;
    children["prefix-priority-stats"] = prefix_priority_stats;

    protocol_stats->parent = this;
    children["protocol-stats"] = protocol_stats;

    rawio_stats->parent = this;
    children["rawio-stats"] = rawio_stats;

    rib_thread_stats->parent = this;
    children["rib-thread-stats"] = rib_thread_stats;

    spf_stats->parent = this;
    children["spf-stats"] = spf_stats;

    vrf_rib_batch_stats->parent = this;
    children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;

    yang_name = "statistics"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::Statistics::~Statistics()
{
}

bool Ospfv3::Processes::Process::Statistics::has_data() const
{
    return (issu_stats !=  nullptr && issu_stats->has_data())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_data())
	|| (nsr_stats !=  nullptr && nsr_stats->has_data())
	|| (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (rawio_stats !=  nullptr && rawio_stats->has_data())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_data());
}

bool Ospfv3::Processes::Process::Statistics::has_operation() const
{
    return is_set(operation)
	|| (issu_stats !=  nullptr && issu_stats->has_operation())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_operation())
	|| (nsr_stats !=  nullptr && nsr_stats->has_operation())
	|| (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (rawio_stats !=  nullptr && rawio_stats->has_operation())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
        else
        {
            issu_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats>();
            issu_stats->parent = this;
            children["issu-stats"] = issu_stats;
        }
        return children.at("issu-stats");
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        else
        {
            nsr_pl_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrPlStats>();
            nsr_pl_stats->parent = this;
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        return children.at("nsr-pl-stats");
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
        else
        {
            nsr_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats>();
            nsr_stats->parent = this;
            children["nsr-stats"] = nsr_stats;
        }
        return children.at("nsr-stats");
    }

    if(child_yang_name == "prefix-priority-stats")
    {
        if(prefix_priority_stats != nullptr)
        {
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
        else
        {
            prefix_priority_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::PrefixPriorityStats>();
            prefix_priority_stats->parent = this;
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
        return children.at("prefix-priority-stats");
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
        else
        {
            protocol_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::ProtocolStats>();
            protocol_stats->parent = this;
            children["protocol-stats"] = protocol_stats;
        }
        return children.at("protocol-stats");
    }

    if(child_yang_name == "rawio-stats")
    {
        if(rawio_stats != nullptr)
        {
            children["rawio-stats"] = rawio_stats;
        }
        else
        {
            rawio_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::RawioStats>();
            rawio_stats->parent = this;
            children["rawio-stats"] = rawio_stats;
        }
        return children.at("rawio-stats");
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
        else
        {
            rib_thread_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats>();
            rib_thread_stats->parent = this;
            children["rib-thread-stats"] = rib_thread_stats;
        }
        return children.at("rib-thread-stats");
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
        else
        {
            spf_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats>();
            spf_stats->parent = this;
            children["spf-stats"] = spf_stats;
        }
        return children.at("spf-stats");
    }

    if(child_yang_name == "vrf-rib-batch-stats")
    {
        if(vrf_rib_batch_stats != nullptr)
        {
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
        else
        {
            vrf_rib_batch_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::VrfRibBatchStats>();
            vrf_rib_batch_stats->parent = this;
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
        return children.at("vrf-rib-batch-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::get_children()
{
    if(children.find("issu-stats") == children.end())
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
    }

    if(children.find("nsr-pl-stats") == children.end())
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
    }

    if(children.find("nsr-stats") == children.end())
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
    }

    if(children.find("prefix-priority-stats") == children.end())
    {
        if(prefix_priority_stats != nullptr)
        {
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
    }

    if(children.find("protocol-stats") == children.end())
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
    }

    if(children.find("rawio-stats") == children.end())
    {
        if(rawio_stats != nullptr)
        {
            children["rawio-stats"] = rawio_stats;
        }
    }

    if(children.find("rib-thread-stats") == children.end())
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
    }

    if(children.find("spf-stats") == children.end())
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
    }

    if(children.find("vrf-rib-batch-stats") == children.end())
    {
        if(vrf_rib_batch_stats != nullptr)
        {
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_node_id{YType::uint32, "nsr-node-id"},
    nsr_peer_node_id{YType::uint32, "nsr-peer-node-id"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_revision{YType::int32, "nsr-revision"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched>())
	,nsr_thd_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_stats->parent = this;
    children["nsr-thd-stats"] = nsr_thd_stats;

    yang_name = "nsr-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::NsrStats::~NsrStats()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_node_id.is_set
	|| nsr_peer_node_id.is_set
	|| nsr_peer_version.is_set
	|| nsr_revision.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_stats !=  nullptr && nsr_thd_stats->has_data());
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_node_id.operation)
	|| is_set(nsr_peer_node_id.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_revision.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_stats !=  nullptr && nsr_thd_stats->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_node_id.is_set || is_set(nsr_node_id.operation)) leaf_name_data.push_back(nsr_node_id.get_name_leafdata());
    if (nsr_peer_node_id.is_set || is_set(nsr_peer_node_id.operation)) leaf_name_data.push_back(nsr_peer_node_id.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_revision.is_set || is_set(nsr_revision.operation)) leaf_name_data.push_back(nsr_revision.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-stats")
    {
        if(nsr_thd_stats != nullptr)
        {
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
        else
        {
            nsr_thd_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats>();
            nsr_thd_stats->parent = this;
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
        return children.at("nsr-thd-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-stats") == children.end())
    {
        if(nsr_thd_stats != nullptr)
        {
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-node-id")
    {
        nsr_node_id = value;
    }
    if(value_path == "nsr-peer-node-id")
    {
        nsr_peer_node_id = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-revision")
    {
        nsr_revision = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrThdStats()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-stats"; yang_parent_name = "nsr-stats";
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::~NsrThdStats()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::enumeration, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-stats";
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::~NsrPri()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats";
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::enumeration, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::RibThreadStats()
    :
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_batch_backup{YType::uint32, "rib-batch-backup"},
    rib_batch_err{YType::uint32, "rib-batch-err"},
    rib_batch_limit{YType::uint32, "rib-batch-limit"},
    rib_batch_no_table{YType::uint32, "rib-batch-no-table"},
    rib_batch_ok{YType::uint32, "rib-batch-ok"},
    rib_batch_purged{YType::uint32, "rib-batch-purged"},
    rib_batch_sent{YType::uint32, "rib-batch-sent"},
    rib_batch_some_err{YType::uint32, "rib-batch-some-err"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_drop_version{YType::uint32, "rib-drop-version"},
    rib_max_latency{YType::uint64, "rib-max-latency"},
    rib_path_err{YType::uint32, "rib-path-err"},
    rib_path_limit{YType::uint32, "rib-path-limit"},
    rib_route_err{YType::uint32, "rib-route-err"},
    rib_route_limit{YType::uint32, "rib-route-limit"},
    rib_route_some_err{YType::uint32, "rib-route-some-err"},
    rib_sum_latency{YType::uint64, "rib-sum-latency"},
    wq_signals{YType::uint32, "wq-signals"},
    wq_thread_active{YType::boolean, "wq-thread-active"}
    	,
    rib_base_time(std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime>())
	,thread_q(std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ>())
{
    rib_base_time->parent = this;
    children["rib-base-time"] = rib_base_time;

    thread_q->parent = this;
    children["thread-q"] = thread_q;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<holdq.size(); index++)
    {
        if(holdq[index]->has_data())
            return true;
    }
    return rib_base_clock.is_set
	|| rib_batch_backup.is_set
	|| rib_batch_err.is_set
	|| rib_batch_limit.is_set
	|| rib_batch_no_table.is_set
	|| rib_batch_ok.is_set
	|| rib_batch_purged.is_set
	|| rib_batch_sent.is_set
	|| rib_batch_some_err.is_set
	|| rib_drop_conn.is_set
	|| rib_drop_version.is_set
	|| rib_max_latency.is_set
	|| rib_path_err.is_set
	|| rib_path_limit.is_set
	|| rib_route_err.is_set
	|| rib_route_limit.is_set
	|| rib_route_some_err.is_set
	|| rib_sum_latency.is_set
	|| wq_signals.is_set
	|| wq_thread_active.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data())
	|| (thread_q !=  nullptr && thread_q->has_data());
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<holdq.size(); index++)
    {
        if(holdq[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rib_base_clock.operation)
	|| is_set(rib_batch_backup.operation)
	|| is_set(rib_batch_err.operation)
	|| is_set(rib_batch_limit.operation)
	|| is_set(rib_batch_no_table.operation)
	|| is_set(rib_batch_ok.operation)
	|| is_set(rib_batch_purged.operation)
	|| is_set(rib_batch_sent.operation)
	|| is_set(rib_batch_some_err.operation)
	|| is_set(rib_drop_conn.operation)
	|| is_set(rib_drop_version.operation)
	|| is_set(rib_max_latency.operation)
	|| is_set(rib_path_err.operation)
	|| is_set(rib_path_limit.operation)
	|| is_set(rib_route_err.operation)
	|| is_set(rib_route_limit.operation)
	|| is_set(rib_route_some_err.operation)
	|| is_set(rib_sum_latency.operation)
	|| is_set(wq_signals.operation)
	|| is_set(wq_thread_active.operation)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation())
	|| (thread_q !=  nullptr && thread_q->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::RibThreadStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibThreadStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rib_base_clock.is_set || is_set(rib_base_clock.operation)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_batch_backup.is_set || is_set(rib_batch_backup.operation)) leaf_name_data.push_back(rib_batch_backup.get_name_leafdata());
    if (rib_batch_err.is_set || is_set(rib_batch_err.operation)) leaf_name_data.push_back(rib_batch_err.get_name_leafdata());
    if (rib_batch_limit.is_set || is_set(rib_batch_limit.operation)) leaf_name_data.push_back(rib_batch_limit.get_name_leafdata());
    if (rib_batch_no_table.is_set || is_set(rib_batch_no_table.operation)) leaf_name_data.push_back(rib_batch_no_table.get_name_leafdata());
    if (rib_batch_ok.is_set || is_set(rib_batch_ok.operation)) leaf_name_data.push_back(rib_batch_ok.get_name_leafdata());
    if (rib_batch_purged.is_set || is_set(rib_batch_purged.operation)) leaf_name_data.push_back(rib_batch_purged.get_name_leafdata());
    if (rib_batch_sent.is_set || is_set(rib_batch_sent.operation)) leaf_name_data.push_back(rib_batch_sent.get_name_leafdata());
    if (rib_batch_some_err.is_set || is_set(rib_batch_some_err.operation)) leaf_name_data.push_back(rib_batch_some_err.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.operation)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_drop_version.is_set || is_set(rib_drop_version.operation)) leaf_name_data.push_back(rib_drop_version.get_name_leafdata());
    if (rib_max_latency.is_set || is_set(rib_max_latency.operation)) leaf_name_data.push_back(rib_max_latency.get_name_leafdata());
    if (rib_path_err.is_set || is_set(rib_path_err.operation)) leaf_name_data.push_back(rib_path_err.get_name_leafdata());
    if (rib_path_limit.is_set || is_set(rib_path_limit.operation)) leaf_name_data.push_back(rib_path_limit.get_name_leafdata());
    if (rib_route_err.is_set || is_set(rib_route_err.operation)) leaf_name_data.push_back(rib_route_err.get_name_leafdata());
    if (rib_route_limit.is_set || is_set(rib_route_limit.operation)) leaf_name_data.push_back(rib_route_limit.get_name_leafdata());
    if (rib_route_some_err.is_set || is_set(rib_route_some_err.operation)) leaf_name_data.push_back(rib_route_some_err.get_name_leafdata());
    if (rib_sum_latency.is_set || is_set(rib_sum_latency.operation)) leaf_name_data.push_back(rib_sum_latency.get_name_leafdata());
    if (wq_signals.is_set || is_set(wq_signals.operation)) leaf_name_data.push_back(wq_signals.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.operation)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "holdq")
    {
        for(auto const & c : holdq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq>();
        c->parent = this;
        holdq.push_back(std::move(c));
        children[segment_path] = holdq.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
        else
        {
            rib_base_time = std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime>();
            rib_base_time->parent = this;
            children["rib-base-time"] = rib_base_time;
        }
        return children.at("rib-base-time");
    }

    if(child_yang_name == "thread-q")
    {
        if(thread_q != nullptr)
        {
            children["thread-q"] = thread_q;
        }
        else
        {
            thread_q = std::make_shared<Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ>();
            thread_q->parent = this;
            children["thread-q"] = thread_q;
        }
        return children.at("thread-q");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::RibThreadStats::get_children()
{
    for (auto const & c : holdq)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rib-base-time") == children.end())
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
    }

    if(children.find("thread-q") == children.end())
    {
        if(thread_q != nullptr)
        {
            children["thread-q"] = thread_q;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::RibThreadStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
    }
    if(value_path == "rib-batch-backup")
    {
        rib_batch_backup = value;
    }
    if(value_path == "rib-batch-err")
    {
        rib_batch_err = value;
    }
    if(value_path == "rib-batch-limit")
    {
        rib_batch_limit = value;
    }
    if(value_path == "rib-batch-no-table")
    {
        rib_batch_no_table = value;
    }
    if(value_path == "rib-batch-ok")
    {
        rib_batch_ok = value;
    }
    if(value_path == "rib-batch-purged")
    {
        rib_batch_purged = value;
    }
    if(value_path == "rib-batch-sent")
    {
        rib_batch_sent = value;
    }
    if(value_path == "rib-batch-some-err")
    {
        rib_batch_some_err = value;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
    }
    if(value_path == "rib-drop-version")
    {
        rib_drop_version = value;
    }
    if(value_path == "rib-max-latency")
    {
        rib_max_latency = value;
    }
    if(value_path == "rib-path-err")
    {
        rib_path_err = value;
    }
    if(value_path == "rib-path-limit")
    {
        rib_path_limit = value;
    }
    if(value_path == "rib-route-err")
    {
        rib_route_err = value;
    }
    if(value_path == "rib-route-limit")
    {
        rib_route_limit = value;
    }
    if(value_path == "rib-route-some-err")
    {
        rib_route_some_err = value;
    }
    if(value_path == "rib-sum-latency")
    {
        rib_sum_latency = value;
    }
    if(value_path == "wq-signals")
    {
        wq_signals = value;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
    }
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::ThreadQ()
    :
    wq_dequeue_errs{YType::uint32, "wq-dequeue-errs"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_eneueue_errs{YType::uint32, "wq-eneueue-errs"},
    wq_eqtime{YType::uint64, "wq-eqtime"},
    wq_first_eqtime{YType::uint64, "wq-first-eqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_max_latency{YType::uint64, "wq-max-latency"},
    wq_sum_latency{YType::uint64, "wq-sum-latency"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_enqueued{YType::uint32, "wq-total-enqueued"}
{
    yang_name = "thread-q"; yang_parent_name = "rib-thread-stats";
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::~ThreadQ()
{
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::has_data() const
{
    return wq_dequeue_errs.is_set
	|| wq_dqtime.is_set
	|| wq_eneueue_errs.is_set
	|| wq_eqtime.is_set
	|| wq_first_eqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_max_latency.is_set
	|| wq_sum_latency.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_enqueued.is_set;
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::has_operation() const
{
    return is_set(operation)
	|| is_set(wq_dequeue_errs.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_eneueue_errs.operation)
	|| is_set(wq_eqtime.operation)
	|| is_set(wq_first_eqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_max_latency.operation)
	|| is_set(wq_sum_latency.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_enqueued.operation);
}

std::string Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thread-q";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreadQ' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_dequeue_errs.is_set || is_set(wq_dequeue_errs.operation)) leaf_name_data.push_back(wq_dequeue_errs.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_eneueue_errs.is_set || is_set(wq_eneueue_errs.operation)) leaf_name_data.push_back(wq_eneueue_errs.get_name_leafdata());
    if (wq_eqtime.is_set || is_set(wq_eqtime.operation)) leaf_name_data.push_back(wq_eqtime.get_name_leafdata());
    if (wq_first_eqtime.is_set || is_set(wq_first_eqtime.operation)) leaf_name_data.push_back(wq_first_eqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_max_latency.is_set || is_set(wq_max_latency.operation)) leaf_name_data.push_back(wq_max_latency.get_name_leafdata());
    if (wq_sum_latency.is_set || is_set(wq_sum_latency.operation)) leaf_name_data.push_back(wq_sum_latency.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_enqueued.is_set || is_set(wq_total_enqueued.operation)) leaf_name_data.push_back(wq_total_enqueued.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wq-dequeue-errs")
    {
        wq_dequeue_errs = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-eneueue-errs")
    {
        wq_eneueue_errs = value;
    }
    if(value_path == "wq-eqtime")
    {
        wq_eqtime = value;
    }
    if(value_path == "wq-first-eqtime")
    {
        wq_first_eqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-max-latency")
    {
        wq_max_latency = value;
    }
    if(value_path == "wq-sum-latency")
    {
        wq_sum_latency = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-enqueued")
    {
        wq_total_enqueued = value;
    }
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "rib-base-time"; yang_parent_name = "rib-thread-stats";
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::~RibBaseTime()
{
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBaseTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::Holdq()
    :
    wq_dequeue_errs{YType::uint32, "wq-dequeue-errs"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_eneueue_errs{YType::uint32, "wq-eneueue-errs"},
    wq_eqtime{YType::uint64, "wq-eqtime"},
    wq_first_eqtime{YType::uint64, "wq-first-eqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_max_latency{YType::uint64, "wq-max-latency"},
    wq_sum_latency{YType::uint64, "wq-sum-latency"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_enqueued{YType::uint32, "wq-total-enqueued"}
{
    yang_name = "holdq"; yang_parent_name = "rib-thread-stats";
}

Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::~Holdq()
{
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::has_data() const
{
    return wq_dequeue_errs.is_set
	|| wq_dqtime.is_set
	|| wq_eneueue_errs.is_set
	|| wq_eqtime.is_set
	|| wq_first_eqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_max_latency.is_set
	|| wq_sum_latency.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_enqueued.is_set;
}

bool Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::has_operation() const
{
    return is_set(operation)
	|| is_set(wq_dequeue_errs.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_eneueue_errs.operation)
	|| is_set(wq_eqtime.operation)
	|| is_set(wq_first_eqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_max_latency.operation)
	|| is_set(wq_sum_latency.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_enqueued.operation);
}

std::string Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holdq";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Holdq' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_dequeue_errs.is_set || is_set(wq_dequeue_errs.operation)) leaf_name_data.push_back(wq_dequeue_errs.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_eneueue_errs.is_set || is_set(wq_eneueue_errs.operation)) leaf_name_data.push_back(wq_eneueue_errs.get_name_leafdata());
    if (wq_eqtime.is_set || is_set(wq_eqtime.operation)) leaf_name_data.push_back(wq_eqtime.get_name_leafdata());
    if (wq_first_eqtime.is_set || is_set(wq_first_eqtime.operation)) leaf_name_data.push_back(wq_first_eqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_max_latency.is_set || is_set(wq_max_latency.operation)) leaf_name_data.push_back(wq_max_latency.get_name_leafdata());
    if (wq_sum_latency.is_set || is_set(wq_sum_latency.operation)) leaf_name_data.push_back(wq_sum_latency.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_enqueued.is_set || is_set(wq_total_enqueued.operation)) leaf_name_data.push_back(wq_total_enqueued.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wq-dequeue-errs")
    {
        wq_dequeue_errs = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-eneueue-errs")
    {
        wq_eneueue_errs = value;
    }
    if(value_path == "wq-eqtime")
    {
        wq_eqtime = value;
    }
    if(value_path == "wq-first-eqtime")
    {
        wq_first_eqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-max-latency")
    {
        wq_max_latency = value;
    }
    if(value_path == "wq-sum-latency")
    {
        wq_sum_latency = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-enqueued")
    {
        wq_total_enqueued = value;
    }
}

Ospfv3::Processes::Process::Statistics::IssuStats::IssuStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_node_id{YType::uint32, "nsr-node-id"},
    nsr_peer_node_id{YType::uint32, "nsr-peer-node-id"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_revision{YType::int32, "nsr-revision"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched>())
	,nsr_thd_stats(std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_stats->parent = this;
    children["nsr-thd-stats"] = nsr_thd_stats;

    yang_name = "issu-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::IssuStats::~IssuStats()
{
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_node_id.is_set
	|| nsr_peer_node_id.is_set
	|| nsr_peer_version.is_set
	|| nsr_revision.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_stats !=  nullptr && nsr_thd_stats->has_data());
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_node_id.operation)
	|| is_set(nsr_peer_node_id.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_revision.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_stats !=  nullptr && nsr_thd_stats->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::IssuStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_node_id.is_set || is_set(nsr_node_id.operation)) leaf_name_data.push_back(nsr_node_id.get_name_leafdata());
    if (nsr_peer_node_id.is_set || is_set(nsr_peer_node_id.operation)) leaf_name_data.push_back(nsr_peer_node_id.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_revision.is_set || is_set(nsr_revision.operation)) leaf_name_data.push_back(nsr_revision.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-stats")
    {
        if(nsr_thd_stats != nullptr)
        {
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
        else
        {
            nsr_thd_stats = std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats>();
            nsr_thd_stats->parent = this;
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
        return children.at("nsr-thd-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::IssuStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-stats") == children.end())
    {
        if(nsr_thd_stats != nullptr)
        {
            children["nsr-thd-stats"] = nsr_thd_stats;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::IssuStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-node-id")
    {
        nsr_node_id = value;
    }
    if(value_path == "nsr-peer-node-id")
    {
        nsr_peer_node_id = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-revision")
    {
        nsr_revision = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrThdStats()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-stats"; yang_parent_name = "issu-stats";
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::~NsrThdStats()
{
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::enumeration, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-stats";
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::~NsrPri()
{
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats";
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::enumeration, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NsrPlStats()
{
    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrPlStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ncd-pri")
    {
        for(auto const & c : ncd_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(std::move(c));
        children[segment_path] = ncd_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrPlStats::get_children()
{
    for (auto const & c : ncd_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrPlStats::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NcdPri()
    :
    num_recv{YType::uint64, "num-recv"},
    num_sent{YType::uint64, "num-sent"}
{
    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats";
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(num_recv.operation)
	|| is_set(num_sent.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcdPri' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto num_recv_name_datas = num_recv.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_recv_name_datas.begin(), num_recv_name_datas.end());
    auto num_sent_name_datas = num_sent.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_sent_name_datas.begin(), num_sent_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(std::move(c));
        children[segment_path] = num_recv_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(std::move(c));
        children[segment_path] = num_sent_drop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::get_children()
{
    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-recv")
    {
        num_recv.append(value);
    }
    if(value_path == "num-sent")
    {
        num_sent.append(value);
    }
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
    :
    nsr_pl_send_drop_array{YType::uint32, "nsr-pl-send-drop-array"}
{
    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri";
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_send_drop_array.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSentDrop' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_send_drop_array_name_datas = nsr_pl_send_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_send_drop_array_name_datas.begin(), nsr_pl_send_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-send-drop-array")
    {
        nsr_pl_send_drop_array.append(value);
    }
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
    :
    nsr_pl_recv_drop_array{YType::uint32, "nsr-pl-recv-drop-array"}
{
    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri";
}

Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_recv_drop_array.operation);
}

std::string Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecvDrop' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_recv_drop_array_name_datas = nsr_pl_recv_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_recv_drop_array_name_datas.begin(), nsr_pl_recv_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-recv-drop-array")
    {
        nsr_pl_recv_drop_array.append(value);
    }
}

Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStats()
{
    yang_name = "protocol-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospfv3::Processes::Process::Statistics::ProtocolStats::has_data() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Statistics::ProtocolStats::has_operation() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::ProtocolStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-stat")
    {
        for(auto const & c : protocol_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat>();
        c->parent = this;
        protocol_stat.push_back(std::move(c));
        children[segment_path] = protocol_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::ProtocolStats::get_children()
{
    for (auto const & c : protocol_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::ProtocolStats::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::ProtocolStat()
    :
    interface_name{YType::str, "interface-name"},
    checksum_err{YType::uint64, "checksum-err"},
    dbdes_in_ls_as{YType::uint64, "dbdes-in-ls-as"},
    dbdes_in_packets{YType::uint64, "dbdes-in-packets"},
    dbdes_out_ls_as{YType::uint64, "dbdes-out-ls-as"},
    dbdes_out_packets{YType::uint64, "dbdes-out-packets"},
    dropped_in_gs{YType::uint64, "dropped-in-gs"},
    hello_in_packets{YType::uint64, "hello-in-packets"},
    hello_out_packets{YType::uint64, "hello-out-packets"},
    ls_ack_in_ls_as{YType::uint64, "ls-ack-in-ls-as"},
    ls_ack_in_packets{YType::uint64, "ls-ack-in-packets"},
    ls_ack_out_ls_as{YType::uint64, "ls-ack-out-ls-as"},
    ls_ack_out_packets{YType::uint64, "ls-ack-out-packets"},
    ls_req_in_ls_as{YType::uint64, "ls-req-in-ls-as"},
    ls_req_in_packets{YType::uint64, "ls-req-in-packets"},
    ls_req_out_ls_as{YType::uint64, "ls-req-out-ls-as"},
    ls_req_out_packets{YType::uint64, "ls-req-out-packets"},
    ls_upd_in_ignored{YType::uint64, "ls-upd-in-ignored"},
    ls_upd_in_ls_as{YType::uint64, "ls-upd-in-ls-as"},
    ls_upd_in_packets{YType::uint64, "ls-upd-in-packets"},
    ls_upd_out_ls_as{YType::uint64, "ls-upd-out-ls-as"},
    ls_upd_out_packets{YType::uint64, "ls-upd-out-packets"},
    total_in_packets{YType::uint64, "total-in-packets"},
    total_out_packets{YType::uint64, "total-out-packets"}
{
    yang_name = "protocol-stat"; yang_parent_name = "protocol-stats";
}

Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::~ProtocolStat()
{
}

bool Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::has_data() const
{
    return interface_name.is_set
	|| checksum_err.is_set
	|| dbdes_in_ls_as.is_set
	|| dbdes_in_packets.is_set
	|| dbdes_out_ls_as.is_set
	|| dbdes_out_packets.is_set
	|| dropped_in_gs.is_set
	|| hello_in_packets.is_set
	|| hello_out_packets.is_set
	|| ls_ack_in_ls_as.is_set
	|| ls_ack_in_packets.is_set
	|| ls_ack_out_ls_as.is_set
	|| ls_ack_out_packets.is_set
	|| ls_req_in_ls_as.is_set
	|| ls_req_in_packets.is_set
	|| ls_req_out_ls_as.is_set
	|| ls_req_out_packets.is_set
	|| ls_upd_in_ignored.is_set
	|| ls_upd_in_ls_as.is_set
	|| ls_upd_in_packets.is_set
	|| ls_upd_out_ls_as.is_set
	|| ls_upd_out_packets.is_set
	|| total_in_packets.is_set
	|| total_out_packets.is_set;
}

bool Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(checksum_err.operation)
	|| is_set(dbdes_in_ls_as.operation)
	|| is_set(dbdes_in_packets.operation)
	|| is_set(dbdes_out_ls_as.operation)
	|| is_set(dbdes_out_packets.operation)
	|| is_set(dropped_in_gs.operation)
	|| is_set(hello_in_packets.operation)
	|| is_set(hello_out_packets.operation)
	|| is_set(ls_ack_in_ls_as.operation)
	|| is_set(ls_ack_in_packets.operation)
	|| is_set(ls_ack_out_ls_as.operation)
	|| is_set(ls_ack_out_packets.operation)
	|| is_set(ls_req_in_ls_as.operation)
	|| is_set(ls_req_in_packets.operation)
	|| is_set(ls_req_out_ls_as.operation)
	|| is_set(ls_req_out_packets.operation)
	|| is_set(ls_upd_in_ignored.operation)
	|| is_set(ls_upd_in_ls_as.operation)
	|| is_set(ls_upd_in_packets.operation)
	|| is_set(ls_upd_out_ls_as.operation)
	|| is_set(ls_upd_out_packets.operation)
	|| is_set(total_in_packets.operation)
	|| is_set(total_out_packets.operation);
}

std::string Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stat" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStat' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checksum_err.is_set || is_set(checksum_err.operation)) leaf_name_data.push_back(checksum_err.get_name_leafdata());
    if (dbdes_in_ls_as.is_set || is_set(dbdes_in_ls_as.operation)) leaf_name_data.push_back(dbdes_in_ls_as.get_name_leafdata());
    if (dbdes_in_packets.is_set || is_set(dbdes_in_packets.operation)) leaf_name_data.push_back(dbdes_in_packets.get_name_leafdata());
    if (dbdes_out_ls_as.is_set || is_set(dbdes_out_ls_as.operation)) leaf_name_data.push_back(dbdes_out_ls_as.get_name_leafdata());
    if (dbdes_out_packets.is_set || is_set(dbdes_out_packets.operation)) leaf_name_data.push_back(dbdes_out_packets.get_name_leafdata());
    if (dropped_in_gs.is_set || is_set(dropped_in_gs.operation)) leaf_name_data.push_back(dropped_in_gs.get_name_leafdata());
    if (hello_in_packets.is_set || is_set(hello_in_packets.operation)) leaf_name_data.push_back(hello_in_packets.get_name_leafdata());
    if (hello_out_packets.is_set || is_set(hello_out_packets.operation)) leaf_name_data.push_back(hello_out_packets.get_name_leafdata());
    if (ls_ack_in_ls_as.is_set || is_set(ls_ack_in_ls_as.operation)) leaf_name_data.push_back(ls_ack_in_ls_as.get_name_leafdata());
    if (ls_ack_in_packets.is_set || is_set(ls_ack_in_packets.operation)) leaf_name_data.push_back(ls_ack_in_packets.get_name_leafdata());
    if (ls_ack_out_ls_as.is_set || is_set(ls_ack_out_ls_as.operation)) leaf_name_data.push_back(ls_ack_out_ls_as.get_name_leafdata());
    if (ls_ack_out_packets.is_set || is_set(ls_ack_out_packets.operation)) leaf_name_data.push_back(ls_ack_out_packets.get_name_leafdata());
    if (ls_req_in_ls_as.is_set || is_set(ls_req_in_ls_as.operation)) leaf_name_data.push_back(ls_req_in_ls_as.get_name_leafdata());
    if (ls_req_in_packets.is_set || is_set(ls_req_in_packets.operation)) leaf_name_data.push_back(ls_req_in_packets.get_name_leafdata());
    if (ls_req_out_ls_as.is_set || is_set(ls_req_out_ls_as.operation)) leaf_name_data.push_back(ls_req_out_ls_as.get_name_leafdata());
    if (ls_req_out_packets.is_set || is_set(ls_req_out_packets.operation)) leaf_name_data.push_back(ls_req_out_packets.get_name_leafdata());
    if (ls_upd_in_ignored.is_set || is_set(ls_upd_in_ignored.operation)) leaf_name_data.push_back(ls_upd_in_ignored.get_name_leafdata());
    if (ls_upd_in_ls_as.is_set || is_set(ls_upd_in_ls_as.operation)) leaf_name_data.push_back(ls_upd_in_ls_as.get_name_leafdata());
    if (ls_upd_in_packets.is_set || is_set(ls_upd_in_packets.operation)) leaf_name_data.push_back(ls_upd_in_packets.get_name_leafdata());
    if (ls_upd_out_ls_as.is_set || is_set(ls_upd_out_ls_as.operation)) leaf_name_data.push_back(ls_upd_out_ls_as.get_name_leafdata());
    if (ls_upd_out_packets.is_set || is_set(ls_upd_out_packets.operation)) leaf_name_data.push_back(ls_upd_out_packets.get_name_leafdata());
    if (total_in_packets.is_set || is_set(total_in_packets.operation)) leaf_name_data.push_back(total_in_packets.get_name_leafdata());
    if (total_out_packets.is_set || is_set(total_out_packets.operation)) leaf_name_data.push_back(total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "checksum-err")
    {
        checksum_err = value;
    }
    if(value_path == "dbdes-in-ls-as")
    {
        dbdes_in_ls_as = value;
    }
    if(value_path == "dbdes-in-packets")
    {
        dbdes_in_packets = value;
    }
    if(value_path == "dbdes-out-ls-as")
    {
        dbdes_out_ls_as = value;
    }
    if(value_path == "dbdes-out-packets")
    {
        dbdes_out_packets = value;
    }
    if(value_path == "dropped-in-gs")
    {
        dropped_in_gs = value;
    }
    if(value_path == "hello-in-packets")
    {
        hello_in_packets = value;
    }
    if(value_path == "hello-out-packets")
    {
        hello_out_packets = value;
    }
    if(value_path == "ls-ack-in-ls-as")
    {
        ls_ack_in_ls_as = value;
    }
    if(value_path == "ls-ack-in-packets")
    {
        ls_ack_in_packets = value;
    }
    if(value_path == "ls-ack-out-ls-as")
    {
        ls_ack_out_ls_as = value;
    }
    if(value_path == "ls-ack-out-packets")
    {
        ls_ack_out_packets = value;
    }
    if(value_path == "ls-req-in-ls-as")
    {
        ls_req_in_ls_as = value;
    }
    if(value_path == "ls-req-in-packets")
    {
        ls_req_in_packets = value;
    }
    if(value_path == "ls-req-out-ls-as")
    {
        ls_req_out_ls_as = value;
    }
    if(value_path == "ls-req-out-packets")
    {
        ls_req_out_packets = value;
    }
    if(value_path == "ls-upd-in-ignored")
    {
        ls_upd_in_ignored = value;
    }
    if(value_path == "ls-upd-in-ls-as")
    {
        ls_upd_in_ls_as = value;
    }
    if(value_path == "ls-upd-in-packets")
    {
        ls_upd_in_packets = value;
    }
    if(value_path == "ls-upd-out-ls-as")
    {
        ls_upd_out_ls_as = value;
    }
    if(value_path == "ls-upd-out-packets")
    {
        ls_upd_out_packets = value;
    }
    if(value_path == "total-in-packets")
    {
        total_in_packets = value;
    }
    if(value_path == "total-out-packets")
    {
        total_out_packets = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;
    children["spf-header"] = spf_header;

    yang_name = "spf-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::SpfStats::~SpfStats()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-header")
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
        else
        {
            spf_header = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader>();
            spf_header->parent = this;
            children["spf-header"] = spf_header;
        }
        return children.at("spf-header");
    }

    if(child_yang_name == "spf-runtime")
    {
        for(auto const & c : spf_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime>();
        c->parent = this;
        spf_runtime.push_back(std::move(c));
        children[segment_path] = spf_runtime.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::get_children()
{
    if(children.find("spf-header") == children.end())
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
    }

    for (auto const & c : spf_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    header_router_id{YType::str, "header-router-id"},
    header_sp_fs{YType::uint32, "header-sp-fs"}
{
    yang_name = "spf-header"; yang_parent_name = "spf-stats";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_data())
            return true;
    }
    return header_router_id.is_set
	|| header_sp_fs.is_set;
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(header_router_id.operation)
	|| is_set(header_sp_fs.operation);
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_router_id.is_set || is_set(header_router_id.operation)) leaf_name_data.push_back(header_router_id.get_name_leafdata());
    if (header_sp_fs.is_set || is_set(header_sp_fs.operation)) leaf_name_data.push_back(header_sp_fs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-summary")
    {
        for(auto const & c : area_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary>();
        c->parent = this;
        area_summary.push_back(std::move(c));
        children[segment_path] = area_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::get_children()
{
    for (auto const & c : area_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-router-id")
    {
        header_router_id = value;
    }
    if(value_path == "header-sp-fs")
    {
        header_sp_fs = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::AreaSummary()
    :
    area_id{YType::uint32, "area-id"},
    sp_fs{YType::uint32, "sp-fs"}
{
    yang_name = "area-summary"; yang_parent_name = "spf-header";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::~AreaSummary()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::has_data() const
{
    return area_id.is_set
	|| sp_fs.is_set;
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(sp_fs.operation);
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (sp_fs.is_set || is_set(sp_fs.operation)) leaf_name_data.push_back(sp_fs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "sp-fs")
    {
        sp_fs = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::SpfRuntime()
    :
    lsa_changes{YType::int16, "lsa-changes"},
    reason_flags{YType::str, "reason-flags"},
    rib_add_routes{YType::uint32, "rib-add-routes"},
    rib_delete_routes{YType::uint32, "rib-delete-routes"},
    start_time{YType::uint32, "start-time"}
    	,
    global_time(std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime>())
{
    global_time->parent = this;
    children["global-time"] = global_time;

    yang_name = "spf-runtime"; yang_parent_name = "spf-stats";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::~SpfRuntime()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return lsa_changes.is_set
	|| reason_flags.is_set
	|| rib_add_routes.is_set
	|| rib_delete_routes.is_set
	|| start_time.is_set
	|| (global_time !=  nullptr && global_time->has_data());
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsa_changes.operation)
	|| is_set(reason_flags.operation)
	|| is_set(rib_add_routes.operation)
	|| is_set(rib_delete_routes.operation)
	|| is_set(start_time.operation)
	|| (global_time !=  nullptr && global_time->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-runtime";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRuntime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_changes.is_set || is_set(lsa_changes.operation)) leaf_name_data.push_back(lsa_changes.get_name_leafdata());
    if (reason_flags.is_set || is_set(reason_flags.operation)) leaf_name_data.push_back(reason_flags.get_name_leafdata());
    if (rib_add_routes.is_set || is_set(rib_add_routes.operation)) leaf_name_data.push_back(rib_add_routes.get_name_leafdata());
    if (rib_delete_routes.is_set || is_set(rib_delete_routes.operation)) leaf_name_data.push_back(rib_delete_routes.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-stat")
    {
        for(auto const & c : area_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat>();
        c->parent = this;
        area_stat.push_back(std::move(c));
        children[segment_path] = area_stat.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "global-time")
    {
        if(global_time != nullptr)
        {
            children["global-time"] = global_time;
        }
        else
        {
            global_time = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime>();
            global_time->parent = this;
            children["global-time"] = global_time;
        }
        return children.at("global-time");
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::get_children()
{
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("global-time") == children.end())
    {
        if(global_time != nullptr)
        {
            children["global-time"] = global_time;
        }
    }

    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-changes")
    {
        lsa_changes = value;
    }
    if(value_path == "reason-flags")
    {
        reason_flags = value;
    }
    if(value_path == "rib-add-routes")
    {
        rib_add_routes = value;
    }
    if(value_path == "rib-delete-routes")
    {
        rib_delete_routes = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::GlobalTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{
    yang_name = "global-time"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::~GlobalTime()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::has_data() const
{
    return dijkstra.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::has_operation() const
{
    return is_set(operation)
	|| is_set(dijkstra.operation)
	|| is_set(external_prefix.operation)
	|| is_set(external_prefix_del.operation)
	|| is_set(inter_prefix.operation)
	|| is_set(inter_prefix_del.operation)
	|| is_set(intra_prefix.operation)
	|| is_set(intra_prefix_del.operation)
	|| is_set(rib_add.operation)
	|| is_set(rib_del.operation);
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.operation)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.operation)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.operation)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.operation)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.operation)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.operation)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.operation)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.operation)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.operation)) leaf_name_data.push_back(rib_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::Lsa()
    :
    lsa_advertising_router{YType::str, "lsa-advertising-router"},
    lsa_area_id{YType::uint32, "lsa-area-id"},
    lsa_flush{YType::boolean, "lsa-flush"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::uint8, "lsa-type"}
{
    yang_name = "lsa"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::has_data() const
{
    return lsa_advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_flush.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set;
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_advertising_router.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_flush.operation)
	|| is_set(lsa_id.operation)
	|| is_set(lsa_type.operation);
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_advertising_router.is_set || is_set(lsa_advertising_router.operation)) leaf_name_data.push_back(lsa_advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_flush.is_set || is_set(lsa_flush.operation)) leaf_name_data.push_back(lsa_flush.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-advertising-router")
    {
        lsa_advertising_router = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-flush")
    {
        lsa_flush = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::AreaStat()
    :
    spf_stat_area_id{YType::uint32, "spf-stat-area-id"},
    spf_stat_lsa_type_count{YType::uint32, "spf-stat-lsa-type-count"}
    	,
    spf_stat_time(std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>())
{
    spf_stat_time->parent = this;
    children["spf-stat-time"] = spf_stat_time;

    yang_name = "area-stat"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::~AreaStat()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::has_data() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return spf_stat_area_id.is_set
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_data());
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::has_operation() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(spf_stat_area_id.operation)
	|| is_set(spf_stat_lsa_type_count.operation)
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_operation());
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStat' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_stat_area_id.is_set || is_set(spf_stat_area_id.operation)) leaf_name_data.push_back(spf_stat_area_id.get_name_leafdata());

    auto spf_stat_lsa_type_count_name_datas = spf_stat_lsa_type_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spf_stat_lsa_type_count_name_datas.begin(), spf_stat_lsa_type_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-stat-time")
    {
        if(spf_stat_time != nullptr)
        {
            children["spf-stat-time"] = spf_stat_time;
        }
        else
        {
            spf_stat_time = std::make_shared<Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>();
            spf_stat_time->parent = this;
            children["spf-stat-time"] = spf_stat_time;
        }
        return children.at("spf-stat-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::get_children()
{
    if(children.find("spf-stat-time") == children.end())
    {
        if(spf_stat_time != nullptr)
        {
            children["spf-stat-time"] = spf_stat_time;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-stat-area-id")
    {
        spf_stat_area_id = value;
    }
    if(value_path == "spf-stat-lsa-type-count")
    {
        spf_stat_lsa_type_count.append(value);
    }
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::SpfStatTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{
    yang_name = "spf-stat-time"; yang_parent_name = "area-stat";
}

Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::~SpfStatTime()
{
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_data() const
{
    return dijkstra.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_operation() const
{
    return is_set(operation)
	|| is_set(dijkstra.operation)
	|| is_set(external_prefix.operation)
	|| is_set(external_prefix_del.operation)
	|| is_set(inter_prefix.operation)
	|| is_set(inter_prefix_del.operation)
	|| is_set(intra_prefix.operation)
	|| is_set(intra_prefix_del.operation)
	|| is_set(rib_add.operation)
	|| is_set(rib_del.operation);
}

std::string Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stat-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStatTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.operation)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.operation)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.operation)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.operation)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.operation)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.operation)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.operation)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.operation)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.operation)) leaf_name_data.push_back(rib_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
    }
}

Ospfv3::Processes::Process::Statistics::RawioStats::RawioStats()
    :
    in_bytes{YType::uint64, "in-bytes"},
    in_error_drops{YType::uint64, "in-error-drops"},
    in_handle_drops{YType::uint64, "in-handle-drops"},
    in_ipsec_drops{YType::uint64, "in-ipsec-drops"},
    in_long_packets{YType::uint64, "in-long-packets"},
    in_malloc_drops{YType::uint64, "in-malloc-drops"},
    in_packets{YType::uint64, "in-packets"},
    in_queue_drops{YType::uint64, "in-queue-drops"},
    in_short_drops{YType::uint64, "in-short-drops"},
    out_bytes{YType::uint64, "out-bytes"},
    out_error_drops{YType::uint64, "out-error-drops"},
    out_ipsec_drops{YType::uint64, "out-ipsec-drops"},
    out_nofd_drops{YType::uint64, "out-nofd-drops"},
    out_nopak_drops{YType::uint64, "out-nopak-drops"},
    out_packets{YType::uint64, "out-packets"},
    out_pakapi_errors{YType::uint64, "out-pakapi-errors"},
    raw_conn_close{YType::uint64, "raw-conn-close"},
    raw_conn_error{YType::uint64, "raw-conn-error"},
    raw_conn_open{YType::uint64, "raw-conn-open"},
    raw_conn_state{YType::uint32, "raw-conn-state"}
{
    yang_name = "rawio-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::RawioStats::~RawioStats()
{
}

bool Ospfv3::Processes::Process::Statistics::RawioStats::has_data() const
{
    return in_bytes.is_set
	|| in_error_drops.is_set
	|| in_handle_drops.is_set
	|| in_ipsec_drops.is_set
	|| in_long_packets.is_set
	|| in_malloc_drops.is_set
	|| in_packets.is_set
	|| in_queue_drops.is_set
	|| in_short_drops.is_set
	|| out_bytes.is_set
	|| out_error_drops.is_set
	|| out_ipsec_drops.is_set
	|| out_nofd_drops.is_set
	|| out_nopak_drops.is_set
	|| out_packets.is_set
	|| out_pakapi_errors.is_set
	|| raw_conn_close.is_set
	|| raw_conn_error.is_set
	|| raw_conn_open.is_set
	|| raw_conn_state.is_set;
}

bool Ospfv3::Processes::Process::Statistics::RawioStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_bytes.operation)
	|| is_set(in_error_drops.operation)
	|| is_set(in_handle_drops.operation)
	|| is_set(in_ipsec_drops.operation)
	|| is_set(in_long_packets.operation)
	|| is_set(in_malloc_drops.operation)
	|| is_set(in_packets.operation)
	|| is_set(in_queue_drops.operation)
	|| is_set(in_short_drops.operation)
	|| is_set(out_bytes.operation)
	|| is_set(out_error_drops.operation)
	|| is_set(out_ipsec_drops.operation)
	|| is_set(out_nofd_drops.operation)
	|| is_set(out_nopak_drops.operation)
	|| is_set(out_packets.operation)
	|| is_set(out_pakapi_errors.operation)
	|| is_set(raw_conn_close.operation)
	|| is_set(raw_conn_error.operation)
	|| is_set(raw_conn_open.operation)
	|| is_set(raw_conn_state.operation);
}

std::string Ospfv3::Processes::Process::Statistics::RawioStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rawio-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::RawioStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RawioStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bytes.is_set || is_set(in_bytes.operation)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_error_drops.is_set || is_set(in_error_drops.operation)) leaf_name_data.push_back(in_error_drops.get_name_leafdata());
    if (in_handle_drops.is_set || is_set(in_handle_drops.operation)) leaf_name_data.push_back(in_handle_drops.get_name_leafdata());
    if (in_ipsec_drops.is_set || is_set(in_ipsec_drops.operation)) leaf_name_data.push_back(in_ipsec_drops.get_name_leafdata());
    if (in_long_packets.is_set || is_set(in_long_packets.operation)) leaf_name_data.push_back(in_long_packets.get_name_leafdata());
    if (in_malloc_drops.is_set || is_set(in_malloc_drops.operation)) leaf_name_data.push_back(in_malloc_drops.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_queue_drops.is_set || is_set(in_queue_drops.operation)) leaf_name_data.push_back(in_queue_drops.get_name_leafdata());
    if (in_short_drops.is_set || is_set(in_short_drops.operation)) leaf_name_data.push_back(in_short_drops.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.operation)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_error_drops.is_set || is_set(out_error_drops.operation)) leaf_name_data.push_back(out_error_drops.get_name_leafdata());
    if (out_ipsec_drops.is_set || is_set(out_ipsec_drops.operation)) leaf_name_data.push_back(out_ipsec_drops.get_name_leafdata());
    if (out_nofd_drops.is_set || is_set(out_nofd_drops.operation)) leaf_name_data.push_back(out_nofd_drops.get_name_leafdata());
    if (out_nopak_drops.is_set || is_set(out_nopak_drops.operation)) leaf_name_data.push_back(out_nopak_drops.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_pakapi_errors.is_set || is_set(out_pakapi_errors.operation)) leaf_name_data.push_back(out_pakapi_errors.get_name_leafdata());
    if (raw_conn_close.is_set || is_set(raw_conn_close.operation)) leaf_name_data.push_back(raw_conn_close.get_name_leafdata());
    if (raw_conn_error.is_set || is_set(raw_conn_error.operation)) leaf_name_data.push_back(raw_conn_error.get_name_leafdata());
    if (raw_conn_open.is_set || is_set(raw_conn_open.operation)) leaf_name_data.push_back(raw_conn_open.get_name_leafdata());
    if (raw_conn_state.is_set || is_set(raw_conn_state.operation)) leaf_name_data.push_back(raw_conn_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::RawioStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::RawioStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::RawioStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-bytes")
    {
        in_bytes = value;
    }
    if(value_path == "in-error-drops")
    {
        in_error_drops = value;
    }
    if(value_path == "in-handle-drops")
    {
        in_handle_drops = value;
    }
    if(value_path == "in-ipsec-drops")
    {
        in_ipsec_drops = value;
    }
    if(value_path == "in-long-packets")
    {
        in_long_packets = value;
    }
    if(value_path == "in-malloc-drops")
    {
        in_malloc_drops = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "in-queue-drops")
    {
        in_queue_drops = value;
    }
    if(value_path == "in-short-drops")
    {
        in_short_drops = value;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
    }
    if(value_path == "out-error-drops")
    {
        out_error_drops = value;
    }
    if(value_path == "out-ipsec-drops")
    {
        out_ipsec_drops = value;
    }
    if(value_path == "out-nofd-drops")
    {
        out_nofd_drops = value;
    }
    if(value_path == "out-nopak-drops")
    {
        out_nopak_drops = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "out-pakapi-errors")
    {
        out_pakapi_errors = value;
    }
    if(value_path == "raw-conn-close")
    {
        raw_conn_close = value;
    }
    if(value_path == "raw-conn-error")
    {
        raw_conn_error = value;
    }
    if(value_path == "raw-conn-open")
    {
        raw_conn_open = value;
    }
    if(value_path == "raw-conn-state")
    {
        raw_conn_state = value;
    }
}

Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::PrefixPriorityStats()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "prefix-priority-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::~PrefixPriorityStats()
{
}

bool Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixPriorityStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::PrefixPriorityStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::VrfRibBatchStats()
    :
    batches_sent{YType::uint32, "batches-sent"},
    max_routes{YType::uint32, "max-routes"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_sent{YType::uint32, "paths-sent"},
    routes_pending{YType::uint32, "routes-pending"},
    routes_sent{YType::uint32, "routes-sent"}
{
    yang_name = "vrf-rib-batch-stats"; yang_parent_name = "statistics";
}

Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::~VrfRibBatchStats()
{
}

bool Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::has_data() const
{
    return batches_sent.is_set
	|| max_routes.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| paths_pending.is_set
	|| paths_sent.is_set
	|| routes_pending.is_set
	|| routes_sent.is_set;
}

bool Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::has_operation() const
{
    return is_set(operation)
	|| is_set(batches_sent.operation)
	|| is_set(max_routes.operation)
	|| is_set(paths_add.operation)
	|| is_set(paths_add_errs.operation)
	|| is_set(paths_del.operation)
	|| is_set(paths_del_errs.operation)
	|| is_set(paths_pending.operation)
	|| is_set(paths_sent.operation)
	|| is_set(routes_pending.operation)
	|| is_set(routes_sent.operation);
}

std::string Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-rib-batch-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRibBatchStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.operation)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.operation)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.operation)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.operation)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.operation)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.operation)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.operation)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.operation)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.operation)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.operation)) leaf_name_data.push_back(routes_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Statistics::VrfRibBatchStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DefaultVrf()
    :
    area_informations(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaInformations>())
	,areas(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas>())
	,bad_checksums(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BadChecksums>())
	,border_routers(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BorderRouters>())
	,connected_routes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes>())
	,database_summary_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable>())
	,database_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable>())
	,external_routes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes>())
	,fast_reroutes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroutes>())
	,flood_list_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable>())
	,interface_brief_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable>())
	,interface_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable>())
	,internal_routes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes>())
	,neighbor_detail_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable>())
	,neighbor_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable>())
	,protocol_areas(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas>())
	,redistributions(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributions>())
	,request_list_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable>())
	,retransmission_list_process_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable>())
	,route_summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RouteSummary>())
	,sham_link_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable>())
	,summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary>())
	,summary_prefixes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes>())
	,virtual_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VirtualLink>())
	,vrf_statistics(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics>())
{
    area_informations->parent = this;
    children["area-informations"] = area_informations;

    areas->parent = this;
    children["areas"] = areas;

    bad_checksums->parent = this;
    children["bad-checksums"] = bad_checksums;

    border_routers->parent = this;
    children["border-routers"] = border_routers;

    connected_routes->parent = this;
    children["connected-routes"] = connected_routes;

    database_summary_table->parent = this;
    children["database-summary-table"] = database_summary_table;

    database_table->parent = this;
    children["database-table"] = database_table;

    external_routes->parent = this;
    children["external-routes"] = external_routes;

    fast_reroutes->parent = this;
    children["fast-reroutes"] = fast_reroutes;

    flood_list_process_table->parent = this;
    children["flood-list-process-table"] = flood_list_process_table;

    interface_brief_process_table->parent = this;
    children["interface-brief-process-table"] = interface_brief_process_table;

    interface_process_table->parent = this;
    children["interface-process-table"] = interface_process_table;

    internal_routes->parent = this;
    children["internal-routes"] = internal_routes;

    neighbor_detail_process_table->parent = this;
    children["neighbor-detail-process-table"] = neighbor_detail_process_table;

    neighbor_process_table->parent = this;
    children["neighbor-process-table"] = neighbor_process_table;

    protocol_areas->parent = this;
    children["protocol-areas"] = protocol_areas;

    redistributions->parent = this;
    children["redistributions"] = redistributions;

    request_list_process_table->parent = this;
    children["request-list-process-table"] = request_list_process_table;

    retransmission_list_process_table->parent = this;
    children["retransmission-list-process-table"] = retransmission_list_process_table;

    route_summary->parent = this;
    children["route-summary"] = route_summary;

    sham_link_table->parent = this;
    children["sham-link-table"] = sham_link_table;

    summary->parent = this;
    children["summary"] = summary;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    virtual_link->parent = this;
    children["virtual-link"] = virtual_link;

    vrf_statistics->parent = this;
    children["vrf-statistics"] = vrf_statistics;

    yang_name = "default-vrf"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::has_data() const
{
    return (area_informations !=  nullptr && area_informations->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (bad_checksums !=  nullptr && bad_checksums->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (database_summary_table !=  nullptr && database_summary_table->has_data())
	|| (database_table !=  nullptr && database_table->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data())
	|| (fast_reroutes !=  nullptr && fast_reroutes->has_data())
	|| (flood_list_process_table !=  nullptr && flood_list_process_table->has_data())
	|| (interface_brief_process_table !=  nullptr && interface_brief_process_table->has_data())
	|| (interface_process_table !=  nullptr && interface_process_table->has_data())
	|| (internal_routes !=  nullptr && internal_routes->has_data())
	|| (neighbor_detail_process_table !=  nullptr && neighbor_detail_process_table->has_data())
	|| (neighbor_process_table !=  nullptr && neighbor_process_table->has_data())
	|| (protocol_areas !=  nullptr && protocol_areas->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (request_list_process_table !=  nullptr && request_list_process_table->has_data())
	|| (retransmission_list_process_table !=  nullptr && retransmission_list_process_table->has_data())
	|| (route_summary !=  nullptr && route_summary->has_data())
	|| (sham_link_table !=  nullptr && sham_link_table->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (virtual_link !=  nullptr && virtual_link->has_data())
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (area_informations !=  nullptr && area_informations->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (bad_checksums !=  nullptr && bad_checksums->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (database_summary_table !=  nullptr && database_summary_table->has_operation())
	|| (database_table !=  nullptr && database_table->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation())
	|| (fast_reroutes !=  nullptr && fast_reroutes->has_operation())
	|| (flood_list_process_table !=  nullptr && flood_list_process_table->has_operation())
	|| (interface_brief_process_table !=  nullptr && interface_brief_process_table->has_operation())
	|| (interface_process_table !=  nullptr && interface_process_table->has_operation())
	|| (internal_routes !=  nullptr && internal_routes->has_operation())
	|| (neighbor_detail_process_table !=  nullptr && neighbor_detail_process_table->has_operation())
	|| (neighbor_process_table !=  nullptr && neighbor_process_table->has_operation())
	|| (protocol_areas !=  nullptr && protocol_areas->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (request_list_process_table !=  nullptr && request_list_process_table->has_operation())
	|| (retransmission_list_process_table !=  nullptr && retransmission_list_process_table->has_operation())
	|| (route_summary !=  nullptr && route_summary->has_operation())
	|| (sham_link_table !=  nullptr && sham_link_table->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (virtual_link !=  nullptr && virtual_link->has_operation())
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultVrf' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-informations")
    {
        if(area_informations != nullptr)
        {
            children["area-informations"] = area_informations;
        }
        else
        {
            area_informations = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaInformations>();
            area_informations->parent = this;
            children["area-informations"] = area_informations;
        }
        return children.at("area-informations");
    }

    if(child_yang_name == "areas")
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
        else
        {
            areas = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas>();
            areas->parent = this;
            children["areas"] = areas;
        }
        return children.at("areas");
    }

    if(child_yang_name == "bad-checksums")
    {
        if(bad_checksums != nullptr)
        {
            children["bad-checksums"] = bad_checksums;
        }
        else
        {
            bad_checksums = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BadChecksums>();
            bad_checksums->parent = this;
            children["bad-checksums"] = bad_checksums;
        }
        return children.at("bad-checksums");
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
        else
        {
            border_routers = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BorderRouters>();
            border_routers->parent = this;
            children["border-routers"] = border_routers;
        }
        return children.at("border-routers");
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
        else
        {
            connected_routes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes>();
            connected_routes->parent = this;
            children["connected-routes"] = connected_routes;
        }
        return children.at("connected-routes");
    }

    if(child_yang_name == "database-summary-table")
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
        else
        {
            database_summary_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable>();
            database_summary_table->parent = this;
            children["database-summary-table"] = database_summary_table;
        }
        return children.at("database-summary-table");
    }

    if(child_yang_name == "database-table")
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
        else
        {
            database_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable>();
            database_table->parent = this;
            children["database-table"] = database_table;
        }
        return children.at("database-table");
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
        else
        {
            external_routes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes>();
            external_routes->parent = this;
            children["external-routes"] = external_routes;
        }
        return children.at("external-routes");
    }

    if(child_yang_name == "fast-reroutes")
    {
        if(fast_reroutes != nullptr)
        {
            children["fast-reroutes"] = fast_reroutes;
        }
        else
        {
            fast_reroutes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroutes>();
            fast_reroutes->parent = this;
            children["fast-reroutes"] = fast_reroutes;
        }
        return children.at("fast-reroutes");
    }

    if(child_yang_name == "flood-list-process-table")
    {
        if(flood_list_process_table != nullptr)
        {
            children["flood-list-process-table"] = flood_list_process_table;
        }
        else
        {
            flood_list_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable>();
            flood_list_process_table->parent = this;
            children["flood-list-process-table"] = flood_list_process_table;
        }
        return children.at("flood-list-process-table");
    }

    if(child_yang_name == "interface-brief-process-table")
    {
        if(interface_brief_process_table != nullptr)
        {
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
        else
        {
            interface_brief_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable>();
            interface_brief_process_table->parent = this;
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
        return children.at("interface-brief-process-table");
    }

    if(child_yang_name == "interface-process-table")
    {
        if(interface_process_table != nullptr)
        {
            children["interface-process-table"] = interface_process_table;
        }
        else
        {
            interface_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable>();
            interface_process_table->parent = this;
            children["interface-process-table"] = interface_process_table;
        }
        return children.at("interface-process-table");
    }

    if(child_yang_name == "internal-routes")
    {
        if(internal_routes != nullptr)
        {
            children["internal-routes"] = internal_routes;
        }
        else
        {
            internal_routes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes>();
            internal_routes->parent = this;
            children["internal-routes"] = internal_routes;
        }
        return children.at("internal-routes");
    }

    if(child_yang_name == "neighbor-detail-process-table")
    {
        if(neighbor_detail_process_table != nullptr)
        {
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
        else
        {
            neighbor_detail_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable>();
            neighbor_detail_process_table->parent = this;
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
        return children.at("neighbor-detail-process-table");
    }

    if(child_yang_name == "neighbor-process-table")
    {
        if(neighbor_process_table != nullptr)
        {
            children["neighbor-process-table"] = neighbor_process_table;
        }
        else
        {
            neighbor_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable>();
            neighbor_process_table->parent = this;
            children["neighbor-process-table"] = neighbor_process_table;
        }
        return children.at("neighbor-process-table");
    }

    if(child_yang_name == "protocol-areas")
    {
        if(protocol_areas != nullptr)
        {
            children["protocol-areas"] = protocol_areas;
        }
        else
        {
            protocol_areas = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas>();
            protocol_areas->parent = this;
            children["protocol-areas"] = protocol_areas;
        }
        return children.at("protocol-areas");
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
        else
        {
            redistributions = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributions>();
            redistributions->parent = this;
            children["redistributions"] = redistributions;
        }
        return children.at("redistributions");
    }

    if(child_yang_name == "request-list-process-table")
    {
        if(request_list_process_table != nullptr)
        {
            children["request-list-process-table"] = request_list_process_table;
        }
        else
        {
            request_list_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable>();
            request_list_process_table->parent = this;
            children["request-list-process-table"] = request_list_process_table;
        }
        return children.at("request-list-process-table");
    }

    if(child_yang_name == "retransmission-list-process-table")
    {
        if(retransmission_list_process_table != nullptr)
        {
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
        else
        {
            retransmission_list_process_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable>();
            retransmission_list_process_table->parent = this;
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
        return children.at("retransmission-list-process-table");
    }

    if(child_yang_name == "route-summary")
    {
        if(route_summary != nullptr)
        {
            children["route-summary"] = route_summary;
        }
        else
        {
            route_summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RouteSummary>();
            route_summary->parent = this;
            children["route-summary"] = route_summary;
        }
        return children.at("route-summary");
    }

    if(child_yang_name == "sham-link-table")
    {
        if(sham_link_table != nullptr)
        {
            children["sham-link-table"] = sham_link_table;
        }
        else
        {
            sham_link_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable>();
            sham_link_table->parent = this;
            children["sham-link-table"] = sham_link_table;
        }
        return children.at("sham-link-table");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "virtual-link")
    {
        if(virtual_link != nullptr)
        {
            children["virtual-link"] = virtual_link;
        }
        else
        {
            virtual_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VirtualLink>();
            virtual_link->parent = this;
            children["virtual-link"] = virtual_link;
        }
        return children.at("virtual-link");
    }

    if(child_yang_name == "vrf-statistics")
    {
        if(vrf_statistics != nullptr)
        {
            children["vrf-statistics"] = vrf_statistics;
        }
        else
        {
            vrf_statistics = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics>();
            vrf_statistics->parent = this;
            children["vrf-statistics"] = vrf_statistics;
        }
        return children.at("vrf-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::get_children()
{
    if(children.find("area-informations") == children.end())
    {
        if(area_informations != nullptr)
        {
            children["area-informations"] = area_informations;
        }
    }

    if(children.find("areas") == children.end())
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
    }

    if(children.find("bad-checksums") == children.end())
    {
        if(bad_checksums != nullptr)
        {
            children["bad-checksums"] = bad_checksums;
        }
    }

    if(children.find("border-routers") == children.end())
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
    }

    if(children.find("connected-routes") == children.end())
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
    }

    if(children.find("database-summary-table") == children.end())
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
    }

    if(children.find("database-table") == children.end())
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
    }

    if(children.find("external-routes") == children.end())
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
    }

    if(children.find("fast-reroutes") == children.end())
    {
        if(fast_reroutes != nullptr)
        {
            children["fast-reroutes"] = fast_reroutes;
        }
    }

    if(children.find("flood-list-process-table") == children.end())
    {
        if(flood_list_process_table != nullptr)
        {
            children["flood-list-process-table"] = flood_list_process_table;
        }
    }

    if(children.find("interface-brief-process-table") == children.end())
    {
        if(interface_brief_process_table != nullptr)
        {
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
    }

    if(children.find("interface-process-table") == children.end())
    {
        if(interface_process_table != nullptr)
        {
            children["interface-process-table"] = interface_process_table;
        }
    }

    if(children.find("internal-routes") == children.end())
    {
        if(internal_routes != nullptr)
        {
            children["internal-routes"] = internal_routes;
        }
    }

    if(children.find("neighbor-detail-process-table") == children.end())
    {
        if(neighbor_detail_process_table != nullptr)
        {
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
    }

    if(children.find("neighbor-process-table") == children.end())
    {
        if(neighbor_process_table != nullptr)
        {
            children["neighbor-process-table"] = neighbor_process_table;
        }
    }

    if(children.find("protocol-areas") == children.end())
    {
        if(protocol_areas != nullptr)
        {
            children["protocol-areas"] = protocol_areas;
        }
    }

    if(children.find("redistributions") == children.end())
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
    }

    if(children.find("request-list-process-table") == children.end())
    {
        if(request_list_process_table != nullptr)
        {
            children["request-list-process-table"] = request_list_process_table;
        }
    }

    if(children.find("retransmission-list-process-table") == children.end())
    {
        if(retransmission_list_process_table != nullptr)
        {
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
    }

    if(children.find("route-summary") == children.end())
    {
        if(route_summary != nullptr)
        {
            children["route-summary"] = route_summary;
        }
    }

    if(children.find("sham-link-table") == children.end())
    {
        if(sham_link_table != nullptr)
        {
            children["sham-link-table"] = sham_link_table;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("virtual-link") == children.end())
    {
        if(virtual_link != nullptr)
        {
            children["virtual-link"] = virtual_link;
        }
    }

    if(children.find("vrf-statistics") == children.end())
    {
        if(vrf_statistics != nullptr)
        {
            children["vrf-statistics"] = vrf_statistics;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_metric{YType::uint32, "prefix-metric"},
    prefix_metric_type{YType::enumeration, "prefix-metric-type"},
    tag{YType::uint32, "tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| prefix_metric.is_set
	|| prefix_metric_type.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_metric.operation)
	|| is_set(prefix_metric_type.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_metric.is_set || is_set(prefix_metric.operation)) leaf_name_data.push_back(prefix_metric.get_name_leafdata());
    if (prefix_metric_type.is_set || is_set(prefix_metric_type.operation)) leaf_name_data.push_back(prefix_metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-metric")
    {
        prefix_metric = value;
    }
    if(value_path == "prefix-metric-type")
    {
        prefix_metric_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouters()
{
    yang_name = "border-routers"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::~BorderRouters()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::has_data() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::has_operation() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::BorderRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-routers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::BorderRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouters' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BorderRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "border-router")
    {
        for(auto const & c : border_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter>();
        c->parent = this;
        border_router.push_back(std::move(c));
        children[segment_path] = border_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::BorderRouters::get_children()
{
    for (auto const & c : border_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BorderRouters::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouter()
    :
    border_router_id{YType::str, "border-router-id"}
{
    yang_name = "border-router"; yang_parent_name = "border-routers";
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::~BorderRouter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::has_data() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_data())
            return true;
    }
    return border_router_id.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::has_operation() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(border_router_id.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router" <<"[border-router-id='" <<border_router_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouter' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_id.is_set || is_set(border_router_id.operation)) leaf_name_data.push_back(border_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "border-router-path")
    {
        for(auto const & c : border_router_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath>();
        c->parent = this;
        border_router_path.push_back(std::move(c));
        children[segment_path] = border_router_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_children()
{
    for (auto const & c : border_router_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-id")
    {
        border_router_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::BorderRouterPath()
    :
    border_router_area_id{YType::str, "border-router-area-id"},
    border_router_next_hop{YType::str, "border-router-next-hop"},
    border_router_route_metric{YType::uint32, "border-router-route-metric"},
    border_router_type{YType::enumeration, "border-router-type"},
    interface_name{YType::str, "interface-name"},
    is_intra_area_router{YType::boolean, "is-intra-area-router"},
    spf_version{YType::uint32, "spf-version"}
{
    yang_name = "border-router-path"; yang_parent_name = "border-router";
}

Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::~BorderRouterPath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_data() const
{
    return border_router_area_id.is_set
	|| border_router_next_hop.is_set
	|| border_router_route_metric.is_set
	|| border_router_type.is_set
	|| interface_name.is_set
	|| is_intra_area_router.is_set
	|| spf_version.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_operation() const
{
    return is_set(operation)
	|| is_set(border_router_area_id.operation)
	|| is_set(border_router_next_hop.operation)
	|| is_set(border_router_route_metric.operation)
	|| is_set(border_router_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_intra_area_router.operation)
	|| is_set(spf_version.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouterPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_area_id.is_set || is_set(border_router_area_id.operation)) leaf_name_data.push_back(border_router_area_id.get_name_leafdata());
    if (border_router_next_hop.is_set || is_set(border_router_next_hop.operation)) leaf_name_data.push_back(border_router_next_hop.get_name_leafdata());
    if (border_router_route_metric.is_set || is_set(border_router_route_metric.operation)) leaf_name_data.push_back(border_router_route_metric.get_name_leafdata());
    if (border_router_type.is_set || is_set(border_router_type.operation)) leaf_name_data.push_back(border_router_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_intra_area_router.is_set || is_set(is_intra_area_router.operation)) leaf_name_data.push_back(is_intra_area_router.get_name_leafdata());
    if (spf_version.is_set || is_set(spf_version.operation)) leaf_name_data.push_back(spf_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-area-id")
    {
        border_router_area_id = value;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop = value;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric = value;
    }
    if(value_path == "border-router-type")
    {
        border_router_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-intra-area-router")
    {
        is_intra_area_router = value;
    }
    if(value_path == "spf-version")
    {
        spf_version = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkTable()
    :
    is_sham_link_authentication_enabled{YType::boolean, "is-sham-link-authentication-enabled"},
    is_sham_link_encryption_enabled{YType::boolean, "is-sham-link-encryption-enabled"},
    is_sham_link_ip_security_active{YType::boolean, "is-sham-link-ip-security-active"},
    is_sham_link_ip_security_required{YType::boolean, "is-sham-link-ip-security-required"},
    sham_link_area{YType::str, "sham-link-area"},
    sham_link_authentication_transmit{YType::uint32, "sham-link-authentication-transmit"},
    sham_link_cost{YType::uint16, "sham-link-cost"},
    sham_link_dc_bitless_lsa{YType::uint32, "sham-link-dc-bitless-lsa"},
    sham_link_dead_interval{YType::uint32, "sham-link-dead-interval"},
    sham_link_demand_circuit{YType::boolean, "sham-link-demand-circuit"},
    sham_link_dest_address{YType::str, "sham-link-dest-address"},
    sham_link_encrypted_authentication_transmitted{YType::uint32, "sham-link-encrypted-authentication-transmitted"},
    sham_link_encryption_spi{YType::uint32, "sham-link-encryption-spi"},
    sham_link_encryption_transmitted{YType::uint32, "sham-link-encryption-transmitted"},
    sham_link_gr{YType::boolean, "sham-link-gr"},
    sham_link_gr_enabled{YType::boolean, "sham-link-gr-enabled"},
    sham_link_hello_interval{YType::uint32, "sham-link-hello-interval"},
    sham_link_ifindex{YType::uint32, "sham-link-ifindex"},
    sham_link_last_gr{YType::uint32, "sham-link-last-gr"},
    sham_link_neighbor_id{YType::str, "sham-link-neighbor-id"},
    sham_link_next_hello{YType::uint32, "sham-link-next-hello"},
    sham_link_passive{YType::boolean, "sham-link-passive"},
    sham_link_retransmission_interval{YType::uint32, "sham-link-retransmission-interval"},
    sham_link_source_address{YType::str, "sham-link-source-address"},
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_transmission_delay{YType::uint16, "sham-link-transmission-delay"},
    sham_link_wait_interval{YType::uint32, "sham-link-wait-interval"},
    virtual_link_authentication_spi{YType::uint32, "virtual-link-authentication-spi"}
    	,
    sham_link_neighbor(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor>())
{
    sham_link_neighbor->parent = this;
    children["sham-link-neighbor"] = sham_link_neighbor;

    yang_name = "sham-link-table"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::~ShamLinkTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::has_data() const
{
    return is_sham_link_authentication_enabled.is_set
	|| is_sham_link_encryption_enabled.is_set
	|| is_sham_link_ip_security_active.is_set
	|| is_sham_link_ip_security_required.is_set
	|| sham_link_area.is_set
	|| sham_link_authentication_transmit.is_set
	|| sham_link_cost.is_set
	|| sham_link_dc_bitless_lsa.is_set
	|| sham_link_dead_interval.is_set
	|| sham_link_demand_circuit.is_set
	|| sham_link_dest_address.is_set
	|| sham_link_encrypted_authentication_transmitted.is_set
	|| sham_link_encryption_spi.is_set
	|| sham_link_encryption_transmitted.is_set
	|| sham_link_gr.is_set
	|| sham_link_gr_enabled.is_set
	|| sham_link_hello_interval.is_set
	|| sham_link_ifindex.is_set
	|| sham_link_last_gr.is_set
	|| sham_link_neighbor_id.is_set
	|| sham_link_next_hello.is_set
	|| sham_link_passive.is_set
	|| sham_link_retransmission_interval.is_set
	|| sham_link_source_address.is_set
	|| sham_link_state.is_set
	|| sham_link_transmission_delay.is_set
	|| sham_link_wait_interval.is_set
	|| virtual_link_authentication_spi.is_set
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::has_operation() const
{
    return is_set(operation)
	|| is_set(is_sham_link_authentication_enabled.operation)
	|| is_set(is_sham_link_encryption_enabled.operation)
	|| is_set(is_sham_link_ip_security_active.operation)
	|| is_set(is_sham_link_ip_security_required.operation)
	|| is_set(sham_link_area.operation)
	|| is_set(sham_link_authentication_transmit.operation)
	|| is_set(sham_link_cost.operation)
	|| is_set(sham_link_dc_bitless_lsa.operation)
	|| is_set(sham_link_dead_interval.operation)
	|| is_set(sham_link_demand_circuit.operation)
	|| is_set(sham_link_dest_address.operation)
	|| is_set(sham_link_encrypted_authentication_transmitted.operation)
	|| is_set(sham_link_encryption_spi.operation)
	|| is_set(sham_link_encryption_transmitted.operation)
	|| is_set(sham_link_gr.operation)
	|| is_set(sham_link_gr_enabled.operation)
	|| is_set(sham_link_hello_interval.operation)
	|| is_set(sham_link_ifindex.operation)
	|| is_set(sham_link_last_gr.operation)
	|| is_set(sham_link_neighbor_id.operation)
	|| is_set(sham_link_next_hello.operation)
	|| is_set(sham_link_passive.operation)
	|| is_set(sham_link_retransmission_interval.operation)
	|| is_set(sham_link_source_address.operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_transmission_delay.operation)
	|| is_set(sham_link_wait_interval.operation)
	|| is_set(virtual_link_authentication_spi.operation)
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_sham_link_authentication_enabled.is_set || is_set(is_sham_link_authentication_enabled.operation)) leaf_name_data.push_back(is_sham_link_authentication_enabled.get_name_leafdata());
    if (is_sham_link_encryption_enabled.is_set || is_set(is_sham_link_encryption_enabled.operation)) leaf_name_data.push_back(is_sham_link_encryption_enabled.get_name_leafdata());
    if (is_sham_link_ip_security_active.is_set || is_set(is_sham_link_ip_security_active.operation)) leaf_name_data.push_back(is_sham_link_ip_security_active.get_name_leafdata());
    if (is_sham_link_ip_security_required.is_set || is_set(is_sham_link_ip_security_required.operation)) leaf_name_data.push_back(is_sham_link_ip_security_required.get_name_leafdata());
    if (sham_link_area.is_set || is_set(sham_link_area.operation)) leaf_name_data.push_back(sham_link_area.get_name_leafdata());
    if (sham_link_authentication_transmit.is_set || is_set(sham_link_authentication_transmit.operation)) leaf_name_data.push_back(sham_link_authentication_transmit.get_name_leafdata());
    if (sham_link_cost.is_set || is_set(sham_link_cost.operation)) leaf_name_data.push_back(sham_link_cost.get_name_leafdata());
    if (sham_link_dc_bitless_lsa.is_set || is_set(sham_link_dc_bitless_lsa.operation)) leaf_name_data.push_back(sham_link_dc_bitless_lsa.get_name_leafdata());
    if (sham_link_dead_interval.is_set || is_set(sham_link_dead_interval.operation)) leaf_name_data.push_back(sham_link_dead_interval.get_name_leafdata());
    if (sham_link_demand_circuit.is_set || is_set(sham_link_demand_circuit.operation)) leaf_name_data.push_back(sham_link_demand_circuit.get_name_leafdata());
    if (sham_link_dest_address.is_set || is_set(sham_link_dest_address.operation)) leaf_name_data.push_back(sham_link_dest_address.get_name_leafdata());
    if (sham_link_encrypted_authentication_transmitted.is_set || is_set(sham_link_encrypted_authentication_transmitted.operation)) leaf_name_data.push_back(sham_link_encrypted_authentication_transmitted.get_name_leafdata());
    if (sham_link_encryption_spi.is_set || is_set(sham_link_encryption_spi.operation)) leaf_name_data.push_back(sham_link_encryption_spi.get_name_leafdata());
    if (sham_link_encryption_transmitted.is_set || is_set(sham_link_encryption_transmitted.operation)) leaf_name_data.push_back(sham_link_encryption_transmitted.get_name_leafdata());
    if (sham_link_gr.is_set || is_set(sham_link_gr.operation)) leaf_name_data.push_back(sham_link_gr.get_name_leafdata());
    if (sham_link_gr_enabled.is_set || is_set(sham_link_gr_enabled.operation)) leaf_name_data.push_back(sham_link_gr_enabled.get_name_leafdata());
    if (sham_link_hello_interval.is_set || is_set(sham_link_hello_interval.operation)) leaf_name_data.push_back(sham_link_hello_interval.get_name_leafdata());
    if (sham_link_ifindex.is_set || is_set(sham_link_ifindex.operation)) leaf_name_data.push_back(sham_link_ifindex.get_name_leafdata());
    if (sham_link_last_gr.is_set || is_set(sham_link_last_gr.operation)) leaf_name_data.push_back(sham_link_last_gr.get_name_leafdata());
    if (sham_link_neighbor_id.is_set || is_set(sham_link_neighbor_id.operation)) leaf_name_data.push_back(sham_link_neighbor_id.get_name_leafdata());
    if (sham_link_next_hello.is_set || is_set(sham_link_next_hello.operation)) leaf_name_data.push_back(sham_link_next_hello.get_name_leafdata());
    if (sham_link_passive.is_set || is_set(sham_link_passive.operation)) leaf_name_data.push_back(sham_link_passive.get_name_leafdata());
    if (sham_link_retransmission_interval.is_set || is_set(sham_link_retransmission_interval.operation)) leaf_name_data.push_back(sham_link_retransmission_interval.get_name_leafdata());
    if (sham_link_source_address.is_set || is_set(sham_link_source_address.operation)) leaf_name_data.push_back(sham_link_source_address.get_name_leafdata());
    if (sham_link_state.is_set || is_set(sham_link_state.operation)) leaf_name_data.push_back(sham_link_state.get_name_leafdata());
    if (sham_link_transmission_delay.is_set || is_set(sham_link_transmission_delay.operation)) leaf_name_data.push_back(sham_link_transmission_delay.get_name_leafdata());
    if (sham_link_wait_interval.is_set || is_set(sham_link_wait_interval.operation)) leaf_name_data.push_back(sham_link_wait_interval.get_name_leafdata());
    if (virtual_link_authentication_spi.is_set || is_set(virtual_link_authentication_spi.operation)) leaf_name_data.push_back(virtual_link_authentication_spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-neighbor")
    {
        if(sham_link_neighbor != nullptr)
        {
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
        else
        {
            sham_link_neighbor = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor>();
            sham_link_neighbor->parent = this;
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
        return children.at("sham-link-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::get_children()
{
    if(children.find("sham-link-neighbor") == children.end())
    {
        if(sham_link_neighbor != nullptr)
        {
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-sham-link-authentication-enabled")
    {
        is_sham_link_authentication_enabled = value;
    }
    if(value_path == "is-sham-link-encryption-enabled")
    {
        is_sham_link_encryption_enabled = value;
    }
    if(value_path == "is-sham-link-ip-security-active")
    {
        is_sham_link_ip_security_active = value;
    }
    if(value_path == "is-sham-link-ip-security-required")
    {
        is_sham_link_ip_security_required = value;
    }
    if(value_path == "sham-link-area")
    {
        sham_link_area = value;
    }
    if(value_path == "sham-link-authentication-transmit")
    {
        sham_link_authentication_transmit = value;
    }
    if(value_path == "sham-link-cost")
    {
        sham_link_cost = value;
    }
    if(value_path == "sham-link-dc-bitless-lsa")
    {
        sham_link_dc_bitless_lsa = value;
    }
    if(value_path == "sham-link-dead-interval")
    {
        sham_link_dead_interval = value;
    }
    if(value_path == "sham-link-demand-circuit")
    {
        sham_link_demand_circuit = value;
    }
    if(value_path == "sham-link-dest-address")
    {
        sham_link_dest_address = value;
    }
    if(value_path == "sham-link-encrypted-authentication-transmitted")
    {
        sham_link_encrypted_authentication_transmitted = value;
    }
    if(value_path == "sham-link-encryption-spi")
    {
        sham_link_encryption_spi = value;
    }
    if(value_path == "sham-link-encryption-transmitted")
    {
        sham_link_encryption_transmitted = value;
    }
    if(value_path == "sham-link-gr")
    {
        sham_link_gr = value;
    }
    if(value_path == "sham-link-gr-enabled")
    {
        sham_link_gr_enabled = value;
    }
    if(value_path == "sham-link-hello-interval")
    {
        sham_link_hello_interval = value;
    }
    if(value_path == "sham-link-ifindex")
    {
        sham_link_ifindex = value;
    }
    if(value_path == "sham-link-last-gr")
    {
        sham_link_last_gr = value;
    }
    if(value_path == "sham-link-neighbor-id")
    {
        sham_link_neighbor_id = value;
    }
    if(value_path == "sham-link-next-hello")
    {
        sham_link_next_hello = value;
    }
    if(value_path == "sham-link-passive")
    {
        sham_link_passive = value;
    }
    if(value_path == "sham-link-retransmission-interval")
    {
        sham_link_retransmission_interval = value;
    }
    if(value_path == "sham-link-source-address")
    {
        sham_link_source_address = value;
    }
    if(value_path == "sham-link-state")
    {
        sham_link_state = value;
    }
    if(value_path == "sham-link-transmission-delay")
    {
        sham_link_transmission_delay = value;
    }
    if(value_path == "sham-link-wait-interval")
    {
        sham_link_wait_interval = value;
    }
    if(value_path == "virtual-link-authentication-spi")
    {
        virtual_link_authentication_spi = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkNeighbor()
    :
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_suppress_hello{YType::boolean, "sham-link-suppress-hello"}
    	,
    sham_link_retransmission(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission>())
{
    sham_link_retransmission->parent = this;
    children["sham-link-retransmission"] = sham_link_retransmission;

    yang_name = "sham-link-neighbor"; yang_parent_name = "sham-link-table";
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::~ShamLinkNeighbor()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::has_data() const
{
    return sham_link_state.is_set
	|| sham_link_suppress_hello.is_set
	|| (sham_link_retransmission !=  nullptr && sham_link_retransmission->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_suppress_hello.operation)
	|| (sham_link_retransmission !=  nullptr && sham_link_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkNeighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sham_link_state.is_set || is_set(sham_link_state.operation)) leaf_name_data.push_back(sham_link_state.get_name_leafdata());
    if (sham_link_suppress_hello.is_set || is_set(sham_link_suppress_hello.operation)) leaf_name_data.push_back(sham_link_suppress_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-retransmission")
    {
        if(sham_link_retransmission != nullptr)
        {
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
        else
        {
            sham_link_retransmission = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission>();
            sham_link_retransmission->parent = this;
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
        return children.at("sham-link-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::get_children()
{
    if(children.find("sham-link-retransmission") == children.end())
    {
        if(sham_link_retransmission != nullptr)
        {
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sham-link-state")
    {
        sham_link_state = value;
    }
    if(value_path == "sham-link-suppress-hello")
    {
        sham_link_suppress_hello = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::ShamLinkRetransmission()
    :
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    area_flood_index{YType::uint32, "area-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"}
{
    yang_name = "sham-link-retransmission"; yang_parent_name = "sham-link-neighbor";
}

Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::~ShamLinkRetransmission()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::has_data() const
{
    return area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| area_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| database_descriptor_retransmissions.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| link_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood.operation)
	|| is_set(area_first_flood_index.operation)
	|| is_set(area_flood_index.operation)
	|| is_set(area_next_flood.operation)
	|| is_set(area_next_flood_index.operation)
	|| is_set(as_first_flood.operation)
	|| is_set(as_first_flood_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood.operation)
	|| is_set(as_next_flood_index.operation)
	|| is_set(database_descriptor_retransmissions.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(link_first_flood.operation)
	|| is_set(link_first_flood_index.operation)
	|| is_set(link_flood_index.operation)
	|| is_set(link_next_flood.operation)
	|| is_set(link_next_flood_index.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmissions.operation)
	|| is_set(retransmissions.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood.is_set || is_set(area_first_flood.operation)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.operation)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.operation)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.operation)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.operation)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.operation)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.operation)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.operation)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.operation)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.operation)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.operation)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.operation)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.operation)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.operation)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.operation)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.operation)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.operation)) leaf_name_data.push_back(retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
    }
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformations()
{
    yang_name = "area-informations"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::~AreaInformations()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::has_data() const
{
    for (std::size_t index=0; index<area_information.size(); index++)
    {
        if(area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::has_operation() const
{
    for (std::size_t index=0; index<area_information.size(); index++)
    {
        if(area_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-informations";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::AreaInformations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaInformations' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-information")
    {
        for(auto const & c : area_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation>();
        c->parent = this;
        area_information.push_back(std::move(c));
        children[segment_path] = area_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::AreaInformations::get_children()
{
    for (auto const & c : area_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaInformations::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaInformation()
    :
    area_id{YType::int32, "area-id"},
    area_dc_bitless_ls_as{YType::uint32, "area-dc-bitless-ls-as"},
    area_interfaces{YType::uint16, "area-interfaces"},
    area_lfa_interface_count{YType::uint32, "area-lfa-interface-count"},
    area_lfa_revision{YType::uint32, "area-lfa-revision"},
    area_opaque_lsa_checksum{YType::uint32, "area-opaque-lsa-checksum"},
    area_opaque_lsas{YType::uint32, "area-opaque-lsas"},
    area_per_prefix_lfa_interface_count{YType::uint32, "area-per-prefix-lfa-interface-count"},
    do_not_age_ls_as{YType::uint32, "do-not-age-ls-as"},
    flood_list_length{YType::uint32, "flood-list-length"},
    indication_ls_as{YType::uint32, "indication-ls-as"},
    is_area_nssa{YType::boolean, "is-area-nssa"},
    is_area_stubbed{YType::boolean, "is-area-stubbed"},
    is_area_total_stubbed{YType::boolean, "is-area-total-stubbed"},
    is_backbone_area_active{YType::boolean, "is-backbone-area-active"},
    is_nssa_default{YType::boolean, "is-nssa-default"},
    is_nssa_translated{YType::boolean, "is-nssa-translated"},
    is_rrr_enabled{YType::boolean, "is-rrr-enabled"},
    nssa_no_redistribution{YType::boolean, "nssa-no-redistribution"},
    sp_fs{YType::uint32, "sp-fs"},
    stub_default_cost{YType::uint16, "stub-default-cost"}
{
    yang_name = "area-information"; yang_parent_name = "area-informations";
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::~AreaInformation()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_dc_bitless_ls_as.is_set
	|| area_interfaces.is_set
	|| area_lfa_interface_count.is_set
	|| area_lfa_revision.is_set
	|| area_opaque_lsa_checksum.is_set
	|| area_opaque_lsas.is_set
	|| area_per_prefix_lfa_interface_count.is_set
	|| do_not_age_ls_as.is_set
	|| flood_list_length.is_set
	|| indication_ls_as.is_set
	|| is_area_nssa.is_set
	|| is_area_stubbed.is_set
	|| is_area_total_stubbed.is_set
	|| is_backbone_area_active.is_set
	|| is_nssa_default.is_set
	|| is_nssa_translated.is_set
	|| is_rrr_enabled.is_set
	|| nssa_no_redistribution.is_set
	|| sp_fs.is_set
	|| stub_default_cost.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_dc_bitless_ls_as.operation)
	|| is_set(area_interfaces.operation)
	|| is_set(area_lfa_interface_count.operation)
	|| is_set(area_lfa_revision.operation)
	|| is_set(area_opaque_lsa_checksum.operation)
	|| is_set(area_opaque_lsas.operation)
	|| is_set(area_per_prefix_lfa_interface_count.operation)
	|| is_set(do_not_age_ls_as.operation)
	|| is_set(flood_list_length.operation)
	|| is_set(indication_ls_as.operation)
	|| is_set(is_area_nssa.operation)
	|| is_set(is_area_stubbed.operation)
	|| is_set(is_area_total_stubbed.operation)
	|| is_set(is_backbone_area_active.operation)
	|| is_set(is_nssa_default.operation)
	|| is_set(is_nssa_translated.operation)
	|| is_set(is_rrr_enabled.operation)
	|| is_set(nssa_no_redistribution.operation)
	|| is_set(sp_fs.operation)
	|| is_set(stub_default_cost.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-information" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaInformation' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_dc_bitless_ls_as.is_set || is_set(area_dc_bitless_ls_as.operation)) leaf_name_data.push_back(area_dc_bitless_ls_as.get_name_leafdata());
    if (area_interfaces.is_set || is_set(area_interfaces.operation)) leaf_name_data.push_back(area_interfaces.get_name_leafdata());
    if (area_lfa_interface_count.is_set || is_set(area_lfa_interface_count.operation)) leaf_name_data.push_back(area_lfa_interface_count.get_name_leafdata());
    if (area_lfa_revision.is_set || is_set(area_lfa_revision.operation)) leaf_name_data.push_back(area_lfa_revision.get_name_leafdata());
    if (area_opaque_lsa_checksum.is_set || is_set(area_opaque_lsa_checksum.operation)) leaf_name_data.push_back(area_opaque_lsa_checksum.get_name_leafdata());
    if (area_opaque_lsas.is_set || is_set(area_opaque_lsas.operation)) leaf_name_data.push_back(area_opaque_lsas.get_name_leafdata());
    if (area_per_prefix_lfa_interface_count.is_set || is_set(area_per_prefix_lfa_interface_count.operation)) leaf_name_data.push_back(area_per_prefix_lfa_interface_count.get_name_leafdata());
    if (do_not_age_ls_as.is_set || is_set(do_not_age_ls_as.operation)) leaf_name_data.push_back(do_not_age_ls_as.get_name_leafdata());
    if (flood_list_length.is_set || is_set(flood_list_length.operation)) leaf_name_data.push_back(flood_list_length.get_name_leafdata());
    if (indication_ls_as.is_set || is_set(indication_ls_as.operation)) leaf_name_data.push_back(indication_ls_as.get_name_leafdata());
    if (is_area_nssa.is_set || is_set(is_area_nssa.operation)) leaf_name_data.push_back(is_area_nssa.get_name_leafdata());
    if (is_area_stubbed.is_set || is_set(is_area_stubbed.operation)) leaf_name_data.push_back(is_area_stubbed.get_name_leafdata());
    if (is_area_total_stubbed.is_set || is_set(is_area_total_stubbed.operation)) leaf_name_data.push_back(is_area_total_stubbed.get_name_leafdata());
    if (is_backbone_area_active.is_set || is_set(is_backbone_area_active.operation)) leaf_name_data.push_back(is_backbone_area_active.get_name_leafdata());
    if (is_nssa_default.is_set || is_set(is_nssa_default.operation)) leaf_name_data.push_back(is_nssa_default.get_name_leafdata());
    if (is_nssa_translated.is_set || is_set(is_nssa_translated.operation)) leaf_name_data.push_back(is_nssa_translated.get_name_leafdata());
    if (is_rrr_enabled.is_set || is_set(is_rrr_enabled.operation)) leaf_name_data.push_back(is_rrr_enabled.get_name_leafdata());
    if (nssa_no_redistribution.is_set || is_set(nssa_no_redistribution.operation)) leaf_name_data.push_back(nssa_no_redistribution.get_name_leafdata());
    if (sp_fs.is_set || is_set(sp_fs.operation)) leaf_name_data.push_back(sp_fs.get_name_leafdata());
    if (stub_default_cost.is_set || is_set(stub_default_cost.operation)) leaf_name_data.push_back(stub_default_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange>();
        c->parent = this;
        area_range.push_back(std::move(c));
        children[segment_path] = area_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::get_children()
{
    for (auto const & c : area_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-dc-bitless-ls-as")
    {
        area_dc_bitless_ls_as = value;
    }
    if(value_path == "area-interfaces")
    {
        area_interfaces = value;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count = value;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision = value;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum = value;
    }
    if(value_path == "area-opaque-lsas")
    {
        area_opaque_lsas = value;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count = value;
    }
    if(value_path == "do-not-age-ls-as")
    {
        do_not_age_ls_as = value;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length = value;
    }
    if(value_path == "indication-ls-as")
    {
        indication_ls_as = value;
    }
    if(value_path == "is-area-nssa")
    {
        is_area_nssa = value;
    }
    if(value_path == "is-area-stubbed")
    {
        is_area_stubbed = value;
    }
    if(value_path == "is-area-total-stubbed")
    {
        is_area_total_stubbed = value;
    }
    if(value_path == "is-backbone-area-active")
    {
        is_backbone_area_active = value;
    }
    if(value_path == "is-nssa-default")
    {
        is_nssa_default = value;
    }
    if(value_path == "is-nssa-translated")
    {
        is_nssa_translated = value;
    }
    if(value_path == "is-rrr-enabled")
    {
        is_rrr_enabled = value;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution = value;
    }
    if(value_path == "sp-fs")
    {
        sp_fs = value;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::AreaRange()
    :
    is_cost_configured{YType::boolean, "is-cost-configured"},
    net_cost{YType::uint32, "net-cost"},
    range_prefix{YType::str, "range-prefix"},
    range_prefix_length{YType::uint32, "range-prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "area-range"; yang_parent_name = "area-information";
}

Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::~AreaRange()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::has_data() const
{
    return is_cost_configured.is_set
	|| net_cost.is_set
	|| range_prefix.is_set
	|| range_prefix_length.is_set
	|| status.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::has_operation() const
{
    return is_set(operation)
	|| is_set(is_cost_configured.operation)
	|| is_set(net_cost.operation)
	|| is_set(range_prefix.operation)
	|| is_set(range_prefix_length.operation)
	|| is_set(status.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRange' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cost_configured.is_set || is_set(is_cost_configured.operation)) leaf_name_data.push_back(is_cost_configured.get_name_leafdata());
    if (net_cost.is_set || is_set(net_cost.operation)) leaf_name_data.push_back(net_cost.get_name_leafdata());
    if (range_prefix.is_set || is_set(range_prefix.operation)) leaf_name_data.push_back(range_prefix.get_name_leafdata());
    if (range_prefix_length.is_set || is_set(range_prefix_length.operation)) leaf_name_data.push_back(range_prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-cost-configured")
    {
        is_cost_configured = value;
    }
    if(value_path == "net-cost")
    {
        net_cost = value;
    }
    if(value_path == "range-prefix")
    {
        range_prefix = value;
    }
    if(value_path == "range-prefix-length")
    {
        range_prefix_length = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::DatabaseTable()
    :
    lsa_internal_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable>())
	,lsa_table(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable>())
{
    lsa_internal_table->parent = this;
    children["lsa-internal-table"] = lsa_internal_table;

    lsa_table->parent = this;
    children["lsa-table"] = lsa_table;

    yang_name = "database-table"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::~DatabaseTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::has_data() const
{
    return (lsa_internal_table !=  nullptr && lsa_internal_table->has_data())
	|| (lsa_table !=  nullptr && lsa_table->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::has_operation() const
{
    return is_set(operation)
	|| (lsa_internal_table !=  nullptr && lsa_internal_table->has_operation())
	|| (lsa_table !=  nullptr && lsa_table->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-internal-table")
    {
        if(lsa_internal_table != nullptr)
        {
            children["lsa-internal-table"] = lsa_internal_table;
        }
        else
        {
            lsa_internal_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable>();
            lsa_internal_table->parent = this;
            children["lsa-internal-table"] = lsa_internal_table;
        }
        return children.at("lsa-internal-table");
    }

    if(child_yang_name == "lsa-table")
    {
        if(lsa_table != nullptr)
        {
            children["lsa-table"] = lsa_table;
        }
        else
        {
            lsa_table = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable>();
            lsa_table->parent = this;
            children["lsa-table"] = lsa_table;
        }
        return children.at("lsa-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::get_children()
{
    if(children.find("lsa-internal-table") == children.end())
    {
        if(lsa_internal_table != nullptr)
        {
            children["lsa-internal-table"] = lsa_internal_table;
        }
    }

    if(children.find("lsa-table") == children.end())
    {
        if(lsa_table != nullptr)
        {
            children["lsa-table"] = lsa_table;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::LsaTable()
{
    yang_name = "lsa-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::~LsaTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::get_children()
{
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-table";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-info")
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
        else
        {
            lsa_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::get_children()
{
    if(children.find("lsa-info") == children.end())
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>())
{
    external_lsa_type->parent = this;
    children["external-lsa-type"] = external_lsa_type;

    grace_lsa->parent = this;
    children["grace-lsa"] = grace_lsa;

    inter_area_prefix_lsa_type->parent = this;
    children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;

    inter_area_router_lsa_type->parent = this;
    children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;

    intra_area_prefix_lsa_type->parent = this;
    children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;

    link_lsa_type->parent = this;
    children["link-lsa-type"] = link_lsa_type;

    lsa_summary_info->parent = this;
    children["lsa-summary-info"] = lsa_summary_info;

    network_lsa_type->parent = this;
    children["network-lsa-type"] = network_lsa_type;

    nssalsa_type->parent = this;
    children["nssalsa-type"] = nssalsa_type;

    router_lsa_type->parent = this;
    children["router-lsa-type"] = router_lsa_type;

    unknown_area_lsa_type->parent = this;
    children["unknown-area-lsa-type"] = unknown_area_lsa_type;

    unknown_aslsa_type->parent = this;
    children["unknown-aslsa-type"] = unknown_aslsa_type;

    unknown_link_lsa_type->parent = this;
    children["unknown-link-lsa-type"] = unknown_link_lsa_type;

    unknown_lsa_type->parent = this;
    children["unknown-lsa-type"] = unknown_lsa_type;

    yang_name = "lsa-info"; yang_parent_name = "lsa";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::has_data() const
{
    return lsa_info_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (grace_lsa !=  nullptr && grace_lsa->has_data())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_data())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_data())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_data())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_data())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_data())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_data())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_data())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_info_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (grace_lsa !=  nullptr && grace_lsa->has_operation())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_operation())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_operation())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_operation())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_operation())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_operation())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_operation())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_operation())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_info_type.is_set || is_set(lsa_info_type.operation)) leaf_name_data.push_back(lsa_info_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
        else
        {
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>();
            external_lsa_type->parent = this;
            children["external-lsa-type"] = external_lsa_type;
        }
        return children.at("external-lsa-type");
    }

    if(child_yang_name == "grace-lsa")
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
        else
        {
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>();
            grace_lsa->parent = this;
            children["grace-lsa"] = grace_lsa;
        }
        return children.at("grace-lsa");
    }

    if(child_yang_name == "inter-area-prefix-lsa-type")
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        else
        {
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
            inter_area_prefix_lsa_type->parent = this;
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        return children.at("inter-area-prefix-lsa-type");
    }

    if(child_yang_name == "inter-area-router-lsa-type")
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        else
        {
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
            inter_area_router_lsa_type->parent = this;
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        return children.at("inter-area-router-lsa-type");
    }

    if(child_yang_name == "intra-area-prefix-lsa-type")
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        else
        {
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
            intra_area_prefix_lsa_type->parent = this;
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        return children.at("intra-area-prefix-lsa-type");
    }

    if(child_yang_name == "link-lsa-type")
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
        else
        {
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>();
            link_lsa_type->parent = this;
            children["link-lsa-type"] = link_lsa_type;
        }
        return children.at("link-lsa-type");
    }

    if(child_yang_name == "lsa-summary-info")
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
        else
        {
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>();
            lsa_summary_info->parent = this;
            children["lsa-summary-info"] = lsa_summary_info;
        }
        return children.at("lsa-summary-info");
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
        else
        {
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>();
            network_lsa_type->parent = this;
            children["network-lsa-type"] = network_lsa_type;
        }
        return children.at("network-lsa-type");
    }

    if(child_yang_name == "nssalsa-type")
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
        else
        {
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>();
            nssalsa_type->parent = this;
            children["nssalsa-type"] = nssalsa_type;
        }
        return children.at("nssalsa-type");
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
        else
        {
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>();
            router_lsa_type->parent = this;
            children["router-lsa-type"] = router_lsa_type;
        }
        return children.at("router-lsa-type");
    }

    if(child_yang_name == "unknown-area-lsa-type")
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        else
        {
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>();
            unknown_area_lsa_type->parent = this;
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        return children.at("unknown-area-lsa-type");
    }

    if(child_yang_name == "unknown-aslsa-type")
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        else
        {
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>();
            unknown_aslsa_type->parent = this;
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        return children.at("unknown-aslsa-type");
    }

    if(child_yang_name == "unknown-link-lsa-type")
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        else
        {
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>();
            unknown_link_lsa_type->parent = this;
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        return children.at("unknown-link-lsa-type");
    }

    if(child_yang_name == "unknown-lsa-type")
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        else
        {
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_children()
{
    if(children.find("external-lsa-type") == children.end())
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
    }

    if(children.find("grace-lsa") == children.end())
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
    }

    if(children.find("inter-area-prefix-lsa-type") == children.end())
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
    }

    if(children.find("inter-area-router-lsa-type") == children.end())
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
    }

    if(children.find("intra-area-prefix-lsa-type") == children.end())
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
    }

    if(children.find("link-lsa-type") == children.end())
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
    }

    if(children.find("lsa-summary-info") == children.end())
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
    }

    if(children.find("network-lsa-type") == children.end())
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
    }

    if(children.find("nssalsa-type") == children.end())
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
    }

    if(children.find("router-lsa-type") == children.end())
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
    }

    if(children.find("unknown-area-lsa-type") == children.end())
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
    }

    if(children.find("unknown-aslsa-type") == children.end())
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
    }

    if(children.find("unknown-link-lsa-type") == children.end())
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
    }

    if(children.find("unknown-lsa-type") == children.end())
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    links{YType::uint16, "links"},
    lsa_router_id{YType::uint32, "lsa-router-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::uint16, "reference-type"},
    router_la_bits{YType::uint8, "router-la-bits"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| links.is_set
	|| lsa_router_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| router_la_bits.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(links.operation)
	|| is_set(lsa_router_id.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| is_set(router_la_bits.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaryInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return router_la_bits.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (rpf_path !=  nullptr && rpf_path->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_la_bits.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (rpf_path !=  nullptr && rpf_path->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "rpf-path")
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
        else
        {
            rpf_path = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    if(children.find("rpf-path") == children.end())
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    interface_name{YType::str, "interface-name"},
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"}
{
    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return interface_name.is_set
	|| rpf_multicast_next_hop.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_multicast_next_hop.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_multicast_next_hop.is_set || is_set(rpf_multicast_next_hop.operation)) leaf_name_data.push_back(rpf_multicast_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rpf-multicast-next-hop")
    {
        rpf_multicast_next_hop = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_interface_id{YType::uint32, "link-interface-id"},
    link_metric{YType::uint16, "link-metric"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_interface_id.is_set
	|| link_metric.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set
	|| link_type.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_interface_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_neighbor_interface_id.operation)
	|| is_set(link_neighbor_router_id.operation)
	|| is_set(link_type.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_interface_id.is_set || is_set(link_interface_id.operation)) leaf_name_data.push_back(link_interface_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_neighbor_interface_id.is_set || is_set(link_neighbor_interface_id.operation)) leaf_name_data.push_back(link_neighbor_interface_id.get_name_leafdata());
    if (link_neighbor_router_id.is_set || is_set(link_neighbor_router_id.operation)) leaf_name_data.push_back(link_neighbor_router_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-interface-id")
    {
        link_interface_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-neighbor-interface-id")
    {
        link_neighbor_interface_id = value;
    }
    if(value_path == "link-neighbor-router-id")
    {
        link_neighbor_router_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_router.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_router_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssalsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| lsa_link_local.is_set
	|| router_priority.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(lsa_link_local.operation)
	|| is_set(router_priority.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (lsa_link_local.is_set || is_set(lsa_link_local.operation)) leaf_name_data.push_back(lsa_link_local.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.operation)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "lsa-link-local")
    {
        lsa_link_local = value;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_advertised_router{YType::str, "reference-advertised-router"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::enumeration, "reference-type"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return reference_advertised_router.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(reference_advertised_router.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_advertised_router.is_set || is_set(reference_advertised_router.operation)) leaf_name_data.push_back(reference_advertised_router.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reference-advertised-router")
    {
        reference_advertised_router = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GraceLsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.operation)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.operation)) leaf_name_data.push_back(grace_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAreaLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAslsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::LsaInternalTable()
{
    yang_name = "lsa-internal-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::~LsaInternalTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInternalTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::get_children()
{
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-internal-table";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-info")
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
        else
        {
            lsa_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::get_children()
{
    if(children.find("lsa-info") == children.end())
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>())
{
    external_lsa_type->parent = this;
    children["external-lsa-type"] = external_lsa_type;

    grace_lsa->parent = this;
    children["grace-lsa"] = grace_lsa;

    inter_area_prefix_lsa_type->parent = this;
    children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;

    inter_area_router_lsa_type->parent = this;
    children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;

    intra_area_prefix_lsa_type->parent = this;
    children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;

    link_lsa_type->parent = this;
    children["link-lsa-type"] = link_lsa_type;

    lsa_summary_info->parent = this;
    children["lsa-summary-info"] = lsa_summary_info;

    network_lsa_type->parent = this;
    children["network-lsa-type"] = network_lsa_type;

    nssalsa_type->parent = this;
    children["nssalsa-type"] = nssalsa_type;

    router_lsa_type->parent = this;
    children["router-lsa-type"] = router_lsa_type;

    unknown_area_lsa_type->parent = this;
    children["unknown-area-lsa-type"] = unknown_area_lsa_type;

    unknown_aslsa_type->parent = this;
    children["unknown-aslsa-type"] = unknown_aslsa_type;

    unknown_link_lsa_type->parent = this;
    children["unknown-link-lsa-type"] = unknown_link_lsa_type;

    unknown_lsa_type->parent = this;
    children["unknown-lsa-type"] = unknown_lsa_type;

    yang_name = "lsa-info"; yang_parent_name = "lsa";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_data() const
{
    return lsa_info_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (grace_lsa !=  nullptr && grace_lsa->has_data())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_data())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_data())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_data())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_data())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_data())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_data())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_data())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_info_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (grace_lsa !=  nullptr && grace_lsa->has_operation())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_operation())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_operation())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_operation())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_operation())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_operation())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_operation())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_operation())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_info_type.is_set || is_set(lsa_info_type.operation)) leaf_name_data.push_back(lsa_info_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
        else
        {
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>();
            external_lsa_type->parent = this;
            children["external-lsa-type"] = external_lsa_type;
        }
        return children.at("external-lsa-type");
    }

    if(child_yang_name == "grace-lsa")
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
        else
        {
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>();
            grace_lsa->parent = this;
            children["grace-lsa"] = grace_lsa;
        }
        return children.at("grace-lsa");
    }

    if(child_yang_name == "inter-area-prefix-lsa-type")
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        else
        {
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
            inter_area_prefix_lsa_type->parent = this;
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        return children.at("inter-area-prefix-lsa-type");
    }

    if(child_yang_name == "inter-area-router-lsa-type")
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        else
        {
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
            inter_area_router_lsa_type->parent = this;
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        return children.at("inter-area-router-lsa-type");
    }

    if(child_yang_name == "intra-area-prefix-lsa-type")
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        else
        {
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
            intra_area_prefix_lsa_type->parent = this;
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        return children.at("intra-area-prefix-lsa-type");
    }

    if(child_yang_name == "link-lsa-type")
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
        else
        {
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>();
            link_lsa_type->parent = this;
            children["link-lsa-type"] = link_lsa_type;
        }
        return children.at("link-lsa-type");
    }

    if(child_yang_name == "lsa-summary-info")
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
        else
        {
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>();
            lsa_summary_info->parent = this;
            children["lsa-summary-info"] = lsa_summary_info;
        }
        return children.at("lsa-summary-info");
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
        else
        {
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>();
            network_lsa_type->parent = this;
            children["network-lsa-type"] = network_lsa_type;
        }
        return children.at("network-lsa-type");
    }

    if(child_yang_name == "nssalsa-type")
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
        else
        {
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>();
            nssalsa_type->parent = this;
            children["nssalsa-type"] = nssalsa_type;
        }
        return children.at("nssalsa-type");
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
        else
        {
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>();
            router_lsa_type->parent = this;
            children["router-lsa-type"] = router_lsa_type;
        }
        return children.at("router-lsa-type");
    }

    if(child_yang_name == "unknown-area-lsa-type")
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        else
        {
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>();
            unknown_area_lsa_type->parent = this;
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        return children.at("unknown-area-lsa-type");
    }

    if(child_yang_name == "unknown-aslsa-type")
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        else
        {
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>();
            unknown_aslsa_type->parent = this;
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        return children.at("unknown-aslsa-type");
    }

    if(child_yang_name == "unknown-link-lsa-type")
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        else
        {
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>();
            unknown_link_lsa_type->parent = this;
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        return children.at("unknown-link-lsa-type");
    }

    if(child_yang_name == "unknown-lsa-type")
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        else
        {
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_children()
{
    if(children.find("external-lsa-type") == children.end())
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
    }

    if(children.find("grace-lsa") == children.end())
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
    }

    if(children.find("inter-area-prefix-lsa-type") == children.end())
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
    }

    if(children.find("inter-area-router-lsa-type") == children.end())
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
    }

    if(children.find("intra-area-prefix-lsa-type") == children.end())
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
    }

    if(children.find("link-lsa-type") == children.end())
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
    }

    if(children.find("lsa-summary-info") == children.end())
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
    }

    if(children.find("network-lsa-type") == children.end())
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
    }

    if(children.find("nssalsa-type") == children.end())
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
    }

    if(children.find("router-lsa-type") == children.end())
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
    }

    if(children.find("unknown-area-lsa-type") == children.end())
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
    }

    if(children.find("unknown-aslsa-type") == children.end())
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
    }

    if(children.find("unknown-link-lsa-type") == children.end())
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
    }

    if(children.find("unknown-lsa-type") == children.end())
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    links{YType::uint16, "links"},
    lsa_router_id{YType::uint32, "lsa-router-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::uint16, "reference-type"},
    router_la_bits{YType::uint8, "router-la-bits"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| links.is_set
	|| lsa_router_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| router_la_bits.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(links.operation)
	|| is_set(lsa_router_id.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| is_set(router_la_bits.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaryInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return router_la_bits.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (rpf_path !=  nullptr && rpf_path->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_la_bits.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (rpf_path !=  nullptr && rpf_path->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "rpf-path")
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
        else
        {
            rpf_path = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    if(children.find("rpf-path") == children.end())
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}


}
}

