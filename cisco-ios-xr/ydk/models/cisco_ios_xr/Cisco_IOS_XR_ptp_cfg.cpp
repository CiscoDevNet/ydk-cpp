
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ptp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_cfg {

Ptp::Ptp()
    :
    enable{YType::empty, "enable"},
    frequency_priority{YType::uint32, "frequency-priority"},
    min_clock_class{YType::uint32, "min-clock-class"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    uncalibrated_clock_class{YType::uint32, "uncalibrated-clock-class"}
    	,
    clock_(std::make_shared<Ptp::Clock_>())
	,logging(std::make_shared<Ptp::Logging>())
	,profiles(std::make_shared<Ptp::Profiles>())
	,transparent_clock(std::make_shared<Ptp::TransparentClock>())
{
    clock_->parent = this;
    logging->parent = this;
    profiles->parent = this;
    transparent_clock->parent = this;

    yang_name = "ptp"; yang_parent_name = "Cisco-IOS-XR-ptp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ptp::~Ptp()
{
}

bool Ptp::has_data() const
{
    return enable.is_set
	|| frequency_priority.is_set
	|| min_clock_class.is_set
	|| time_of_day_priority.is_set
	|| uncalibrated_clock_class.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (transparent_clock !=  nullptr && transparent_clock->has_data());
}

bool Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(min_clock_class.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(uncalibrated_clock_class.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (transparent_clock !=  nullptr && transparent_clock->has_operation());
}

std::string Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (min_clock_class.is_set || is_set(min_clock_class.yfilter)) leaf_name_data.push_back(min_clock_class.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (uncalibrated_clock_class.is_set || is_set(uncalibrated_clock_class.yfilter)) leaf_name_data.push_back(uncalibrated_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Ptp::Clock_>();
        }
        return clock_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Ptp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ptp::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "transparent-clock")
    {
        if(transparent_clock == nullptr)
        {
            transparent_clock = std::make_shared<Ptp::TransparentClock>();
        }
        return transparent_clock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(transparent_clock != nullptr)
    {
        children["transparent-clock"] = transparent_clock;
    }

    return children;
}

void Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class = value;
        min_clock_class.value_namespace = name_space;
        min_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncalibrated-clock-class")
    {
        uncalibrated_clock_class = value;
        uncalibrated_clock_class.value_namespace = name_space;
        uncalibrated_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "uncalibrated-clock-class")
    {
        uncalibrated_clock_class.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ptp::clone_ptr() const
{
    return std::make_shared<Ptp>();
}

std::string Ptp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ptp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ptp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ptp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "logging" || name == "profiles" || name == "transparent-clock" || name == "enable" || name == "frequency-priority" || name == "min-clock-class" || name == "time-of-day-priority" || name == "uncalibrated-clock-class")
        return true;
    return false;
}

Ptp::Clock_::Clock_()
    :
    clock_class{YType::uint32, "clock-class"},
    domain{YType::uint32, "domain"},
    priority1{YType::uint32, "priority1"},
    priority2{YType::uint32, "priority2"},
    time_source{YType::enumeration, "time-source"},
    timescale{YType::enumeration, "timescale"}
    	,
    identity(std::make_shared<Ptp::Clock_::Identity>())
	,profile(std::make_shared<Ptp::Clock_::Profile>())
{
    identity->parent = this;
    profile->parent = this;

    yang_name = "clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Clock_::~Clock_()
{
}

bool Ptp::Clock_::has_data() const
{
    return clock_class.is_set
	|| domain.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| time_source.is_set
	|| timescale.is_set
	|| (identity !=  nullptr && identity->has_data())
	|| (profile !=  nullptr && profile->has_data());
}

bool Ptp::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (identity !=  nullptr && identity->has_operation())
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Ptp::Clock_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Ptp::Clock_::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Ptp::Clock_::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Ptp::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "profile" || name == "clock-class" || name == "domain" || name == "priority1" || name == "priority2" || name == "time-source" || name == "timescale")
        return true;
    return false;
}

Ptp::Clock_::Identity::Identity()
    :
    clock_id_type{YType::enumeration, "clock-id-type"},
    eui{YType::str, "eui"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "identity"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Clock_::Identity::~Identity()
{
}

bool Ptp::Clock_::Identity::has_data() const
{
    return clock_id_type.is_set
	|| eui.is_set
	|| mac_address.is_set;
}

bool Ptp::Clock_::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id_type.yfilter)
	|| ydk::is_set(eui.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Ptp::Clock_::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock_::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock_::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id_type.is_set || is_set(clock_id_type.yfilter)) leaf_name_data.push_back(clock_id_type.get_name_leafdata());
    if (eui.is_set || is_set(eui.yfilter)) leaf_name_data.push_back(eui.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Clock_::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Clock_::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Clock_::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id-type")
    {
        clock_id_type = value;
        clock_id_type.value_namespace = name_space;
        clock_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui")
    {
        eui = value;
        eui.value_namespace = name_space;
        eui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Clock_::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id-type")
    {
        clock_id_type.yfilter = yfilter;
    }
    if(value_path == "eui")
    {
        eui.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Ptp::Clock_::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id-type" || name == "eui" || name == "mac-address")
        return true;
    return false;
}

Ptp::Clock_::Profile::Profile()
    :
    clock_profile{YType::enumeration, "clock-profile"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"}
{

    yang_name = "profile"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Clock_::Profile::~Profile()
{
}

bool Ptp::Clock_::Profile::has_data() const
{
    return clock_profile.is_set
	|| telecom_clock_type.is_set;
}

bool Ptp::Clock_::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter);
}

std::string Ptp::Clock_::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock_::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock_::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Clock_::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Clock_::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Clock_::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-profile")
    {
        clock_profile = value;
        clock_profile.value_namespace = name_space;
        clock_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type = value;
        telecom_clock_type.value_namespace = name_space;
        telecom_clock_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Clock_::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-profile")
    {
        clock_profile.yfilter = yfilter;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type.yfilter = yfilter;
    }
}

bool Ptp::Clock_::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-profile" || name == "telecom-clock-type")
        return true;
    return false;
}

Ptp::Logging::Logging()
    :
    best_master_clock(std::make_shared<Ptp::Logging::BestMasterClock>())
	,servo(std::make_shared<Ptp::Logging::Servo>())
{
    best_master_clock->parent = this;
    servo->parent = this;

    yang_name = "logging"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Logging::~Logging()
{
}

bool Ptp::Logging::has_data() const
{
    return (best_master_clock !=  nullptr && best_master_clock->has_data())
	|| (servo !=  nullptr && servo->has_data());
}

bool Ptp::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (best_master_clock !=  nullptr && best_master_clock->has_operation())
	|| (servo !=  nullptr && servo->has_operation());
}

std::string Ptp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-master-clock")
    {
        if(best_master_clock == nullptr)
        {
            best_master_clock = std::make_shared<Ptp::Logging::BestMasterClock>();
        }
        return best_master_clock;
    }

    if(child_yang_name == "servo")
    {
        if(servo == nullptr)
        {
            servo = std::make_shared<Ptp::Logging::Servo>();
        }
        return servo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best_master_clock != nullptr)
    {
        children["best-master-clock"] = best_master_clock;
    }

    if(servo != nullptr)
    {
        children["servo"] = servo;
    }

    return children;
}

void Ptp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-master-clock" || name == "servo")
        return true;
    return false;
}

Ptp::Logging::BestMasterClock::BestMasterClock()
    :
    changes{YType::empty, "changes"}
{

    yang_name = "best-master-clock"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Logging::BestMasterClock::~BestMasterClock()
{
}

bool Ptp::Logging::BestMasterClock::has_data() const
{
    return changes.is_set;
}

bool Ptp::Logging::BestMasterClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(changes.yfilter);
}

std::string Ptp::Logging::BestMasterClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Logging::BestMasterClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-master-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Logging::BestMasterClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (changes.is_set || is_set(changes.yfilter)) leaf_name_data.push_back(changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Logging::BestMasterClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Logging::BestMasterClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Logging::BestMasterClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "changes")
    {
        changes = value;
        changes.value_namespace = name_space;
        changes.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Logging::BestMasterClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "changes")
    {
        changes.yfilter = yfilter;
    }
}

bool Ptp::Logging::BestMasterClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "changes")
        return true;
    return false;
}

