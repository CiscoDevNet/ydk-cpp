
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::Nsr::Status::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Nsr::Status::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Nsr::Status::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Nsr::Status::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Nsr::Status::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Nsr::Status::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Nsr::Status::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Nsr::Status::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Nsr::Status::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Nsr::Status::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Nsr::Status::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Nsr::Status::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Nsr::Status::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Nsr::Status::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::OpenConfig::OpenConfig()
    :
    global_counters(std::make_shared<Rsvp::OpenConfig::GlobalCounters>())
	,interface_counters(std::make_shared<Rsvp::OpenConfig::InterfaceCounters>())
{
    global_counters->parent = this;
    interface_counters->parent = this;

    yang_name = "open-config"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::~OpenConfig()
{
}

bool Rsvp::OpenConfig::has_data() const
{
    return (global_counters !=  nullptr && global_counters->has_data())
	|| (interface_counters !=  nullptr && interface_counters->has_data());
}

bool Rsvp::OpenConfig::has_operation() const
{
    return is_set(yfilter)
	|| (global_counters !=  nullptr && global_counters->has_operation())
	|| (interface_counters !=  nullptr && interface_counters->has_operation());
}

std::string Rsvp::OpenConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-counters")
    {
        if(global_counters == nullptr)
        {
            global_counters = std::make_shared<Rsvp::OpenConfig::GlobalCounters>();
        }
        return global_counters;
    }

    if(child_yang_name == "interface-counters")
    {
        if(interface_counters == nullptr)
        {
            interface_counters = std::make_shared<Rsvp::OpenConfig::InterfaceCounters>();
        }
        return interface_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_counters != nullptr)
    {
        children["global-counters"] = global_counters;
    }

    if(interface_counters != nullptr)
    {
        children["interface-counters"] = interface_counters;
    }

    return children;
}

void Rsvp::OpenConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::OpenConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::OpenConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-counters" || name == "interface-counters")
        return true;
    return false;
}

Rsvp::OpenConfig::GlobalCounters::GlobalCounters()
    :
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    path_timeouts{YType::uint64, "path-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"}
{

    yang_name = "global-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::GlobalCounters::~GlobalCounters()
{
}

bool Rsvp::OpenConfig::GlobalCounters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set
	|| path_timeouts.is_set
	|| rate_limited_messages.is_set
	|| reservation_timeouts.is_set;
}

bool Rsvp::OpenConfig::GlobalCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(path_timeouts.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(reservation_timeouts.yfilter);
}

std::string Rsvp::OpenConfig::GlobalCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::GlobalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::GlobalCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (path_timeouts.is_set || is_set(path_timeouts.yfilter)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.yfilter)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::GlobalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::GlobalCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::OpenConfig::GlobalCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
        path_timeouts.value_namespace = name_space;
        path_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
        reservation_timeouts.value_namespace = name_space;
        reservation_timeouts.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::OpenConfig::GlobalCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts.yfilter = yfilter;
    }
}

