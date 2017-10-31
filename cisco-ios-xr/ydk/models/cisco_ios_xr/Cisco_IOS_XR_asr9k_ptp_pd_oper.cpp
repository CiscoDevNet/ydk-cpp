
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_ptp_pd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_ptp_pd_oper {

PlatformPtp::PlatformPtp()
    :
    platform_ptp_servo(std::make_shared<PlatformPtp::PlatformPtpServo>())
{
    platform_ptp_servo->parent = this;

    yang_name = "platform-ptp"; yang_parent_name = "Cisco-IOS-XR-asr9k-ptp-pd-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformPtp::~PlatformPtp()
{
}

bool PlatformPtp::has_data() const
{
    return (platform_ptp_servo !=  nullptr && platform_ptp_servo->has_data());
}

bool PlatformPtp::has_operation() const
{
    return is_set(yfilter)
	|| (platform_ptp_servo !=  nullptr && platform_ptp_servo->has_operation());
}

std::string PlatformPtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "platform-ptp-servo")
    {
        if(platform_ptp_servo == nullptr)
        {
            platform_ptp_servo = std::make_shared<PlatformPtp::PlatformPtpServo>();
        }
        return platform_ptp_servo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(platform_ptp_servo != nullptr)
    {
        children["platform-ptp-servo"] = platform_ptp_servo;
    }

    return children;
}

void PlatformPtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformPtp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformPtp::clone_ptr() const
{
    return std::make_shared<PlatformPtp>();
}

std::string PlatformPtp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformPtp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformPtp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformPtp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformPtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-ptp-servo")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::PlatformPtpServo()
    :
    lock_status{YType::uint16, "lock-status"},
    running{YType::boolean, "running"},
    device_status{YType::str, "device-status"},
    log_level{YType::uint16, "log-level"},
    phase_accuracy_last{YType::int64, "phase-accuracy-last"},
    num_sync_timestamp{YType::uint32, "num-sync-timestamp"},
    num_delay_timestamp{YType::uint32, "num-delay-timestamp"},
    num_set_time{YType::uint32, "num-set-time"},
    num_step_time{YType::uint32, "num-step-time"},
    num_adjust_freq{YType::uint32, "num-adjust-freq"},
    num_adjust_freq_time{YType::uint32, "num-adjust-freq-time"},
    last_adjust_freq{YType::int32, "last-adjust-freq"},
    last_step_time{YType::int32, "last-step-time"},
    num_discard_sync_timestamp{YType::uint32, "num-discard-sync-timestamp"},
    num_discard_delay_timestamp{YType::uint32, "num-discard-delay-timestamp"},
    flagof_last_set_time{YType::boolean, "flagof-last-set-time"},
    offset_from_master{YType::int64, "offset-from-master"},
    mean_path_delay{YType::int64, "mean-path-delay"}
    	,
    last_set_time(std::make_shared<PlatformPtp::PlatformPtpServo::LastSetTime>())
	,last_received_t1(std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT1>())
	,last_received_t2(std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT2>())
	,last_received_t3(std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT3>())
	,last_received_t4(std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT4>())
	,pre_received_t1(std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT1>())
	,pre_received_t2(std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT2>())
	,pre_received_t3(std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT3>())
	,pre_received_t4(std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT4>())
{
    last_set_time->parent = this;
    last_received_t1->parent = this;
    last_received_t2->parent = this;
    last_received_t3->parent = this;
    last_received_t4->parent = this;
    pre_received_t1->parent = this;
    pre_received_t2->parent = this;
    pre_received_t3->parent = this;
    pre_received_t4->parent = this;

    yang_name = "platform-ptp-servo"; yang_parent_name = "platform-ptp"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::~PlatformPtpServo()
{
}

bool PlatformPtp::PlatformPtpServo::has_data() const
{
    return lock_status.is_set
	|| running.is_set
	|| device_status.is_set
	|| log_level.is_set
	|| phase_accuracy_last.is_set
	|| num_sync_timestamp.is_set
	|| num_delay_timestamp.is_set
	|| num_set_time.is_set
	|| num_step_time.is_set
	|| num_adjust_freq.is_set
	|| num_adjust_freq_time.is_set
	|| last_adjust_freq.is_set
	|| last_step_time.is_set
	|| num_discard_sync_timestamp.is_set
	|| num_discard_delay_timestamp.is_set
	|| flagof_last_set_time.is_set
	|| offset_from_master.is_set
	|| mean_path_delay.is_set
	|| (last_set_time !=  nullptr && last_set_time->has_data())
	|| (last_received_t1 !=  nullptr && last_received_t1->has_data())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_data())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_data())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_data())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_data())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_data())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_data())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_data());
}

