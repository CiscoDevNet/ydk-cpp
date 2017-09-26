
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "priority-level" || name == "rib-base-clock" || name == "rib-dequeue-errs" || name == "rib-drop-after" || name == "rib-drop-before" || name == "rib-drop-conn" || name == "rib-empty-batches" || name == "rib-pfx-limit-errs" || name == "rib-pkts-sent" || name == "rib-queue-errs" || name == "rib-send-errs" || name == "rib-signals" || name == "rib-table-not-created" || name == "rib-version" || name == "wq-dqtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-thread-active" || name == "wq-total-dequeued" || name == "wq-total-queued" || name == "wqe-qtime")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "rib-base-time"; yang_parent_name = "internalwq"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "priority-level" || name == "rib-base-clock" || name == "rib-dequeue-errs" || name == "rib-drop-after" || name == "rib-drop-before" || name == "rib-drop-conn" || name == "rib-empty-batches" || name == "rib-pfx-limit-errs" || name == "rib-pkts-sent" || name == "rib-queue-errs" || name == "rib-send-errs" || name == "rib-signals" || name == "rib-table-not-created" || name == "rib-version" || name == "wq-dqtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-thread-active" || name == "wq-total-dequeued" || name == "wq-total-queued" || name == "wqe-qtime")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "rib-base-time"; yang_parent_name = "ribqueue"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;

    yang_name = "spf-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::~SpfStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os-ex-runtime")
    {
        for(auto const & c : os_ex_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime>();
        c->parent = this;
        os_ex_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-runtime")
    {
        for(auto const & c : os_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime>();
        c->parent = this;
        os_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-sum-runtime")
    {
        for(auto const & c : os_sum_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime>();
        c->parent = this;
        os_sum_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-header")
    {
        if(spf_header == nullptr)
        {
            spf_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader>();
        }
        return spf_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os_ex_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : os_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : os_sum_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : runtime)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_header != nullptr)
    {
        children["spf-header"] = spf_header;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os-ex-runtime" || name == "os-runtime" || name == "os-sum-runtime" || name == "runtime" || name == "spf-header")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    sp_start_time->parent = this;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
        }
        return sp_duration;
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-duration" || name == "sp-start-time" || name == "sp-adv-rtr-id" || name == "sp-dest-addr" || name == "sp-dest-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>())
	,si_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
{
    si_duration->parent = this;
    si_start_time->parent = this;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_duration !=  nullptr && si_duration->has_data())
	|| (si_start_time !=  nullptr && si_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si_area_id_str.yfilter)
	|| ydk::is_set(si_change_flags.yfilter)
	|| (si_duration !=  nullptr && si_duration->has_operation())
	|| (si_start_time !=  nullptr && si_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.yfilter)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.yfilter)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "si-duration")
    {
        if(si_duration == nullptr)
        {
            si_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>();
        }
        return si_duration;
    }

    if(child_yang_name == "si-start-time")
    {
        if(si_start_time == nullptr)
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
        }
        return si_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(si_duration != nullptr)
    {
        children["si-duration"] = si_duration;
    }

    if(si_start_time != nullptr)
    {
        children["si-start-time"] = si_start_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
        si_area_id_str.value_namespace = name_space;
        si_area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
        si_change_flags.value_namespace = name_space;
        si_change_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str.yfilter = yfilter;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si-duration" || name == "si-start-time" || name == "si-area-id-str" || name == "si-change-flags")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "si-duration"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "si-start-time"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    sp_start_time->parent = this;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
        }
        return sp_duration;
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-duration" || name == "sp-start-time" || name == "sp-adv-rtr-id" || name == "sp-dest-addr" || name == "sp-dest-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::Runtime()
    :
    lsa_change_cnt{YType::int16, "lsa-change-cnt"},
    spf_start_time{YType::uint32, "spf-start-time"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;

    yang_name = "runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    return lsa_change_cnt.is_set
	|| spf_start_time.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_change_cnt.yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.yfilter)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-stat")
    {
        for(auto const & c : area_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time == nullptr)
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>();
        }
        return gbl_spf_time;
    }

    if(child_yang_name == "lsa-info")
    {
        for(auto const & c : lsa_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_stat)
    {
        children[c->get_segment_path()] = c;
    }

    if(gbl_spf_time != nullptr)
    {
        children["gbl-spf-time"] = gbl_spf_time;
    }

    for (auto const & c : lsa_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
        lsa_change_cnt.value_namespace = name_space;
        lsa_change_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt.yfilter = yfilter;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-stat" || name == "gbl-spf-time" || name == "lsa-info" || name == "lsa-change-cnt" || name == "spf-start-time")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;

    yang_name = "area-stat"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-type-cnt")
    {
        for(auto const & c : lsa_type_cnt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt>();
        c->parent = this;
        lsa_type_cnt.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-time")
    {
        if(spf_time == nullptr)
        {
            spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
        }
        return spf_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_type_cnt)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_time != nullptr)
    {
        children["spf-time"] = spf_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type-cnt" || name == "spf-time" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::LsaTypeCnt()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "lsa-type-cnt"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::~LsaTypeCnt()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-type-cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{

    yang_name = "spf-time"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{

    yang_name = "gbl-spf-time"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    adv_rtr{YType::str, "adv-rtr"},
    area_id{YType::uint32, "area-id"},
    flush{YType::boolean, "flush"},
    id{YType::str, "id"},
    type{YType::uint8, "type"}
{

    yang_name = "lsa-info"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return adv_rtr.is_set
	|| area_id.is_set
	|| flush.is_set
	|| id.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_rtr.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(flush.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_rtr.is_set || is_set(adv_rtr.yfilter)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
        adv_rtr.value_namespace = name_space;
        adv_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-rtr" || name == "area-id" || name == "flush" || name == "id" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    router_id{YType::str, "router-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "spf-header"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-summ")
    {
        for(auto const & c : area_summ)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm>();
        c->parent = this;
        area_summ.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_summ)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-summ" || name == "router-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::AreaSumm()
    :
    area_id{YType::uint32, "area-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "area-summ"; yang_parent_name = "spf-header"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::~AreaSumm()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_data() const
{
    return area_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::TeStats()
    :
    adj_changes{YType::uint32, "adj-changes"},
    adj_gets{YType::uint32, "adj-gets"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    control_disconnects{YType::uint32, "control-disconnects"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"},
    te_connected{YType::boolean, "te-connected"},
    te_disconnects{YType::uint32, "te-disconnects"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    total_tunnels{YType::uint32, "total-tunnels"},
    tunnel_announces{YType::uint32, "tunnel-announces"}
{

    yang_name = "te-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_data() const
{
    return adj_changes.is_set
	|| adj_gets.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| control_disconnects.is_set
	|| data_trans_completes.is_set
	|| fragment_announces.is_set
	|| fragment_deletes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_lookup.is_set
	|| pce_br_resp_fails.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_listen.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_node_send_fails.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_stoplisten.is_set
	|| sr_num_area_enabled.is_set
	|| te_connected.is_set
	|| te_disconnects.is_set
	|| te_sr_idt_sent.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| total_tunnels.is_set
	|| tunnel_announces.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adj_changes.yfilter)
	|| ydk::is_set(adj_gets.yfilter)
	|| ydk::is_set(control_batch_reads.yfilter)
	|| ydk::is_set(control_batch_writes.yfilter)
	|| ydk::is_set(control_disconnects.yfilter)
	|| ydk::is_set(data_trans_completes.yfilter)
	|| ydk::is_set(fragment_announces.yfilter)
	|| ydk::is_set(fragment_deletes.yfilter)
	|| ydk::is_set(link_batch_reads.yfilter)
	|| ydk::is_set(link_batch_writes.yfilter)
	|| ydk::is_set(link_floods.yfilter)
	|| ydk::is_set(link_fragment_floods.yfilter)
	|| ydk::is_set(lsp_gets.yfilter)
	|| ydk::is_set(pce_br_lkup_num_dests.yfilter)
	|| ydk::is_set(pce_br_lookup.yfilter)
	|| ydk::is_set(pce_br_resp_fails.yfilter)
	|| ydk::is_set(pce_flood.yfilter)
	|| ydk::is_set(pce_get.yfilter)
	|| ydk::is_set(pce_listen.yfilter)
	|| ydk::is_set(pce_node_announce_batches.yfilter)
	|| ydk::is_set(pce_node_delete_batches.yfilter)
	|| ydk::is_set(pce_node_send_fails.yfilter)
	|| ydk::is_set(pce_num_node_announce.yfilter)
	|| ydk::is_set(pce_num_node_delete.yfilter)
	|| ydk::is_set(pce_stoplisten.yfilter)
	|| ydk::is_set(sr_num_area_enabled.yfilter)
	|| ydk::is_set(te_connected.yfilter)
	|| ydk::is_set(te_disconnects.yfilter)
	|| ydk::is_set(te_sr_idt_sent.yfilter)
	|| ydk::is_set(te_sr_path_reg_idt_recvd.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(tunnel_announces.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_changes.is_set || is_set(adj_changes.yfilter)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.yfilter)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.yfilter)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.yfilter)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.yfilter)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.yfilter)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.yfilter)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.yfilter)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.yfilter)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.yfilter)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.yfilter)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.yfilter)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.yfilter)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.yfilter)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.yfilter)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.yfilter)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.yfilter)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.yfilter)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.yfilter)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.yfilter)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.yfilter)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.yfilter)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.yfilter)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.yfilter)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.yfilter)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.yfilter)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());
    if (te_connected.is_set || is_set(te_connected.yfilter)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.yfilter)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.yfilter)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.yfilter)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.yfilter)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-changes")
    {
        adj_changes = value;
        adj_changes.value_namespace = name_space;
        adj_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
        adj_gets.value_namespace = name_space;
        adj_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
        control_batch_reads.value_namespace = name_space;
        control_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
        control_batch_writes.value_namespace = name_space;
        control_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
        control_disconnects.value_namespace = name_space;
        control_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
        data_trans_completes.value_namespace = name_space;
        data_trans_completes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
        fragment_announces.value_namespace = name_space;
        fragment_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
        fragment_deletes.value_namespace = name_space;
        fragment_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
        link_batch_reads.value_namespace = name_space;
        link_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
        link_batch_writes.value_namespace = name_space;
        link_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
        link_floods.value_namespace = name_space;
        link_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
        link_fragment_floods.value_namespace = name_space;
        link_fragment_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
        lsp_gets.value_namespace = name_space;
        lsp_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
        pce_br_lkup_num_dests.value_namespace = name_space;
        pce_br_lkup_num_dests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
        pce_br_lookup.value_namespace = name_space;
        pce_br_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
        pce_br_resp_fails.value_namespace = name_space;
        pce_br_resp_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
        pce_flood.value_namespace = name_space;
        pce_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
        pce_get.value_namespace = name_space;
        pce_get.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
        pce_listen.value_namespace = name_space;
        pce_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
        pce_node_announce_batches.value_namespace = name_space;
        pce_node_announce_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
        pce_node_delete_batches.value_namespace = name_space;
        pce_node_delete_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
        pce_node_send_fails.value_namespace = name_space;
        pce_node_send_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
        pce_num_node_announce.value_namespace = name_space;
        pce_num_node_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
        pce_num_node_delete.value_namespace = name_space;
        pce_num_node_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
        pce_stoplisten.value_namespace = name_space;
        pce_stoplisten.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
        sr_num_area_enabled.value_namespace = name_space;
        sr_num_area_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connected")
    {
        te_connected = value;
        te_connected.value_namespace = name_space;
        te_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
        te_disconnects.value_namespace = name_space;
        te_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
        te_sr_idt_sent.value_namespace = name_space;
        te_sr_idt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
        te_sr_path_reg_idt_recvd.value_namespace = name_space;
        te_sr_path_reg_idt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
        tunnel_announces.value_namespace = name_space;
        tunnel_announces.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-changes")
    {
        adj_changes.yfilter = yfilter;
    }
    if(value_path == "adj-gets")
    {
        adj_gets.yfilter = yfilter;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads.yfilter = yfilter;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes.yfilter = yfilter;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects.yfilter = yfilter;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes.yfilter = yfilter;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces.yfilter = yfilter;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes.yfilter = yfilter;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads.yfilter = yfilter;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes.yfilter = yfilter;
    }
    if(value_path == "link-floods")
    {
        link_floods.yfilter = yfilter;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods.yfilter = yfilter;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets.yfilter = yfilter;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests.yfilter = yfilter;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup.yfilter = yfilter;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails.yfilter = yfilter;
    }
    if(value_path == "pce-flood")
    {
        pce_flood.yfilter = yfilter;
    }
    if(value_path == "pce-get")
    {
        pce_get.yfilter = yfilter;
    }
    if(value_path == "pce-listen")
    {
        pce_listen.yfilter = yfilter;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete.yfilter = yfilter;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten.yfilter = yfilter;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled.yfilter = yfilter;
    }
    if(value_path == "te-connected")
    {
        te_connected.yfilter = yfilter;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects.yfilter = yfilter;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent.yfilter = yfilter;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-changes" || name == "adj-gets" || name == "control-batch-reads" || name == "control-batch-writes" || name == "control-disconnects" || name == "data-trans-completes" || name == "fragment-announces" || name == "fragment-deletes" || name == "link-batch-reads" || name == "link-batch-writes" || name == "link-floods" || name == "link-fragment-floods" || name == "lsp-gets" || name == "pce-br-lkup-num-dests" || name == "pce-br-lookup" || name == "pce-br-resp-fails" || name == "pce-flood" || name == "pce-get" || name == "pce-listen" || name == "pce-node-announce-batches" || name == "pce-node-delete-batches" || name == "pce-node-send-fails" || name == "pce-num-node-announce" || name == "pce-num-node-delete" || name == "pce-stoplisten" || name == "sr-num-area-enabled" || name == "te-connected" || name == "te-disconnects" || name == "te-sr-idt-sent" || name == "te-sr-path-reg-idt-recvd" || name == "total-tunnels" || name == "tunnel-announces")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    netmask{YType::str, "netmask"},
    prefix{YType::str, "prefix"},
    summary_mask{YType::str, "summary-mask"},
    summary_metric{YType::uint32, "summary-metric"},
    summary_metric_type{YType::enumeration, "summary-metric-type"},
    summary_prefix{YType::str, "summary-prefix"},
    summary_tag{YType::uint32, "summary-tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return netmask.is_set
	|| prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_prefix.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(summary_metric.yfilter)
	|| ydk::is_set(summary_metric_type.yfilter)
	|| ydk::is_set(summary_prefix.yfilter)
	|| ydk::is_set(summary_tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (summary_metric.is_set || is_set(summary_metric.yfilter)) leaf_name_data.push_back(summary_metric.get_name_leafdata());
    if (summary_metric_type.is_set || is_set(summary_metric_type.yfilter)) leaf_name_data.push_back(summary_metric_type.get_name_leafdata());
    if (summary_prefix.is_set || is_set(summary_prefix.yfilter)) leaf_name_data.push_back(summary_prefix.get_name_leafdata());
    if (summary_tag.is_set || is_set(summary_tag.yfilter)) leaf_name_data.push_back(summary_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric")
    {
        summary_metric = value;
        summary_metric.value_namespace = name_space;
        summary_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type = value;
        summary_metric_type.value_namespace = name_space;
        summary_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix = value;
        summary_prefix.value_namespace = name_space;
        summary_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-tag")
    {
        summary_tag = value;
        summary_tag.value_namespace = name_space;
        summary_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "summary-metric")
    {
        summary_metric.yfilter = yfilter;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type.yfilter = yfilter;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix.yfilter = yfilter;
    }
    if(value_path == "summary-tag")
    {
        summary_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask" || name == "prefix" || name == "summary-mask" || name == "summary-metric" || name == "summary-metric-type" || name == "summary-prefix" || name == "summary-tag")
        return true;
    return false;
}


}
}