Ptp::Logging::Servo::Servo()
    :
    events{YType::empty, "events"}
{

    yang_name = "servo"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Logging::Servo::~Servo()
{
}

bool Ptp::Logging::Servo::has_data() const
{
    return events.is_set;
}

bool Ptp::Logging::Servo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events.yfilter);
}

std::string Ptp::Logging::Servo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Logging::Servo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-ptp-pd-cfg:servo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Logging::Servo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Logging::Servo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Logging::Servo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Logging::Servo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Logging::Servo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
}

bool Ptp::Logging::Servo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Ptp::Profiles::Profiles()
{

    yang_name = "profiles"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Profiles::~Profiles()
{
}

bool Ptp::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Profiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Ptp::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    announce_timeout{YType::uint32, "announce-timeout"},
    clock_operation{YType::enumeration, "clock-operation"},
    cos{YType::uint32, "cos"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    dscp{YType::uint32, "dscp"},
    event_cos{YType::uint32, "event-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_cos{YType::uint32, "general-cos"},
    general_dscp{YType::uint32, "general-dscp"},
    port_state{YType::enumeration, "port-state"},
    sync_grant_duration{YType::uint32, "sync-grant-duration"},
    sync_timeout{YType::uint32, "sync-timeout"},
    transport{YType::enumeration, "transport"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"}
    	,
    announce_interval(std::make_shared<Ptp::Profiles::Profile::AnnounceInterval>())
	,communication(std::make_shared<Ptp::Profiles::Profile::Communication>())
	,delay_request_minimum_interval(std::make_shared<Ptp::Profiles::Profile::DelayRequestMinimumInterval>())
	,masters(std::make_shared<Ptp::Profiles::Profile::Masters>())
	,slaves(std::make_shared<Ptp::Profiles::Profile::Slaves>())
	,source_ipv4_address(std::make_shared<Ptp::Profiles::Profile::SourceIpv4Address>())
	,source_ipv6_address(std::make_shared<Ptp::Profiles::Profile::SourceIpv6Address>())
	,sync_interval(std::make_shared<Ptp::Profiles::Profile::SyncInterval>())
{
    announce_interval->parent = this;
    communication->parent = this;
    delay_request_minimum_interval->parent = this;
    masters->parent = this;
    slaves->parent = this;
    source_ipv4_address->parent = this;
    source_ipv6_address->parent = this;
    sync_interval->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Profiles::Profile::~Profile()
{
}

bool Ptp::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| announce_grant_duration.is_set
	|| announce_timeout.is_set
	|| clock_operation.is_set
	|| cos.is_set
	|| delay_response_grant_duration.is_set
	|| delay_response_timeout.is_set
	|| dscp.is_set
	|| event_cos.is_set
	|| event_dscp.is_set
	|| general_cos.is_set
	|| general_dscp.is_set
	|| port_state.is_set
	|| sync_grant_duration.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| unicast_grant_invalid_request.is_set
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (communication !=  nullptr && communication->has_data())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_data())
	|| (masters !=  nullptr && masters->has_data())
	|| (slaves !=  nullptr && slaves->has_data())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_data())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data())
	|| (sync_interval !=  nullptr && sync_interval->has_data());
}

bool Ptp::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(sync_grant_duration.yfilter)
	|| ydk::is_set(sync_timeout.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (communication !=  nullptr && communication->has_operation())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_operation())
	|| (masters !=  nullptr && masters->has_operation())
	|| (slaves !=  nullptr && slaves->has_operation())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_operation())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation())
	|| (sync_interval !=  nullptr && sync_interval->has_operation());
}