bool PlatformPtp::PlatformPtpServo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lock_status.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(device_status.yfilter)
	|| ydk::is_set(log_level.yfilter)
	|| ydk::is_set(phase_accuracy_last.yfilter)
	|| ydk::is_set(num_sync_timestamp.yfilter)
	|| ydk::is_set(num_delay_timestamp.yfilter)
	|| ydk::is_set(num_set_time.yfilter)
	|| ydk::is_set(num_step_time.yfilter)
	|| ydk::is_set(num_adjust_freq.yfilter)
	|| ydk::is_set(num_adjust_freq_time.yfilter)
	|| ydk::is_set(last_adjust_freq.yfilter)
	|| ydk::is_set(last_step_time.yfilter)
	|| ydk::is_set(num_discard_sync_timestamp.yfilter)
	|| ydk::is_set(num_discard_delay_timestamp.yfilter)
	|| ydk::is_set(flagof_last_set_time.yfilter)
	|| ydk::is_set(offset_from_master.yfilter)
	|| ydk::is_set(mean_path_delay.yfilter)
	|| (last_set_time !=  nullptr && last_set_time->has_operation())
	|| (last_received_t1 !=  nullptr && last_received_t1->has_operation())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_operation())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_operation())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_operation())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_operation())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_operation())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_operation())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_operation());
}