bool Rsvp::OpenConfig::GlobalCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-ack-messages" || name == "in-hello-messages" || name == "in-path-error-messages" || name == "in-path-messages" || name == "in-path-tear-messages" || name == "in-reservation-error-messages" || name == "in-reservation-messages" || name == "in-reservation-tear-messages" || name == "in-srefresh-messages" || name == "out-ack-messages" || name == "out-hello-messages" || name == "out-path-error-messages" || name == "out-path-messages" || name == "out-path-tear-messages" || name == "out-reservation-error-messages" || name == "out-reservation-messages" || name == "out-reservation-tear-messages" || name == "out-srefresh-messages" || name == "path-timeouts" || name == "rate-limited-messages" || name == "reservation-timeouts")
        return true;
    return false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounters()
{

    yang_name = "interface-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::InterfaceCounters::~InterfaceCounters()
{
}

bool Rsvp::OpenConfig::InterfaceCounters::has_data() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::OpenConfig::InterfaceCounters::has_operation() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::OpenConfig::InterfaceCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::InterfaceCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::InterfaceCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::InterfaceCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counter")
    {
        for(auto const & c : interface_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter>();
        c->parent = this;
        interface_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::InterfaceCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::OpenConfig::InterfaceCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::OpenConfig::InterfaceCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::OpenConfig::InterfaceCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counter")
        return true;
    return false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::InterfaceCounter()
    :
    interface_name{YType::str, "interface-name"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    interface_name_xr{YType::str, "interface-name-xr"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"}
{

    yang_name = "interface-counter"; yang_parent_name = "interface-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::~InterfaceCounter()
{
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_data() const
{
    return interface_name.is_set
	|| in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| interface_name_xr.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set;
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter);
}

std::string Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/interface-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counter" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "in-ack-messages" || name == "in-hello-messages" || name == "in-path-error-messages" || name == "in-path-messages" || name == "in-path-tear-messages" || name == "in-reservation-error-messages" || name == "in-reservation-messages" || name == "in-reservation-tear-messages" || name == "in-srefresh-messages" || name == "interface-name-xr" || name == "out-ack-messages" || name == "out-hello-messages" || name == "out-path-error-messages" || name == "out-path-messages" || name == "out-path-tear-messages" || name == "out-reservation-error-messages" || name == "out-reservation-messages" || name == "out-reservation-tear-messages" || name == "out-srefresh-messages")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBriefs()
{

    yang_name = "psb-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::~PsbBriefs()
{
}

bool Rsvp::PsbBriefs::has_data() const
{
    for (std::size_t index=0; index<psb_brief.size(); index++)
    {
        if(psb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<psb_brief.size(); index++)
    {
        if(psb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::PsbBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-brief")
    {
        for(auto const & c : psb_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PsbBriefs::PsbBrief>();
        c->parent = this;
        psb_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : psb_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::PsbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-brief")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::PsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    generic_traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>())
	,s2l_sub_lsp(std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2LSubLsp>())
	,session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>())
	,session_attribute(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>())
	,template_(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_>())
	,traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>())
{
    generic_traffic_spec->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    session_attribute->parent = this;
    template_->parent = this;
    traffic_spec->parent = this;

    yang_name = "psb-brief"; yang_parent_name = "psb-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::~PsbBrief()
{
}

bool Rsvp::PsbBriefs::PsbBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute == nullptr)
        {
            session_attribute = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>();
        }
        return session_attribute;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>();
        }
        return traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(session_attribute != nullptr)
    {
        children["session-attribute"] = session_attribute;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(traffic_spec != nullptr)
    {
        children["traffic-spec"] = traffic_spec;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-traffic-spec" || name == "s2l-sub-lsp" || name == "session" || name == "session-attribute" || name == "template" || name == "traffic-spec" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "input-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_tspec != nullptr)
    {
        children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        children["intsrv-tspec"] = intsrv_tspec;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::~Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::PsbBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessionAttribute()
    :
    reservation_priority{YType::uint8, "reservation-priority"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    sess_attribute_flags(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;

    yang_name = "session-attribute"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::~SessionAttribute()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_data() const
{
    return reservation_priority.is_set
	|| setup_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_priority.is_set || is_set(reservation_priority.yfilter)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags == nullptr)
        {
            sess_attribute_flags = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>();
        }
        return sess_attribute_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sess_attribute_flags != nullptr)
    {
        children["sess-attribute-flags"] = sess_attribute_flags;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority = value;
        reservation_priority.value_namespace = name_space;
        reservation_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sess-attribute-flags" || name == "reservation-priority" || name == "setup-priority")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{

    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_data() const
{
    return is_bandwidth_protect.is_set
	|| is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_local_protect.yfilter)
	|| ydk::is_set(is_node_protect.yfilter)
	|| ydk::is_set(is_record_labels.yfilter)
	|| ydk::is_set(is_shared_explicit_requested.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_local_protect.is_set || is_set(is_local_protect.yfilter)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.yfilter)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.yfilter)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.yfilter)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect = value;
        is_local_protect.value_namespace = name_space;
        is_local_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect = value;
        is_node_protect.value_namespace = name_space;
        is_node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels = value;
        is_record_labels.value_namespace = name_space;
        is_record_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested = value;
        is_shared_explicit_requested.value_namespace = name_space;
        is_shared_explicit_requested.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect.yfilter = yfilter;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect.yfilter = yfilter;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels.yfilter = yfilter;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protect" || name == "is-local-protect" || name == "is-node-protect" || name == "is-record-labels" || name == "is-shared-explicit-requested")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::Template_()
    :
    rsvp_filter(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "template"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::~Template_()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::PsbBrief::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbBriefs::PsbBrief::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetaileds()
{

    yang_name = "psb-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::~PsbDetaileds()
{
}

bool Rsvp::PsbDetaileds::has_data() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::has_operation() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::PsbDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-detailed")
    {
        for(auto const & c : psb_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed>();
        c->parent = this;
        psb_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : psb_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::PsbDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-detailed")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PsbDetailed()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    is_in_ero_valid{YType::boolean, "is-in-ero-valid"},
    is_out_ero_valid{YType::boolean, "is-out-ero-valid"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    class_type(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ClassType>())
	,expiry_time(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime>())
	,generic_traffic_spec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec>())
	,header(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Header>())
	,hop(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Hop>())
	,label_info(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo>())
	,path_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PathFlags>())
	,policy_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags>())
	,policy_source_info(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo>())
	,s2l_sub_lsp(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp>())
	,session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session>())
	,session_attribute(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute>())
	,template_(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_>())
	,traffic_spec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec>())
{
    class_type->parent = this;
    expiry_time->parent = this;
    generic_traffic_spec->parent = this;
    header->parent = this;
    hop->parent = this;
    label_info->parent = this;
    path_flags->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;
    policy_source_info->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    session_attribute->parent = this;
    template_->parent = this;
    traffic_spec->parent = this;

    yang_name = "psb-detailed"; yang_parent_name = "psb-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::~PsbDetailed()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_data() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_data())
            return true;
    }
    return backup_tunnel_name.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| is_in_ero_valid.is_set
	|| is_out_ero_valid.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (label_info !=  nullptr && label_info->has_data())
	|| (path_flags !=  nullptr && path_flags->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_source_info !=  nullptr && policy_source_info->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_operation() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(is_in_ero_valid.yfilter)
	|| ydk::is_set(is_out_ero_valid.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation())
	|| (path_flags !=  nullptr && path_flags->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_source_info !=  nullptr && policy_source_info->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detailed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (is_in_ero_valid.is_set || is_set(is_in_ero_valid.yfilter)) leaf_name_data.push_back(is_in_ero_valid.get_name_leafdata());
    if (is_out_ero_valid.is_set || is_set(is_out_ero_valid.yfilter)) leaf_name_data.push_back(is_out_ero_valid.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Header>();
        }
        return header;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro>();
        c->parent = this;
        in_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "label-info")
    {
        if(label_info == nullptr)
        {
            label_info = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo>();
        }
        return label_info;
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro>();
        c->parent = this;
        out_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "path-flags")
    {
        if(path_flags == nullptr)
        {
            path_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PathFlags>();
        }
        return path_flags;
    }

    if(child_yang_name == "pfc")
    {
        for(auto const & c : pfc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc>();
        c->parent = this;
        pfc.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "policy-source-info")
    {
        if(policy_source_info == nullptr)
        {
            policy_source_info = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo>();
        }
        return policy_source_info;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session>();
        }
        return session;
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute == nullptr)
        {
            session_attribute = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute>();
        }
        return session_attribute;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec>();
        }
        return traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    for (auto const & c : in_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(label_info != nullptr)
    {
        children["label-info"] = label_info;
    }

    for (auto const & c : out_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(path_flags != nullptr)
    {
        children["path-flags"] = path_flags;
    }

    for (auto const & c : pfc)
    {
        children[c->get_segment_path()] = c;
    }

    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    if(policy_source_info != nullptr)
    {
        children["policy-source-info"] = policy_source_info;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(session_attribute != nullptr)
    {
        children["session-attribute"] = session_attribute;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(traffic_spec != nullptr)
    {
        children["traffic-spec"] = traffic_spec;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-ero-valid")
    {
        is_in_ero_valid = value;
        is_in_ero_valid.value_namespace = name_space;
        is_in_ero_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-out-ero-valid")
    {
        is_out_ero_valid = value;
        is_out_ero_valid.value_namespace = name_space;
        is_out_ero_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "is-in-ero-valid")
    {
        is_in_ero_valid.yfilter = yfilter;
    }
    if(value_path == "is-out-ero-valid")
    {
        is_out_ero_valid.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "expiry-time" || name == "generic-traffic-spec" || name == "header" || name == "hop" || name == "in-ero" || name == "label-info" || name == "out-ero" || name == "path-flags" || name == "pfc" || name == "policy-flags" || name == "policy-query-flags" || name == "policy-source-info" || name == "s2l-sub-lsp" || name == "session" || name == "session-attribute" || name == "template" || name == "traffic-spec" || name == "backup-tunnel-name" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "input-interface" || name == "is-in-ero-valid" || name == "is-out-ero-valid" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::ClassType::ClassType()
    :
    class_type{YType::uint8, "class-type"},
    is_class_type_info_valid{YType::boolean, "is-class-type-info-valid"}
{

    yang_name = "class-type"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::ClassType::~ClassType()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_data() const
{
    return class_type.is_set
	|| is_class_type_info_valid.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(is_class_type_info_valid.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (is_class_type_info_valid.is_set || is_set(is_class_type_info_valid.yfilter)) leaf_name_data.push_back(is_class_type_info_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-class-type-info-valid")
    {
        is_class_type_info_valid = value;
        is_class_type_info_valid.value_namespace = name_space;
        is_class_type_info_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "is-class-type-info-valid")
    {
        is_class_type_info_valid.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "is-class-type-info-valid")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_tspec != nullptr)
    {
        children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        children["intsrv-tspec"] = intsrv_tspec;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{

    yang_name = "header"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Header::~Header()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_source_address.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_version.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
        ip_ttl.value_namespace = name_space;
        ip_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-source-address" || name == "ip-tos" || name == "ip-ttl" || name == "rsvp-header-flags" || name == "rsvp-message-type" || name == "rsvp-ttl" || name == "rsvp-version")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Hop::~Hop()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
        neighbor_logical_interface_name.value_namespace = name_space;
        neighbor_logical_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "in-ero"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::~InEro()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::PsbDetaileds::PsbDetailed::InEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"}
    	,
    generic_local_downstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_local_upstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_merge_point_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_downstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_outgoing_upstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_recovery_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    generic_local_upstream_label->parent = this;
    generic_merge_point_label->parent = this;
    generic_outgoing_downstream_label->parent = this;
    generic_outgoing_upstream_label->parent = this;
    generic_recovery_label->parent = this;

    yang_name = "label-info"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::~LabelInfo()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_data() const
{
    return is_valid.is_set
	|| local_downstream_label.is_set
	|| local_upstream_label.is_set
	|| lsp_wrap_label.is_set
	|| merge_point_label.is_set
	|| outgoing_downstream_label.is_set
	|| outgoing_upstream_label.is_set
	|| recovery_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(local_downstream_label.yfilter)
	|| ydk::is_set(local_upstream_label.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(outgoing_downstream_label.yfilter)
	|| ydk::is_set(outgoing_upstream_label.yfilter)
	|| ydk::is_set(recovery_label.yfilter)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (local_downstream_label.is_set || is_set(local_downstream_label.yfilter)) leaf_name_data.push_back(local_downstream_label.get_name_leafdata());
    if (local_upstream_label.is_set || is_set(local_upstream_label.yfilter)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.yfilter)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.yfilter)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.yfilter)) leaf_name_data.push_back(recovery_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-local-downstream-label")
    {
        if(generic_local_downstream_label == nullptr)
        {
            generic_local_downstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>();
        }
        return generic_local_downstream_label;
    }

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label == nullptr)
        {
            generic_local_upstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
        }
        return generic_local_upstream_label;
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label == nullptr)
        {
            generic_merge_point_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>();
        }
        return generic_merge_point_label;
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label == nullptr)
        {
            generic_outgoing_downstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
        }
        return generic_outgoing_downstream_label;
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label == nullptr)
        {
            generic_outgoing_upstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
        }
        return generic_outgoing_upstream_label;
    }

    if(child_yang_name == "generic-recovery-label")
    {
        if(generic_recovery_label == nullptr)
        {
            generic_recovery_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>();
        }
        return generic_recovery_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_local_downstream_label != nullptr)
    {
        children["generic-local-downstream-label"] = generic_local_downstream_label;
    }

    if(generic_local_upstream_label != nullptr)
    {
        children["generic-local-upstream-label"] = generic_local_upstream_label;
    }

    if(generic_merge_point_label != nullptr)
    {
        children["generic-merge-point-label"] = generic_merge_point_label;
    }

    if(generic_outgoing_downstream_label != nullptr)
    {
        children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
    }

    if(generic_outgoing_upstream_label != nullptr)
    {
        children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
    }

    if(generic_recovery_label != nullptr)
    {
        children["generic-recovery-label"] = generic_recovery_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label = value;
        local_downstream_label.value_namespace = name_space;
        local_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
        local_upstream_label.value_namespace = name_space;
        local_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
        outgoing_downstream_label.value_namespace = name_space;
        outgoing_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
        outgoing_upstream_label.value_namespace = name_space;
        outgoing_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
        recovery_label.value_namespace = name_space;
        recovery_label.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label.yfilter = yfilter;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label.yfilter = yfilter;
    }
    if(value_path == "recovery-label")
    {
        recovery_label.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-local-downstream-label" || name == "generic-local-upstream-label" || name == "generic-merge-point-label" || name == "generic-outgoing-downstream-label" || name == "generic-outgoing-upstream-label" || name == "generic-recovery-label" || name == "is-valid" || name == "local-downstream-label" || name == "local-upstream-label" || name == "lsp-wrap-label" || name == "merge-point-label" || name == "outgoing-downstream-label" || name == "outgoing-upstream-label" || name == "recovery-label")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GenericLocalDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::~GenericLocalDownstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-local-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GenericLocalUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::~GenericLocalUpstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-local-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GenericMergePointLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-merge-point-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::~GenericMergePointLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-merge-point-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-merge-point-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-merge-point-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GenericOutgoingDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::~GenericOutgoingDownstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-outgoing-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GenericOutgoingUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::~GenericOutgoingUpstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-outgoing-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GenericRecoveryLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-recovery-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::~GenericRecoveryLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-recovery-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-recovery-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-recovery-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::~OutEro()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PathFlags::PathFlags()
    :
    is_bidirectional{YType::boolean, "is-bidirectional"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_local_sender{YType::boolean, "is-local-sender"},
    is_lockout{YType::boolean, "is-lockout"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"},
    is_non_rsvp_hop_upstream{YType::boolean, "is-non-rsvp-hop-upstream"}
{

    yang_name = "path-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PathFlags::~PathFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_data() const
{
    return is_bidirectional.is_set
	|| is_local_repair.is_set
	|| is_local_sender.is_set
	|| is_lockout.is_set
	|| is_message_id_valid.is_set
	|| is_non_rsvp_hop_upstream.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bidirectional.yfilter)
	|| ydk::is_set(is_local_repair.yfilter)
	|| ydk::is_set(is_local_sender.yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(is_message_id_valid.yfilter)
	|| ydk::is_set(is_non_rsvp_hop_upstream.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bidirectional.is_set || is_set(is_bidirectional.yfilter)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());
    if (is_local_repair.is_set || is_set(is_local_repair.yfilter)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_local_sender.is_set || is_set(is_local_sender.yfilter)) leaf_name_data.push_back(is_local_sender.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.yfilter)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());
    if (is_non_rsvp_hop_upstream.is_set || is_set(is_non_rsvp_hop_upstream.yfilter)) leaf_name_data.push_back(is_non_rsvp_hop_upstream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PathFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
        is_bidirectional.value_namespace = name_space;
        is_bidirectional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
        is_local_repair.value_namespace = name_space;
        is_local_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-sender")
    {
        is_local_sender = value;
        is_local_sender.value_namespace = name_space;
        is_local_sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
        is_message_id_valid.value_namespace = name_space;
        is_message_id_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-non-rsvp-hop-upstream")
    {
        is_non_rsvp_hop_upstream = value;
        is_non_rsvp_hop_upstream.value_namespace = name_space;
        is_non_rsvp_hop_upstream.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PathFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional.yfilter = yfilter;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair.yfilter = yfilter;
    }
    if(value_path == "is-local-sender")
    {
        is_local_sender.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid.yfilter = yfilter;
    }
    if(value_path == "is-non-rsvp-hop-upstream")
    {
        is_non_rsvp_hop_upstream.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bidirectional" || name == "is-local-repair" || name == "is-local-sender" || name == "is-lockout" || name == "is-message-id-valid" || name == "is-non-rsvp-hop-upstream")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::Pfc()
    :
    output_interface{YType::str, "output-interface"}
    	,
    policy_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>())
{
    policy_flags->parent = this;
    policy_query_flags->parent = this;

    yang_name = "pfc"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::~Pfc()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_data() const
{
    return output_interface.is_set
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-flags" || name == "policy-query-flags" || name == "output-interface")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{

    yang_name = "policy-flags"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_forwarding.yfilter)
	|| ydk::is_set(is_installed.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-forwarding" || name == "is-installed")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bypass.yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bypass" || name == "is-needed" || name == "is-report-required" || name == "is-resync")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{

    yang_name = "policy-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_forwarding.yfilter)
	|| ydk::is_set(is_installed.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-forwarding" || name == "is-installed")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bypass.yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bypass" || name == "is-needed" || name == "is-report-required" || name == "is-resync")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::PolicySourceInfo()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{

    yang_name = "policy-source-info"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::~PolicySourceInfo()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_cable.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_te_link.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-source-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
        is_cable.value_namespace = name_space;
        is_cable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
        is_cops.value_namespace = name_space;
        is_cops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
        is_te_link.value_namespace = name_space;
        is_te_link.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-cable")
    {
        is_cable.yfilter = yfilter;
    }
    if(value_path == "is-cops")
    {
        is_cops.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-te-link")
    {
        is_te_link.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-cable" || name == "is-cops" || name == "is-default" || name == "is-local" || name == "is-te-link")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::~Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessionAttribute()
    :
    reservation_priority{YType::uint8, "reservation-priority"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    sess_attribute_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;

    yang_name = "session-attribute"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::~SessionAttribute()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_data() const
{
    return reservation_priority.is_set
	|| setup_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_priority.is_set || is_set(reservation_priority.yfilter)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags == nullptr)
        {
            sess_attribute_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>();
        }
        return sess_attribute_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sess_attribute_flags != nullptr)
    {
        children["sess-attribute-flags"] = sess_attribute_flags;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority = value;
        reservation_priority.value_namespace = name_space;
        reservation_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sess-attribute-flags" || name == "reservation-priority" || name == "setup-priority")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{

    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_data() const
{
    return is_bandwidth_protect.is_set
	|| is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_local_protect.yfilter)
	|| ydk::is_set(is_node_protect.yfilter)
	|| ydk::is_set(is_record_labels.yfilter)
	|| ydk::is_set(is_shared_explicit_requested.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_local_protect.is_set || is_set(is_local_protect.yfilter)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.yfilter)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.yfilter)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.yfilter)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect = value;
        is_local_protect.value_namespace = name_space;
        is_local_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect = value;
        is_node_protect.value_namespace = name_space;
        is_node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels = value;
        is_record_labels.value_namespace = name_space;
        is_record_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested = value;
        is_shared_explicit_requested.value_namespace = name_space;
        is_shared_explicit_requested.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect.yfilter = yfilter;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect.yfilter = yfilter;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels.yfilter = yfilter;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protect" || name == "is-local-protect" || name == "is-node-protect" || name == "is-record-labels" || name == "is-shared-explicit-requested")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::Template_()
    :
    rsvp_filter(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "template"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::~Template_()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetails()
{

    yang_name = "pxsb-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::~PxsbDetails()
{
}

bool Rsvp::PxsbDetails::has_data() const
{
    for (std::size_t index=0; index<pxsb_detail.size(); index++)
    {
        if(pxsb_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PxsbDetails::has_operation() const
{
    for (std::size_t index=0; index<pxsb_detail.size(); index++)
    {
        if(pxsb_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::PxsbDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pxsb-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pxsb-detail")
    {
        for(auto const & c : pxsb_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::PxsbDetails::PxsbDetail>();
        c->parent = this;
        pxsb_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pxsb_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::PxsbDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PxsbDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PxsbDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pxsb-detail")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::PxsbDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    dynamic_state{YType::uint32, "dynamic-state"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    generic_traffic_spec(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec>())
	,hop(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Hop>())
	,rsvp_header(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::RsvpHeader>())
	,s2l_sub_lsp(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp>())
	,session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session>())
	,template_(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_>())
	,traffic_spec(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::TrafficSpec>())
{
    generic_traffic_spec->parent = this;
    hop->parent = this;
    rsvp_header->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    template_->parent = this;
    traffic_spec->parent = this;

    yang_name = "pxsb-detail"; yang_parent_name = "pxsb-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::~PxsbDetail()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| dynamic_state.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (rsvp_header !=  nullptr && rsvp_header->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(dynamic_state.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (rsvp_header !=  nullptr && rsvp_header->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pxsb-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (dynamic_state.is_set || is_set(dynamic_state.yfilter)) leaf_name_data.push_back(dynamic_state.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "rsvp-header")
    {
        if(rsvp_header == nullptr)
        {
            rsvp_header = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::RsvpHeader>();
        }
        return rsvp_header;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session>();
        }
        return session;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::TrafficSpec>();
        }
        return traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(rsvp_header != nullptr)
    {
        children["rsvp-header"] = rsvp_header;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(traffic_spec != nullptr)
    {
        children["traffic-spec"] = traffic_spec;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-state")
    {
        dynamic_state = value;
        dynamic_state.value_namespace = name_space;
        dynamic_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "dynamic-state")
    {
        dynamic_state.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-traffic-spec" || name == "hop" || name == "rsvp-header" || name == "s2l-sub-lsp" || name == "session" || name == "template" || name == "traffic-spec" || name == "destination-address" || name == "destination-port" || name == "dynamic-state" || name == "extended-tunnel-id" || name == "input-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_tspec != nullptr)
    {
        children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        children["intsrv-tspec"] = intsrv_tspec;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Hop::~Hop()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
        neighbor_logical_interface_name.value_namespace = name_space;
        neighbor_logical_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::RsvpHeader()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{

    yang_name = "rsvp-header"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::~RsvpHeader()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_source_address.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_version.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
        ip_ttl.value_namespace = name_space;
        ip_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::RsvpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-source-address" || name == "ip-tos" || name == "ip-ttl" || name == "rsvp-header-flags" || name == "rsvp-message-type" || name == "rsvp-ttl" || name == "rsvp-version")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::~Session()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PxsbDetails::PxsbDetail::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::Template_()
    :
    rsvp_filter(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "template"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::~Template_()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "traffic-spec"; yang_parent_name = "pxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/pxsb-details/pxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool Rsvp::PxsbDetails::PxsbDetail::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBriefs()
{

    yang_name = "request-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::~RequestBriefs()
{
}

bool Rsvp::RequestBriefs::has_data() const
{
    for (std::size_t index=0; index<request_brief.size(); index++)
    {
        if(request_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RequestBriefs::has_operation() const
{
    for (std::size_t index=0; index<request_brief.size(); index++)
    {
        if(request_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RequestBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-brief")
    {
        for(auto const & c : request_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RequestBriefs::RequestBrief>();
        c->parent = this;
        request_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::RequestBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-brief")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::RequestBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    output_interface{YType::str, "output-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter>())
	,flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RequestBriefs::RequestBrief::S2LSubLsp>())
	,session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session>())
	,style(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Style>())
{
    filter->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    style->parent = this;

    yang_name = "request-brief"; yang_parent_name = "request-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::~RequestBrief()
{
}

bool Rsvp::RequestBriefs::RequestBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| output_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RequestBriefs::RequestBrief::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "flow-spec" || name == "generic-flow-spec" || name == "s2l-sub-lsp" || name == "session" || name == "style" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "output-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::~Filter()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::RequestBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{

    yang_name = "flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_qos.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::~Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::RequestBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestBriefs::RequestBrief::Style::~Style()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_data() const
{
    return reservation_type.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestBriefs::RequestBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestBriefs::RequestBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestBriefs::RequestBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetails()
{

    yang_name = "request-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::~RequestDetails()
{
}

bool Rsvp::RequestDetails::has_data() const
{
    for (std::size_t index=0; index<request_detail.size(); index++)
    {
        if(request_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RequestDetails::has_operation() const
{
    for (std::size_t index=0; index<request_detail.size(); index++)
    {
        if(request_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RequestDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-detail")
    {
        for(auto const & c : request_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RequestDetails::RequestDetail>();
        c->parent = this;
        request_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::RequestDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-detail")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::RequestDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    output_interface{YType::str, "output-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter>())
	,flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec>())
	,header(std::make_shared<Rsvp::RequestDetails::RequestDetail::Header>())
	,hop(std::make_shared<Rsvp::RequestDetails::RequestDetail::Hop>())
	,policy_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags>())
	,policy_sources(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicySources>())
	,req_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::ReqFlags>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RequestDetails::RequestDetail::S2LSubLsp>())
	,session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session>())
	,style(std::make_shared<Rsvp::RequestDetails::RequestDetail::Style>())
{
    filter->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    header->parent = this;
    hop->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;
    policy_sources->parent = this;
    req_flags->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    style->parent = this;

    yang_name = "request-detail"; yang_parent_name = "request-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::~RequestDetail()
{
}

bool Rsvp::RequestDetails::RequestDetail::has_data() const
{
    for (std::size_t index=0; index<psb_key.size(); index++)
    {
        if(psb_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.size(); index++)
    {
        if(rsb_key[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| output_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (req_flags !=  nullptr && req_flags->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::has_operation() const
{
    for (std::size_t index=0; index<psb_key.size(); index++)
    {
        if(psb_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.size(); index++)
    {
        if(rsb_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (req_flags !=  nullptr && req_flags->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::RequestDetails::RequestDetail::Header>();
        }
        return header;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::RequestDetails::RequestDetail::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources == nullptr)
        {
            policy_sources = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicySources>();
        }
        return policy_sources;
    }

    if(child_yang_name == "psb-key")
    {
        for(auto const & c : psb_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RequestDetails::RequestDetail::PsbKey>();
        c->parent = this;
        psb_key.push_back(c);
        return c;
    }

    if(child_yang_name == "req-flags")
    {
        if(req_flags == nullptr)
        {
            req_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::ReqFlags>();
        }
        return req_flags;
    }

    if(child_yang_name == "rsb-key")
    {
        for(auto const & c : rsb_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RequestDetails::RequestDetail::RsbKey>();
        c->parent = this;
        rsb_key.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RequestDetails::RequestDetail::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session>();
        }
        return session;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RequestDetails::RequestDetail::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    if(policy_sources != nullptr)
    {
        children["policy-sources"] = policy_sources;
    }

    for (auto const & c : psb_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(req_flags != nullptr)
    {
        children["req-flags"] = req_flags;
    }

    for (auto const & c : rsb_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "flow-spec" || name == "generic-flow-spec" || name == "header" || name == "hop" || name == "policy-flags" || name == "policy-query-flags" || name == "policy-sources" || name == "psb-key" || name == "req-flags" || name == "rsb-key" || name == "s2l-sub-lsp" || name == "session" || name == "style" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "output-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Filter::~Filter()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::RequestDetail::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{

    yang_name = "flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_qos.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{

    yang_name = "header"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Header::~Header()
{
}

bool Rsvp::RequestDetails::RequestDetail::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_source_address.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_version.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
        ip_ttl.value_namespace = name_space;
        ip_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-source-address" || name == "ip-tos" || name == "ip-ttl" || name == "rsvp-header-flags" || name == "rsvp-message-type" || name == "rsvp-ttl" || name == "rsvp-version")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Hop::~Hop()
{
}

bool Rsvp::RequestDetails::RequestDetail::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
        neighbor_logical_interface_name.value_namespace = name_space;
        neighbor_logical_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{

    yang_name = "policy-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_forwarding.yfilter)
	|| ydk::is_set(is_installed.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-forwarding" || name == "is-installed")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bypass.yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bypass" || name == "is-needed" || name == "is-report-required" || name == "is-resync")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicySources::PolicySources()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{

    yang_name = "policy-sources"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::PolicySources::~PolicySources()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_cable.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_te_link.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicySources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicySources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::PolicySources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::PolicySources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
        is_cable.value_namespace = name_space;
        is_cable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
        is_cops.value_namespace = name_space;
        is_cops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
        is_te_link.value_namespace = name_space;
        is_te_link.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::PolicySources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-cable")
    {
        is_cable.yfilter = yfilter;
    }
    if(value_path == "is-cops")
    {
        is_cops.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-te-link")
    {
        is_te_link.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-cable" || name == "is-cops" || name == "is-default" || name == "is-local" || name == "is-te-link")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PsbKey::PsbKey()
    :
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    protocol{YType::uint32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{

    yang_name = "psb-key"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::PsbKey::~PsbKey()
{
}

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_data() const
{
    return destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port_or_tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port_or_lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrfid.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PsbKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.yfilter)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.yfilter)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::PsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::PsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::PsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
        destination_port_or_tunnel_id.value_namespace = name_space;
        destination_port_or_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
        source_port_or_lsp_id.value_namespace = name_space;
        source_port_or_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::PsbKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "p2mp-sub-group-origin" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::ReqFlags::ReqFlags()
    :
    is_ack_outstanding{YType::boolean, "is-ack-outstanding"},
    is_label_request_in_path{YType::boolean, "is-label-request-in-path"},
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_merge_point{YType::boolean, "is-merge-point"},
    is_message_id_allocated{YType::boolean, "is-message-id-allocated"},
    is_nack_received{YType::boolean, "is-nack-received"},
    is_paced{YType::boolean, "is-paced"},
    is_record_label_in_path{YType::boolean, "is-record-label-in-path"},
    is_refreshing{YType::boolean, "is-refreshing"},
    is_retransmit{YType::boolean, "is-retransmit"},
    is_rro_in_path{YType::boolean, "is-rro-in-path"},
    is_send_confirm{YType::boolean, "is-send-confirm"}
{

    yang_name = "req-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::ReqFlags::~ReqFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_data() const
{
    return is_ack_outstanding.is_set
	|| is_label_request_in_path.is_set
	|| is_local_receiver.is_set
	|| is_merge_point.is_set
	|| is_message_id_allocated.is_set
	|| is_nack_received.is_set
	|| is_paced.is_set
	|| is_record_label_in_path.is_set
	|| is_refreshing.is_set
	|| is_retransmit.is_set
	|| is_rro_in_path.is_set
	|| is_send_confirm.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ack_outstanding.yfilter)
	|| ydk::is_set(is_label_request_in_path.yfilter)
	|| ydk::is_set(is_local_receiver.yfilter)
	|| ydk::is_set(is_merge_point.yfilter)
	|| ydk::is_set(is_message_id_allocated.yfilter)
	|| ydk::is_set(is_nack_received.yfilter)
	|| ydk::is_set(is_paced.yfilter)
	|| ydk::is_set(is_record_label_in_path.yfilter)
	|| ydk::is_set(is_refreshing.yfilter)
	|| ydk::is_set(is_retransmit.yfilter)
	|| ydk::is_set(is_rro_in_path.yfilter)
	|| ydk::is_set(is_send_confirm.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::ReqFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::ReqFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "req-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::ReqFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ack_outstanding.is_set || is_set(is_ack_outstanding.yfilter)) leaf_name_data.push_back(is_ack_outstanding.get_name_leafdata());
    if (is_label_request_in_path.is_set || is_set(is_label_request_in_path.yfilter)) leaf_name_data.push_back(is_label_request_in_path.get_name_leafdata());
    if (is_local_receiver.is_set || is_set(is_local_receiver.yfilter)) leaf_name_data.push_back(is_local_receiver.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.yfilter)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());
    if (is_message_id_allocated.is_set || is_set(is_message_id_allocated.yfilter)) leaf_name_data.push_back(is_message_id_allocated.get_name_leafdata());
    if (is_nack_received.is_set || is_set(is_nack_received.yfilter)) leaf_name_data.push_back(is_nack_received.get_name_leafdata());
    if (is_paced.is_set || is_set(is_paced.yfilter)) leaf_name_data.push_back(is_paced.get_name_leafdata());
    if (is_record_label_in_path.is_set || is_set(is_record_label_in_path.yfilter)) leaf_name_data.push_back(is_record_label_in_path.get_name_leafdata());
    if (is_refreshing.is_set || is_set(is_refreshing.yfilter)) leaf_name_data.push_back(is_refreshing.get_name_leafdata());
    if (is_retransmit.is_set || is_set(is_retransmit.yfilter)) leaf_name_data.push_back(is_retransmit.get_name_leafdata());
    if (is_rro_in_path.is_set || is_set(is_rro_in_path.yfilter)) leaf_name_data.push_back(is_rro_in_path.get_name_leafdata());
    if (is_send_confirm.is_set || is_set(is_send_confirm.yfilter)) leaf_name_data.push_back(is_send_confirm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::ReqFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::ReqFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::ReqFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ack-outstanding")
    {
        is_ack_outstanding = value;
        is_ack_outstanding.value_namespace = name_space;
        is_ack_outstanding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-request-in-path")
    {
        is_label_request_in_path = value;
        is_label_request_in_path.value_namespace = name_space;
        is_label_request_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-receiver")
    {
        is_local_receiver = value;
        is_local_receiver.value_namespace = name_space;
        is_local_receiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
        is_merge_point.value_namespace = name_space;
        is_merge_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-allocated")
    {
        is_message_id_allocated = value;
        is_message_id_allocated.value_namespace = name_space;
        is_message_id_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nack-received")
    {
        is_nack_received = value;
        is_nack_received.value_namespace = name_space;
        is_nack_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-paced")
    {
        is_paced = value;
        is_paced.value_namespace = name_space;
        is_paced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-record-label-in-path")
    {
        is_record_label_in_path = value;
        is_record_label_in_path.value_namespace = name_space;
        is_record_label_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refreshing")
    {
        is_refreshing = value;
        is_refreshing.value_namespace = name_space;
        is_refreshing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-retransmit")
    {
        is_retransmit = value;
        is_retransmit.value_namespace = name_space;
        is_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rro-in-path")
    {
        is_rro_in_path = value;
        is_rro_in_path.value_namespace = name_space;
        is_rro_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-send-confirm")
    {
        is_send_confirm = value;
        is_send_confirm.value_namespace = name_space;
        is_send_confirm.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::ReqFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ack-outstanding")
    {
        is_ack_outstanding.yfilter = yfilter;
    }
    if(value_path == "is-label-request-in-path")
    {
        is_label_request_in_path.yfilter = yfilter;
    }
    if(value_path == "is-local-receiver")
    {
        is_local_receiver.yfilter = yfilter;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point.yfilter = yfilter;
    }
    if(value_path == "is-message-id-allocated")
    {
        is_message_id_allocated.yfilter = yfilter;
    }
    if(value_path == "is-nack-received")
    {
        is_nack_received.yfilter = yfilter;
    }
    if(value_path == "is-paced")
    {
        is_paced.yfilter = yfilter;
    }
    if(value_path == "is-record-label-in-path")
    {
        is_record_label_in_path.yfilter = yfilter;
    }
    if(value_path == "is-refreshing")
    {
        is_refreshing.yfilter = yfilter;
    }
    if(value_path == "is-retransmit")
    {
        is_retransmit.yfilter = yfilter;
    }
    if(value_path == "is-rro-in-path")
    {
        is_rro_in_path.yfilter = yfilter;
    }
    if(value_path == "is-send-confirm")
    {
        is_send_confirm.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ack-outstanding" || name == "is-label-request-in-path" || name == "is-local-receiver" || name == "is-merge-point" || name == "is-message-id-allocated" || name == "is-nack-received" || name == "is-paced" || name == "is-record-label-in-path" || name == "is-refreshing" || name == "is-retransmit" || name == "is-rro-in-path" || name == "is-send-confirm")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::RsbKey::RsbKey()
    :
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    protocol{YType::uint32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{

    yang_name = "rsb-key"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::RsbKey::~RsbKey()
{
}

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_data() const
{
    return destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port_or_tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port_or_lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrfid.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::RsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::RsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::RsbKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.yfilter)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.yfilter)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::RsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::RsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::RsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
        destination_port_or_tunnel_id.value_namespace = name_space;
        destination_port_or_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
        source_port_or_lsp_id.value_namespace = name_space;
        source_port_or_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::RsbKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "p2mp-sub-group-origin" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RequestDetails::RequestDetail::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::~Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::RequestDetail::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RequestDetails::RequestDetail::Style::~Style()
{
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_data() const
{
    return reservation_type.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RequestDetails::RequestDetail::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RequestDetails::RequestDetail::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RequestDetails::RequestDetail::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBriefs()
{

    yang_name = "rsb-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::~RsbBriefs()
{
}

bool Rsvp::RsbBriefs::has_data() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RsbBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsb-brief")
    {
        for(auto const & c : rsb_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RsbBriefs::RsbBrief>();
        c->parent = this;
        rsb_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsb_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::RsbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsb-brief")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::RsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>())
	,flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2LSubLsp>())
	,session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>())
	,style(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>())
{
    filter->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    style->parent = this;

    yang_name = "rsb-brief"; yang_parent_name = "rsb-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::~RsbBrief()
{
}

bool Rsvp::RsbBriefs::RsbBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "flow-spec" || name == "generic-flow-spec" || name == "s2l-sub-lsp" || name == "session" || name == "style" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "input-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::~Filter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{

    yang_name = "flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_qos.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::~Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}


}
}