std::string Ptp::Profiles::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/profiles/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (sync_grant_duration.is_set || is_set(sync_grant_duration.yfilter)) leaf_name_data.push_back(sync_grant_duration.get_name_leafdata());
    if (sync_timeout.is_set || is_set(sync_timeout.yfilter)) leaf_name_data.push_back(sync_timeout.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-interval")
    {
        if(announce_interval == nullptr)
        {
            announce_interval = std::make_shared<Ptp::Profiles::Profile::AnnounceInterval>();
        }
        return announce_interval;
    }

    if(child_yang_name == "communication")
    {
        if(communication == nullptr)
        {
            communication = std::make_shared<Ptp::Profiles::Profile::Communication>();
        }
        return communication;
    }

    if(child_yang_name == "delay-request-minimum-interval")
    {
        if(delay_request_minimum_interval == nullptr)
        {
            delay_request_minimum_interval = std::make_shared<Ptp::Profiles::Profile::DelayRequestMinimumInterval>();
        }
        return delay_request_minimum_interval;
    }

    if(child_yang_name == "masters")
    {
        if(masters == nullptr)
        {
            masters = std::make_shared<Ptp::Profiles::Profile::Masters>();
        }
        return masters;
    }

    if(child_yang_name == "slaves")
    {
        if(slaves == nullptr)
        {
            slaves = std::make_shared<Ptp::Profiles::Profile::Slaves>();
        }
        return slaves;
    }

    if(child_yang_name == "source-ipv4-address")
    {
        if(source_ipv4_address == nullptr)
        {
            source_ipv4_address = std::make_shared<Ptp::Profiles::Profile::SourceIpv4Address>();
        }
        return source_ipv4_address;
    }

    if(child_yang_name == "source-ipv6-address")
    {
        if(source_ipv6_address == nullptr)
        {
            source_ipv6_address = std::make_shared<Ptp::Profiles::Profile::SourceIpv6Address>();
        }
        return source_ipv6_address;
    }

    if(child_yang_name == "sync-interval")
    {
        if(sync_interval == nullptr)
        {
            sync_interval = std::make_shared<Ptp::Profiles::Profile::SyncInterval>();
        }
        return sync_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(announce_interval != nullptr)
    {
        children["announce-interval"] = announce_interval;
    }

    if(communication != nullptr)
    {
        children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    if(masters != nullptr)
    {
        children["masters"] = masters;
    }

    if(slaves != nullptr)
    {
        children["slaves"] = slaves;
    }

    if(source_ipv4_address != nullptr)
    {
        children["source-ipv4-address"] = source_ipv4_address;
    }

    if(source_ipv6_address != nullptr)
    {
        children["source-ipv6-address"] = source_ipv6_address;
    }

    if(sync_interval != nullptr)
    {
        children["sync-interval"] = sync_interval;
    }

    return children;
}

void Ptp::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration = value;
        announce_grant_duration.value_namespace = name_space;
        announce_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-operation")
    {
        clock_operation = value;
        clock_operation.value_namespace = name_space;
        clock_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration = value;
        delay_response_grant_duration.value_namespace = name_space;
        delay_response_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout = value;
        delay_response_timeout.value_namespace = name_space;
        delay_response_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration = value;
        sync_grant_duration.value_namespace = name_space;
        sync_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout = value;
        sync_timeout.value_namespace = name_space;
        sync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request = value;
        unicast_grant_invalid_request.value_namespace = name_space;
        unicast_grant_invalid_request.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "clock-operation")
    {
        clock_operation.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration.yfilter = yfilter;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration.yfilter = yfilter;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-interval" || name == "communication" || name == "delay-request-minimum-interval" || name == "masters" || name == "slaves" || name == "source-ipv4-address" || name == "source-ipv6-address" || name == "sync-interval" || name == "profile-name" || name == "announce-grant-duration" || name == "announce-timeout" || name == "clock-operation" || name == "cos" || name == "delay-response-grant-duration" || name == "delay-response-timeout" || name == "dscp" || name == "event-cos" || name == "event-dscp" || name == "general-cos" || name == "general-dscp" || name == "port-state" || name == "sync-grant-duration" || name == "sync-timeout" || name == "transport" || name == "unicast-grant-invalid-request")
        return true;
    return false;
}

Ptp::Profiles::Profile::AnnounceInterval::AnnounceInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "announce-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::AnnounceInterval::~AnnounceInterval()
{
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string Ptp::Profiles::Profile::AnnounceInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::AnnounceInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::AnnounceInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::AnnounceInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

Ptp::Profiles::Profile::Communication::Communication()
    :
    model{YType::enumeration, "model"},
    target_address{YType::str, "target-address"},
    target_address_set{YType::boolean, "target-address-set"}
{

    yang_name = "communication"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Communication::~Communication()
{
}

bool Ptp::Profiles::Profile::Communication::has_data() const
{
    return model.is_set
	|| target_address.is_set
	|| target_address_set.is_set;
}

bool Ptp::Profiles::Profile::Communication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_address_set.yfilter);
}

std::string Ptp::Profiles::Profile::Communication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Communication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_address_set.is_set || is_set(target_address_set.yfilter)) leaf_name_data.push_back(target_address_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-set")
    {
        target_address_set = value;
        target_address_set.value_namespace = name_space;
        target_address_set.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-address-set")
    {
        target_address_set.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model" || name == "target-address" || name == "target-address-set")
        return true;
    return false;
}

Ptp::Profiles::Profile::DelayRequestMinimumInterval::DelayRequestMinimumInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "delay-request-minimum-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::DelayRequestMinimumInterval::~DelayRequestMinimumInterval()
{
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-request-minimum-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::DelayRequestMinimumInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::DelayRequestMinimumInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Masters()
{

    yang_name = "masters"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::~Masters()
{
}

bool Ptp::Profiles::Profile::Masters::has_data() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Profiles::Profile::Masters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        for(auto const & c : master)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Masters::Master>();
        c->parent = this;
        master.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : master)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Profiles::Profile::Masters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Profiles::Profile::Masters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Profiles::Profile::Masters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Master()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::Master::~Master()
{
}

bool Ptp::Profiles::Profile::Masters::Master::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool Ptp::Profiles::Profile::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string Ptp::Profiles::Profile::Masters::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Profiles::Profile::Masters::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::Ethernet()
    :
    master_mac_address{YType::str, "master-mac-address"},
    communication{YType::enumeration, "communication"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ethernet"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::~Ethernet()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::has_data() const
{
    return master_mac_address.is_set
	|| communication.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_mac_address.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string Ptp::Profiles::Profile::Masters::Master::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[master-mac-address='" <<master_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_mac_address.is_set || is_set(master_mac_address.yfilter)) leaf_name_data.push_back(master_mac_address.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address = value;
        master_mac_address.value_namespace = name_space;
        master_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-mac-address" || name == "communication" || name == "master-clock-class" || name == "non-negotiated" || name == "priority")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    master_ip_address{YType::str, "master-ip-address"},
    communication{YType::enumeration, "communication"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::has_data() const
{
    return master_ip_address.is_set
	|| communication.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[master-ip-address='" <<master_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-ip-address" || name == "communication" || name == "master-clock-class" || name == "non-negotiated" || name == "priority")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

Ptp::Profiles::Profile::Slaves::Slaves()
{

    yang_name = "slaves"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Slaves::~Slaves()
{
}

bool Ptp::Profiles::Profile::Slaves::has_data() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Profiles::Profile::Slaves::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaves";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave>();
        c->parent = this;
        slave.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Profiles::Profile::Slaves::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Profiles::Profile::Slaves::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Profiles::Profile::Slaves::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave")
        return true;
    return false;
}

Ptp::Profiles::Profile::Slaves::Slave::Slave()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Slaves::Slave::~Slave()
{
}

bool Ptp::Profiles::Profile::Slaves::Slave::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool Ptp::Profiles::Profile::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string Ptp::Profiles::Profile::Slaves::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Profiles::Profile::Slaves::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Slaves::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Slaves::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

Ptp::Profiles::Profile::Slaves::Slave::Ethernet::Ethernet()
    :
    slave_mac_address{YType::str, "slave-mac-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ethernet"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Slaves::Slave::Ethernet::~Ethernet()
{
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ethernet::has_data() const
{
    return slave_mac_address.is_set
	|| non_negotiated.is_set;
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_mac_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[slave-mac-address='" <<slave_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::Slaves::Slave::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address = value;
        slave_mac_address.value_namespace = name_space;
        slave_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Slaves::Slave::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-mac-address" || name == "non-negotiated")
        return true;
    return false;
}

Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    slave_ip_address{YType::str, "slave-ip-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::has_data() const
{
    return slave_ip_address.is_set
	|| non_negotiated.is_set;
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_ip_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[slave-ip-address='" <<slave_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address = value;
        slave_ip_address.value_namespace = name_space;
        slave_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-ip-address" || name == "non-negotiated")
        return true;
    return false;
}

Ptp::Profiles::Profile::SourceIpv4Address::SourceIpv4Address()
    :
    enable{YType::boolean, "enable"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "source-ipv4-address"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::SourceIpv4Address::~SourceIpv4Address()
{
}

bool Ptp::Profiles::Profile::SourceIpv4Address::has_data() const
{
    return enable.is_set
	|| source_ip.is_set;
}

bool Ptp::Profiles::Profile::SourceIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Ptp::Profiles::Profile::SourceIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::SourceIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::SourceIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::SourceIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::SourceIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ip")
        return true;
    return false;
}

Ptp::Profiles::Profile::SourceIpv6Address::SourceIpv6Address()
    :
    enable{YType::boolean, "enable"},
    source_ipv6{YType::str, "source-ipv6"}
{

    yang_name = "source-ipv6-address"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::SourceIpv6Address::~SourceIpv6Address()
{
}

bool Ptp::Profiles::Profile::SourceIpv6Address::has_data() const
{
    return enable.is_set
	|| source_ipv6.is_set;
}

bool Ptp::Profiles::Profile::SourceIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ipv6.yfilter);
}

std::string Ptp::Profiles::Profile::SourceIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::SourceIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ipv6.is_set || is_set(source_ipv6.yfilter)) leaf_name_data.push_back(source_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::SourceIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6 = value;
        source_ipv6.value_namespace = name_space;
        source_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::SourceIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::SourceIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ipv6")
        return true;
    return false;
}

Ptp::Profiles::Profile::SyncInterval::SyncInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "sync-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Profiles::Profile::SyncInterval::~SyncInterval()
{
}

bool Ptp::Profiles::Profile::SyncInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool Ptp::Profiles::Profile::SyncInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string Ptp::Profiles::Profile::SyncInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::SyncInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Profiles::Profile::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Profiles::Profile::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Profiles::Profile::SyncInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::SyncInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::SyncInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

Ptp::TransparentClock::TransparentClock()
    :
    domains(std::make_shared<Ptp::TransparentClock::Domains>())
{
    domains->parent = this;

    yang_name = "transparent-clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::TransparentClock::~TransparentClock()
{
}

bool Ptp::TransparentClock::has_data() const
{
    return (domains !=  nullptr && domains->has_data());
}

bool Ptp::TransparentClock::has_operation() const
{
    return is_set(yfilter)
	|| (domains !=  nullptr && domains->has_operation());
}

std::string Ptp::TransparentClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::TransparentClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transparent-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::TransparentClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::TransparentClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<Ptp::TransparentClock::Domains>();
        }
        return domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::TransparentClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domains != nullptr)
    {
        children["domains"] = domains;
    }

    return children;
}

void Ptp::TransparentClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::TransparentClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::TransparentClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domains")
        return true;
    return false;
}

Ptp::TransparentClock::Domains::Domains()
{

    yang_name = "domains"; yang_parent_name = "transparent-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::TransparentClock::Domains::~Domains()
{
}

bool Ptp::TransparentClock::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::TransparentClock::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::TransparentClock::Domains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/transparent-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::TransparentClock::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::TransparentClock::Domains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::TransparentClock::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::TransparentClock::Domains::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::TransparentClock::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::TransparentClock::Domains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::TransparentClock::Domains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::TransparentClock::Domains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Ptp::TransparentClock::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
{

    yang_name = "domain"; yang_parent_name = "domains"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::TransparentClock::Domains::Domain::~Domain()
{
}

bool Ptp::TransparentClock::Domains::Domain::has_data() const
{
    return domain.is_set;
}

bool Ptp::TransparentClock::Domains::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Ptp::TransparentClock::Domains::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/transparent-clock/domains/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::TransparentClock::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::TransparentClock::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::TransparentClock::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::TransparentClock::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::TransparentClock::Domains::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::TransparentClock::Domains::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Ptp::TransparentClock::Domains::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}


}
}