std::string PlatformPtp::PlatformPtpServo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-ptp-servo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_status.is_set || is_set(lock_status.yfilter)) leaf_name_data.push_back(lock_status.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (device_status.is_set || is_set(device_status.yfilter)) leaf_name_data.push_back(device_status.get_name_leafdata());
    if (log_level.is_set || is_set(log_level.yfilter)) leaf_name_data.push_back(log_level.get_name_leafdata());
    if (phase_accuracy_last.is_set || is_set(phase_accuracy_last.yfilter)) leaf_name_data.push_back(phase_accuracy_last.get_name_leafdata());
    if (num_sync_timestamp.is_set || is_set(num_sync_timestamp.yfilter)) leaf_name_data.push_back(num_sync_timestamp.get_name_leafdata());
    if (num_delay_timestamp.is_set || is_set(num_delay_timestamp.yfilter)) leaf_name_data.push_back(num_delay_timestamp.get_name_leafdata());
    if (num_set_time.is_set || is_set(num_set_time.yfilter)) leaf_name_data.push_back(num_set_time.get_name_leafdata());
    if (num_step_time.is_set || is_set(num_step_time.yfilter)) leaf_name_data.push_back(num_step_time.get_name_leafdata());
    if (num_adjust_freq.is_set || is_set(num_adjust_freq.yfilter)) leaf_name_data.push_back(num_adjust_freq.get_name_leafdata());
    if (num_adjust_freq_time.is_set || is_set(num_adjust_freq_time.yfilter)) leaf_name_data.push_back(num_adjust_freq_time.get_name_leafdata());
    if (last_adjust_freq.is_set || is_set(last_adjust_freq.yfilter)) leaf_name_data.push_back(last_adjust_freq.get_name_leafdata());
    if (last_step_time.is_set || is_set(last_step_time.yfilter)) leaf_name_data.push_back(last_step_time.get_name_leafdata());
    if (num_discard_sync_timestamp.is_set || is_set(num_discard_sync_timestamp.yfilter)) leaf_name_data.push_back(num_discard_sync_timestamp.get_name_leafdata());
    if (num_discard_delay_timestamp.is_set || is_set(num_discard_delay_timestamp.yfilter)) leaf_name_data.push_back(num_discard_delay_timestamp.get_name_leafdata());
    if (flagof_last_set_time.is_set || is_set(flagof_last_set_time.yfilter)) leaf_name_data.push_back(flagof_last_set_time.get_name_leafdata());
    if (offset_from_master.is_set || is_set(offset_from_master.yfilter)) leaf_name_data.push_back(offset_from_master.get_name_leafdata());
    if (mean_path_delay.is_set || is_set(mean_path_delay.yfilter)) leaf_name_data.push_back(mean_path_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-set-time")
    {
        if(last_set_time == nullptr)
        {
            last_set_time = std::make_shared<PlatformPtp::PlatformPtpServo::LastSetTime>();
        }
        return last_set_time;
    }

    if(child_yang_name == "last-received-t1")
    {
        if(last_received_t1 == nullptr)
        {
            last_received_t1 = std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT1>();
        }
        return last_received_t1;
    }

    if(child_yang_name == "last-received-t2")
    {
        if(last_received_t2 == nullptr)
        {
            last_received_t2 = std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT2>();
        }
        return last_received_t2;
    }

    if(child_yang_name == "last-received-t3")
    {
        if(last_received_t3 == nullptr)
        {
            last_received_t3 = std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT3>();
        }
        return last_received_t3;
    }

    if(child_yang_name == "last-received-t4")
    {
        if(last_received_t4 == nullptr)
        {
            last_received_t4 = std::make_shared<PlatformPtp::PlatformPtpServo::LastReceivedT4>();
        }
        return last_received_t4;
    }

    if(child_yang_name == "pre-received-t1")
    {
        if(pre_received_t1 == nullptr)
        {
            pre_received_t1 = std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT1>();
        }
        return pre_received_t1;
    }

    if(child_yang_name == "pre-received-t2")
    {
        if(pre_received_t2 == nullptr)
        {
            pre_received_t2 = std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT2>();
        }
        return pre_received_t2;
    }

    if(child_yang_name == "pre-received-t3")
    {
        if(pre_received_t3 == nullptr)
        {
            pre_received_t3 = std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT3>();
        }
        return pre_received_t3;
    }

    if(child_yang_name == "pre-received-t4")
    {
        if(pre_received_t4 == nullptr)
        {
            pre_received_t4 = std::make_shared<PlatformPtp::PlatformPtpServo::PreReceivedT4>();
        }
        return pre_received_t4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_set_time != nullptr)
    {
        children["last-set-time"] = last_set_time;
    }

    if(last_received_t1 != nullptr)
    {
        children["last-received-t1"] = last_received_t1;
    }

    if(last_received_t2 != nullptr)
    {
        children["last-received-t2"] = last_received_t2;
    }

    if(last_received_t3 != nullptr)
    {
        children["last-received-t3"] = last_received_t3;
    }

    if(last_received_t4 != nullptr)
    {
        children["last-received-t4"] = last_received_t4;
    }

    if(pre_received_t1 != nullptr)
    {
        children["pre-received-t1"] = pre_received_t1;
    }

    if(pre_received_t2 != nullptr)
    {
        children["pre-received-t2"] = pre_received_t2;
    }

    if(pre_received_t3 != nullptr)
    {
        children["pre-received-t3"] = pre_received_t3;
    }

    if(pre_received_t4 != nullptr)
    {
        children["pre-received-t4"] = pre_received_t4;
    }

    return children;
}

void PlatformPtp::PlatformPtpServo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lock-status")
    {
        lock_status = value;
        lock_status.value_namespace = name_space;
        lock_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-status")
    {
        device_status = value;
        device_status.value_namespace = name_space;
        device_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-level")
    {
        log_level = value;
        log_level.value_namespace = name_space;
        log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last = value;
        phase_accuracy_last.value_namespace = name_space;
        phase_accuracy_last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp = value;
        num_sync_timestamp.value_namespace = name_space;
        num_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp = value;
        num_delay_timestamp.value_namespace = name_space;
        num_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-set-time")
    {
        num_set_time = value;
        num_set_time.value_namespace = name_space;
        num_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-step-time")
    {
        num_step_time = value;
        num_step_time.value_namespace = name_space;
        num_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq = value;
        num_adjust_freq.value_namespace = name_space;
        num_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time = value;
        num_adjust_freq_time.value_namespace = name_space;
        num_adjust_freq_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq = value;
        last_adjust_freq.value_namespace = name_space;
        last_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-step-time")
    {
        last_step_time = value;
        last_step_time.value_namespace = name_space;
        last_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp = value;
        num_discard_sync_timestamp.value_namespace = name_space;
        num_discard_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp = value;
        num_discard_delay_timestamp.value_namespace = name_space;
        num_discard_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time = value;
        flagof_last_set_time.value_namespace = name_space;
        flagof_last_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master = value;
        offset_from_master.value_namespace = name_space;
        offset_from_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay = value;
        mean_path_delay.value_namespace = name_space;
        mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lock-status")
    {
        lock_status.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "device-status")
    {
        device_status.yfilter = yfilter;
    }
    if(value_path == "log-level")
    {
        log_level.yfilter = yfilter;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last.yfilter = yfilter;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-set-time")
    {
        num_set_time.yfilter = yfilter;
    }
    if(value_path == "num-step-time")
    {
        num_step_time.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time.yfilter = yfilter;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "last-step-time")
    {
        last_step_time.yfilter = yfilter;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time.yfilter = yfilter;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master.yfilter = yfilter;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-set-time" || name == "last-received-t1" || name == "last-received-t2" || name == "last-received-t3" || name == "last-received-t4" || name == "pre-received-t1" || name == "pre-received-t2" || name == "pre-received-t3" || name == "pre-received-t4" || name == "lock-status" || name == "running" || name == "device-status" || name == "log-level" || name == "phase-accuracy-last" || name == "num-sync-timestamp" || name == "num-delay-timestamp" || name == "num-set-time" || name == "num-step-time" || name == "num-adjust-freq" || name == "num-adjust-freq-time" || name == "last-adjust-freq" || name == "last-step-time" || name == "num-discard-sync-timestamp" || name == "num-discard-delay-timestamp" || name == "flagof-last-set-time" || name == "offset-from-master" || name == "mean-path-delay")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::LastSetTime::LastSetTime()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-set-time"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::LastSetTime::~LastSetTime()
{
}

bool PlatformPtp::PlatformPtpServo::LastSetTime::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::LastSetTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::LastSetTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::LastSetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-set-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::LastSetTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::LastSetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::LastSetTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::LastSetTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::LastSetTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::LastSetTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT1::LastReceivedT1()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t1"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT1::~LastReceivedT1()
{
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT1::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::LastReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::LastReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::LastReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::LastReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::LastReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT2::LastReceivedT2()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t2"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT2::~LastReceivedT2()
{
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT2::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::LastReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::LastReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::LastReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::LastReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::LastReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT3::LastReceivedT3()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t3"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT3::~LastReceivedT3()
{
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT3::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::LastReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::LastReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::LastReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::LastReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::LastReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT4::LastReceivedT4()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t4"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::LastReceivedT4::~LastReceivedT4()
{
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT4::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::LastReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::LastReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::LastReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::LastReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::LastReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::LastReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::LastReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT1::PreReceivedT1()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t1"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT1::~PreReceivedT1()
{
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT1::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::PreReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::PreReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::PreReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::PreReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::PreReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT2::PreReceivedT2()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t2"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT2::~PreReceivedT2()
{
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT2::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::PreReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::PreReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::PreReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::PreReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::PreReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT3::PreReceivedT3()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t3"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT3::~PreReceivedT3()
{
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT3::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::PreReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::PreReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::PreReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::PreReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::PreReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT4::PreReceivedT4()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t4"; yang_parent_name = "platform-ptp-servo"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformPtp::PlatformPtpServo::PreReceivedT4::~PreReceivedT4()
{
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT4::has_data() const
{
    return second.is_set
	|| nano_second.is_set;
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-oper:platform-ptp/platform-ptp-servo/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformPtp::PlatformPtpServo::PreReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformPtp::PlatformPtpServo::PreReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformPtp::PlatformPtpServo::PreReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformPtp::PlatformPtpServo::PreReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformPtp::PlatformPtpServo::PreReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformPtp::PlatformPtpServo::PreReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool PlatformPtp::PlatformPtpServo::PreReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}


}
}

