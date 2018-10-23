
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
    uncalibrated_clock_class{YType::uint32, "uncalibrated-clock-class"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    frequency_priority{YType::uint32, "frequency-priority"},
    startup_clock_class{YType::uint32, "startup-clock-class"},
    enable{YType::empty, "enable"},
    min_clock_class{YType::uint32, "min-clock-class"},
    physical_layer_frequency{YType::empty, "physical-layer-frequency"},
    freerun_clock_class{YType::uint32, "freerun-clock-class"}
        ,
    clock_(std::make_shared<Ptp::Clock>())
    , profiles(std::make_shared<Ptp::Profiles>())
    , utc_offset(std::make_shared<Ptp::UtcOffset>())
    , logging(std::make_shared<Ptp::Logging>())
    , uncalibrated_clock_class2(nullptr) // presence node
    , transparent_clock(std::make_shared<Ptp::TransparentClock>())
    , virtual_port(std::make_shared<Ptp::VirtualPort>())
{
    clock_->parent = this;
    profiles->parent = this;
    utc_offset->parent = this;
    logging->parent = this;
    transparent_clock->parent = this;
    virtual_port->parent = this;

    yang_name = "ptp"; yang_parent_name = "Cisco-IOS-XR-ptp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ptp::~Ptp()
{
}

bool Ptp::has_data() const
{
    if (is_presence_container) return true;
    return uncalibrated_clock_class.is_set
	|| time_of_day_priority.is_set
	|| frequency_priority.is_set
	|| startup_clock_class.is_set
	|| enable.is_set
	|| min_clock_class.is_set
	|| physical_layer_frequency.is_set
	|| freerun_clock_class.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (uncalibrated_clock_class2 !=  nullptr && uncalibrated_clock_class2->has_data())
	|| (transparent_clock !=  nullptr && transparent_clock->has_data())
	|| (virtual_port !=  nullptr && virtual_port->has_data());
}

bool Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uncalibrated_clock_class.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(startup_clock_class.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(min_clock_class.yfilter)
	|| ydk::is_set(physical_layer_frequency.yfilter)
	|| ydk::is_set(freerun_clock_class.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (uncalibrated_clock_class2 !=  nullptr && uncalibrated_clock_class2->has_operation())
	|| (transparent_clock !=  nullptr && transparent_clock->has_operation())
	|| (virtual_port !=  nullptr && virtual_port->has_operation());
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

    if (uncalibrated_clock_class.is_set || is_set(uncalibrated_clock_class.yfilter)) leaf_name_data.push_back(uncalibrated_clock_class.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (startup_clock_class.is_set || is_set(startup_clock_class.yfilter)) leaf_name_data.push_back(startup_clock_class.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (min_clock_class.is_set || is_set(min_clock_class.yfilter)) leaf_name_data.push_back(min_clock_class.get_name_leafdata());
    if (physical_layer_frequency.is_set || is_set(physical_layer_frequency.yfilter)) leaf_name_data.push_back(physical_layer_frequency.get_name_leafdata());
    if (freerun_clock_class.is_set || is_set(freerun_clock_class.yfilter)) leaf_name_data.push_back(freerun_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Ptp::Clock>();
        }
        return clock_;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ptp::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Ptp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "uncalibrated-clock-class2")
    {
        if(uncalibrated_clock_class2 == nullptr)
        {
            uncalibrated_clock_class2 = std::make_shared<Ptp::UncalibratedClockClass2>();
        }
        return uncalibrated_clock_class2;
    }

    if(child_yang_name == "transparent-clock")
    {
        if(transparent_clock == nullptr)
        {
            transparent_clock = std::make_shared<Ptp::TransparentClock>();
        }
        return transparent_clock;
    }

    if(child_yang_name == "virtual-port")
    {
        if(virtual_port == nullptr)
        {
            virtual_port = std::make_shared<Ptp::VirtualPort>();
        }
        return virtual_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    if(profiles != nullptr)
    {
        _children["profiles"] = profiles;
    }

    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(uncalibrated_clock_class2 != nullptr)
    {
        _children["uncalibrated-clock-class2"] = uncalibrated_clock_class2;
    }

    if(transparent_clock != nullptr)
    {
        _children["transparent-clock"] = transparent_clock;
    }

    if(virtual_port != nullptr)
    {
        _children["virtual-port"] = virtual_port;
    }

    return _children;
}

void Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uncalibrated-clock-class")
    {
        uncalibrated_clock_class = value;
        uncalibrated_clock_class.value_namespace = name_space;
        uncalibrated_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-clock-class")
    {
        startup_clock_class = value;
        startup_clock_class.value_namespace = name_space;
        startup_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class = value;
        min_clock_class.value_namespace = name_space;
        min_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-frequency")
    {
        physical_layer_frequency = value;
        physical_layer_frequency.value_namespace = name_space;
        physical_layer_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freerun-clock-class")
    {
        freerun_clock_class = value;
        freerun_clock_class.value_namespace = name_space;
        freerun_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uncalibrated-clock-class")
    {
        uncalibrated_clock_class.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "startup-clock-class")
    {
        startup_clock_class.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class.yfilter = yfilter;
    }
    if(value_path == "physical-layer-frequency")
    {
        physical_layer_frequency.yfilter = yfilter;
    }
    if(value_path == "freerun-clock-class")
    {
        freerun_clock_class.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Ptp::clone_ptr() const
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
    if(name == "clock" || name == "profiles" || name == "utc-offset" || name == "logging" || name == "uncalibrated-clock-class2" || name == "transparent-clock" || name == "virtual-port" || name == "uncalibrated-clock-class" || name == "time-of-day-priority" || name == "frequency-priority" || name == "startup-clock-class" || name == "enable" || name == "min-clock-class" || name == "physical-layer-frequency" || name == "freerun-clock-class")
        return true;
    return false;
}

Ptp::Clock::Clock()
    :
    timescale{YType::enumeration, "timescale"},
    domain{YType::uint32, "domain"},
    priority2{YType::uint32, "priority2"},
    time_source{YType::enumeration, "time-source"},
    priority1{YType::uint32, "priority1"},
    clock_class{YType::uint32, "clock-class"}
        ,
    profile(std::make_shared<Ptp::Clock::Profile>())
    , identity(std::make_shared<Ptp::Clock::Identity>())
{
    profile->parent = this;
    identity->parent = this;

    yang_name = "clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Clock::~Clock()
{
}

bool Ptp::Clock::has_data() const
{
    if (is_presence_container) return true;
    return timescale.is_set
	|| domain.is_set
	|| priority2.is_set
	|| time_source.is_set
	|| priority1.is_set
	|| clock_class.is_set
	|| (profile !=  nullptr && profile->has_data())
	|| (identity !=  nullptr && identity->has_data());
}

bool Ptp::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(clock_class.yfilter)
	|| (profile !=  nullptr && profile->has_operation())
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Ptp::Clock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Ptp::Clock::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Ptp::Clock::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    return _children;
}

void Ptp::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
}

bool Ptp::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "identity" || name == "timescale" || name == "domain" || name == "priority2" || name == "time-source" || name == "priority1" || name == "clock-class")
        return true;
    return false;
}

Ptp::Clock::Profile::Profile()
    :
    clock_profile{YType::enumeration, "clock-profile"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"}
{

    yang_name = "profile"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Clock::Profile::~Profile()
{
}

bool Ptp::Clock::Profile::has_data() const
{
    if (is_presence_container) return true;
    return clock_profile.is_set
	|| telecom_clock_type.is_set;
}

bool Ptp::Clock::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter);
}

std::string Ptp::Clock::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Clock::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Clock::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Clock::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ptp::Clock::Profile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ptp::Clock::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-profile" || name == "telecom-clock-type")
        return true;
    return false;
}

Ptp::Clock::Identity::Identity()
    :
    clock_id_type{YType::enumeration, "clock-id-type"},
    mac_address{YType::str, "mac-address"},
    eui{YType::str, "eui"}
{

    yang_name = "identity"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Clock::Identity::~Identity()
{
}

bool Ptp::Clock::Identity::has_data() const
{
    if (is_presence_container) return true;
    return clock_id_type.is_set
	|| mac_address.is_set
	|| eui.is_set;
}

bool Ptp::Clock::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id_type.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(eui.yfilter);
}

std::string Ptp::Clock::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Clock::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Clock::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id_type.is_set || is_set(clock_id_type.yfilter)) leaf_name_data.push_back(clock_id_type.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (eui.is_set || is_set(eui.yfilter)) leaf_name_data.push_back(eui.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Clock::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Clock::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Clock::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id-type")
    {
        clock_id_type = value;
        clock_id_type.value_namespace = name_space;
        clock_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui")
    {
        eui = value;
        eui.value_namespace = name_space;
        eui.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Clock::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id-type")
    {
        clock_id_type.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "eui")
    {
        eui.yfilter = yfilter;
    }
}

bool Ptp::Clock::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id-type" || name == "mac-address" || name == "eui")
        return true;
    return false;
}

Ptp::Profiles::Profiles()
    :
    profile(this, {"profile_name"})
{

    yang_name = "profiles"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Profiles::~Profiles()
{
}

bool Ptp::Profiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sync_grant_duration{YType::uint32, "sync-grant-duration"},
    general_cos{YType::uint32, "general-cos"},
    sync_timeout{YType::uint32, "sync-timeout"},
    transport{YType::enumeration, "transport"},
    announce_timeout{YType::uint32, "announce-timeout"},
    cos{YType::uint32, "cos"},
    ipv4ttl{YType::uint32, "ipv4ttl"},
    port_state{YType::enumeration, "port-state"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    event_cos{YType::uint32, "event-cos"},
    dscp{YType::uint32, "dscp"},
    ipv6_hop_limit{YType::uint32, "ipv6-hop-limit"},
    general_dscp{YType::uint32, "general-dscp"},
    clock_operation{YType::enumeration, "clock-operation"},
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"},
    event_dscp{YType::uint32, "event-dscp"}
        ,
    announce_interval(std::make_shared<Ptp::Profiles::Profile::AnnounceInterval>())
    , interop(std::make_shared<Ptp::Profiles::Profile::Interop>())
    , source_ipv4_address(std::make_shared<Ptp::Profiles::Profile::SourceIpv4Address>())
    , slaves(std::make_shared<Ptp::Profiles::Profile::Slaves>())
    , sync_interval(std::make_shared<Ptp::Profiles::Profile::SyncInterval>())
    , masters(std::make_shared<Ptp::Profiles::Profile::Masters>())
    , communication(std::make_shared<Ptp::Profiles::Profile::Communication>())
    , delay_request_minimum_interval(std::make_shared<Ptp::Profiles::Profile::DelayRequestMinimumInterval>())
    , source_ipv6_address(std::make_shared<Ptp::Profiles::Profile::SourceIpv6Address>())
{
    announce_interval->parent = this;
    interop->parent = this;
    source_ipv4_address->parent = this;
    slaves->parent = this;
    sync_interval->parent = this;
    masters->parent = this;
    communication->parent = this;
    delay_request_minimum_interval->parent = this;
    source_ipv6_address->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Profiles::Profile::~Profile()
{
}

bool Ptp::Profiles::Profile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| sync_grant_duration.is_set
	|| general_cos.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| announce_timeout.is_set
	|| cos.is_set
	|| ipv4ttl.is_set
	|| port_state.is_set
	|| delay_response_timeout.is_set
	|| delay_response_grant_duration.is_set
	|| event_cos.is_set
	|| dscp.is_set
	|| ipv6_hop_limit.is_set
	|| general_dscp.is_set
	|| clock_operation.is_set
	|| announce_grant_duration.is_set
	|| unicast_grant_invalid_request.is_set
	|| event_dscp.is_set
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (interop !=  nullptr && interop->has_data())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_data())
	|| (slaves !=  nullptr && slaves->has_data())
	|| (sync_interval !=  nullptr && sync_interval->has_data())
	|| (masters !=  nullptr && masters->has_data())
	|| (communication !=  nullptr && communication->has_data())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_data())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data());
}

bool Ptp::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(sync_grant_duration.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(sync_timeout.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(ipv4ttl.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(ipv6_hop_limit.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (interop !=  nullptr && interop->has_operation())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_operation())
	|| (slaves !=  nullptr && slaves->has_operation())
	|| (sync_interval !=  nullptr && sync_interval->has_operation())
	|| (masters !=  nullptr && masters->has_operation())
	|| (communication !=  nullptr && communication->has_operation())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_operation())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation());
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
    path_buffer << "profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (sync_grant_duration.is_set || is_set(sync_grant_duration.yfilter)) leaf_name_data.push_back(sync_grant_duration.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (sync_timeout.is_set || is_set(sync_timeout.yfilter)) leaf_name_data.push_back(sync_timeout.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (ipv4ttl.is_set || is_set(ipv4ttl.yfilter)) leaf_name_data.push_back(ipv4ttl.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.yfilter)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-interval")
    {
        if(announce_interval == nullptr)
        {
            announce_interval = std::make_shared<Ptp::Profiles::Profile::AnnounceInterval>();
        }
        return announce_interval;
    }

    if(child_yang_name == "interop")
    {
        if(interop == nullptr)
        {
            interop = std::make_shared<Ptp::Profiles::Profile::Interop>();
        }
        return interop;
    }

    if(child_yang_name == "source-ipv4-address")
    {
        if(source_ipv4_address == nullptr)
        {
            source_ipv4_address = std::make_shared<Ptp::Profiles::Profile::SourceIpv4Address>();
        }
        return source_ipv4_address;
    }

    if(child_yang_name == "slaves")
    {
        if(slaves == nullptr)
        {
            slaves = std::make_shared<Ptp::Profiles::Profile::Slaves>();
        }
        return slaves;
    }

    if(child_yang_name == "sync-interval")
    {
        if(sync_interval == nullptr)
        {
            sync_interval = std::make_shared<Ptp::Profiles::Profile::SyncInterval>();
        }
        return sync_interval;
    }

    if(child_yang_name == "masters")
    {
        if(masters == nullptr)
        {
            masters = std::make_shared<Ptp::Profiles::Profile::Masters>();
        }
        return masters;
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

    if(child_yang_name == "source-ipv6-address")
    {
        if(source_ipv6_address == nullptr)
        {
            source_ipv6_address = std::make_shared<Ptp::Profiles::Profile::SourceIpv6Address>();
        }
        return source_ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(announce_interval != nullptr)
    {
        _children["announce-interval"] = announce_interval;
    }

    if(interop != nullptr)
    {
        _children["interop"] = interop;
    }

    if(source_ipv4_address != nullptr)
    {
        _children["source-ipv4-address"] = source_ipv4_address;
    }

    if(slaves != nullptr)
    {
        _children["slaves"] = slaves;
    }

    if(sync_interval != nullptr)
    {
        _children["sync-interval"] = sync_interval;
    }

    if(masters != nullptr)
    {
        _children["masters"] = masters;
    }

    if(communication != nullptr)
    {
        _children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        _children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    if(source_ipv6_address != nullptr)
    {
        _children["source-ipv6-address"] = source_ipv6_address;
    }

    return _children;
}

void Ptp::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration = value;
        sync_grant_duration.value_namespace = name_space;
        sync_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl = value;
        ipv4ttl.value_namespace = name_space;
        ipv4ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout = value;
        delay_response_timeout.value_namespace = name_space;
        delay_response_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration = value;
        delay_response_grant_duration.value_namespace = name_space;
        delay_response_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
        ipv6_hop_limit.value_namespace = name_space;
        ipv6_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-operation")
    {
        clock_operation = value;
        clock_operation.value_namespace = name_space;
        clock_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration = value;
        announce_grant_duration.value_namespace = name_space;
        announce_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request = value;
        unicast_grant_invalid_request.value_namespace = name_space;
        unicast_grant_invalid_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout.yfilter = yfilter;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "clock-operation")
    {
        clock_operation.yfilter = yfilter;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration.yfilter = yfilter;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-interval" || name == "interop" || name == "source-ipv4-address" || name == "slaves" || name == "sync-interval" || name == "masters" || name == "communication" || name == "delay-request-minimum-interval" || name == "source-ipv6-address" || name == "profile-name" || name == "sync-grant-duration" || name == "general-cos" || name == "sync-timeout" || name == "transport" || name == "announce-timeout" || name == "cos" || name == "ipv4ttl" || name == "port-state" || name == "delay-response-timeout" || name == "delay-response-grant-duration" || name == "event-cos" || name == "dscp" || name == "ipv6-hop-limit" || name == "general-dscp" || name == "clock-operation" || name == "announce-grant-duration" || name == "unicast-grant-invalid-request" || name == "event-dscp")
        return true;
    return false;
}

Ptp::Profiles::Profile::AnnounceInterval::AnnounceInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "announce-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::AnnounceInterval::~AnnounceInterval()
{
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::AnnounceInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::AnnounceInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::AnnounceInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::Interop()
    :
    profile{YType::enumeration, "profile"},
    domain{YType::uint32, "domain"}
        ,
    egress_conversion(std::make_shared<Ptp::Profiles::Profile::Interop::EgressConversion>())
    , ingress_conversion(std::make_shared<Ptp::Profiles::Profile::Interop::IngressConversion>())
{
    egress_conversion->parent = this;
    ingress_conversion->parent = this;

    yang_name = "interop"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::~Interop()
{
}

bool Ptp::Profiles::Profile::Interop::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| domain.is_set
	|| (egress_conversion !=  nullptr && egress_conversion->has_data())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_data());
}

bool Ptp::Profiles::Profile::Interop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (egress_conversion !=  nullptr && egress_conversion->has_operation())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_operation());
}

std::string Ptp::Profiles::Profile::Interop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-conversion")
    {
        if(egress_conversion == nullptr)
        {
            egress_conversion = std::make_shared<Ptp::Profiles::Profile::Interop::EgressConversion>();
        }
        return egress_conversion;
    }

    if(child_yang_name == "ingress-conversion")
    {
        if(ingress_conversion == nullptr)
        {
            ingress_conversion = std::make_shared<Ptp::Profiles::Profile::Interop::IngressConversion>();
        }
        return ingress_conversion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_conversion != nullptr)
    {
        _children["egress-conversion"] = egress_conversion;
    }

    if(ingress_conversion != nullptr)
    {
        _children["ingress-conversion"] = ingress_conversion;
    }

    return _children;
}

void Ptp::Profiles::Profile::Interop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Interop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Interop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-conversion" || name == "ingress-conversion" || name == "profile" || name == "domain")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::EgressConversion::EgressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "egress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::EgressConversion::~EgressConversion()
{
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string Ptp::Profiles::Profile::Interop::EgressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::EgressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::EgressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::EgressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void Ptp::Profiles::Profile::Interop::EgressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Interop::EgressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "egress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::IngressConversion::IngressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "ingress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::IngressConversion::~IngressConversion()
{
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string Ptp::Profiles::Profile::Interop::IngressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::IngressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::IngressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::IngressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void Ptp::Profiles::Profile::Interop::IngressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Interop::IngressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "ingress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::Profiles::Profile::Slaves::Slaves()
    :
    slave(this, {"transport"})
{

    yang_name = "slaves"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Slaves::~Slaves()
{
}

bool Ptp::Profiles::Profile::Slaves::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave.len(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.len(); index++)
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave>();
        ent_->parent = this;
        slave.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"slave_mac_address"})
    , ipv4_or_ipv6(this, {"slave_ip_address"})
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Slaves::Slave::~Slave()
{
}

bool Ptp::Profiles::Profile::Slaves::Slave::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool Ptp::Profiles::Profile::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "slave";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(slave_mac_address, "slave-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(slave_ip_address, "slave-ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::Profiles::Profile::SyncInterval::SyncInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "sync-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::SyncInterval::~SyncInterval()
{
}

bool Ptp::Profiles::Profile::SyncInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool Ptp::Profiles::Profile::SyncInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::SyncInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::SyncInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::SyncInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Masters()
    :
    master(this, {"transport"})
{

    yang_name = "masters"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Masters::~Masters()
{
}

bool Ptp::Profiles::Profile::Masters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<master.len(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Profiles::Profile::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.len(); index++)
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Masters::Master>();
        ent_->parent = this;
        master.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : master.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"master_mac_address"})
    , ipv4_or_ipv6(this, {"master_ip_address"})
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Masters::Master::~Master()
{
}

bool Ptp::Profiles::Profile::Masters::Master::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool Ptp::Profiles::Profile::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "master";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
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
    if (is_presence_container) return true;
    return master_mac_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_mac_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string Ptp::Profiles::Profile::Masters::Master::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(master_mac_address, "master-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_mac_address.is_set || is_set(master_mac_address.yfilter)) leaf_name_data.push_back(master_mac_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address = value;
        master_mac_address.value_namespace = name_space;
        master_mac_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address.yfilter = yfilter;
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
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-mac-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
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
    if (is_presence_container) return true;
    return master_ip_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(master_ip_address, "master-ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
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
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-ip-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::Profiles::Profile::Communication::Communication()
    :
    model{YType::enumeration, "model"},
    target_address_set{YType::boolean, "target-address-set"},
    target_address{YType::str, "target-address"}
{

    yang_name = "communication"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::Communication::~Communication()
{
}

bool Ptp::Profiles::Profile::Communication::has_data() const
{
    if (is_presence_container) return true;
    return model.is_set
	|| target_address_set.is_set
	|| target_address.is_set;
}

bool Ptp::Profiles::Profile::Communication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(target_address_set.yfilter)
	|| ydk::is_set(target_address.yfilter);
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
    if (target_address_set.is_set || is_set(target_address_set.yfilter)) leaf_name_data.push_back(target_address_set.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-set")
    {
        target_address_set = value;
        target_address_set.value_namespace = name_space;
        target_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "target-address-set")
    {
        target_address_set.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model" || name == "target-address-set" || name == "target-address")
        return true;
    return false;
}

Ptp::Profiles::Profile::DelayRequestMinimumInterval::DelayRequestMinimumInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "delay-request-minimum-interval"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Profiles::Profile::DelayRequestMinimumInterval::~DelayRequestMinimumInterval()
{
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Profiles::Profile::DelayRequestMinimumInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Profiles::Profile::DelayRequestMinimumInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool Ptp::Profiles::Profile::DelayRequestMinimumInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::Profiles::Profile::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Profiles::Profile::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::UtcOffset::UtcOffset()
    :
    base_offset{YType::uint32, "base-offset"}
        ,
    leap_second_file(nullptr) // presence node
    , scheduled_offsets(std::make_shared<Ptp::UtcOffset::ScheduledOffsets>())
{
    scheduled_offsets->parent = this;

    yang_name = "utc-offset"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffset::~UtcOffset()
{
}

bool Ptp::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return base_offset.is_set
	|| (leap_second_file !=  nullptr && leap_second_file->has_data())
	|| (scheduled_offsets !=  nullptr && scheduled_offsets->has_data());
}

bool Ptp::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(base_offset.yfilter)
	|| (leap_second_file !=  nullptr && leap_second_file->has_operation())
	|| (scheduled_offsets !=  nullptr && scheduled_offsets->has_operation());
}

std::string Ptp::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_offset.is_set || is_set(base_offset.yfilter)) leaf_name_data.push_back(base_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "leap-second-file")
    {
        if(leap_second_file == nullptr)
        {
            leap_second_file = std::make_shared<Ptp::UtcOffset::LeapSecondFile>();
        }
        return leap_second_file;
    }

    if(child_yang_name == "scheduled-offsets")
    {
        if(scheduled_offsets == nullptr)
        {
            scheduled_offsets = std::make_shared<Ptp::UtcOffset::ScheduledOffsets>();
        }
        return scheduled_offsets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(leap_second_file != nullptr)
    {
        _children["leap-second-file"] = leap_second_file;
    }

    if(scheduled_offsets != nullptr)
    {
        _children["scheduled-offsets"] = scheduled_offsets;
    }

    return _children;
}

void Ptp::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base-offset")
    {
        base_offset = value;
        base_offset.value_namespace = name_space;
        base_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base-offset")
    {
        base_offset.yfilter = yfilter;
    }
}

bool Ptp::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leap-second-file" || name == "scheduled-offsets" || name == "base-offset")
        return true;
    return false;
}

Ptp::UtcOffset::LeapSecondFile::LeapSecondFile()
    :
    source_url{YType::str, "source-url"},
    polling_frequency{YType::uint32, "polling-frequency"}
{

    yang_name = "leap-second-file"; yang_parent_name = "utc-offset"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ptp::UtcOffset::LeapSecondFile::~LeapSecondFile()
{
}

bool Ptp::UtcOffset::LeapSecondFile::has_data() const
{
    if (is_presence_container) return true;
    return source_url.is_set
	|| polling_frequency.is_set;
}

bool Ptp::UtcOffset::LeapSecondFile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_url.yfilter)
	|| ydk::is_set(polling_frequency.yfilter);
}

std::string Ptp::UtcOffset::LeapSecondFile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/utc-offset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffset::LeapSecondFile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leap-second-file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffset::LeapSecondFile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_url.is_set || is_set(source_url.yfilter)) leaf_name_data.push_back(source_url.get_name_leafdata());
    if (polling_frequency.is_set || is_set(polling_frequency.yfilter)) leaf_name_data.push_back(polling_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffset::LeapSecondFile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffset::LeapSecondFile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffset::LeapSecondFile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-url")
    {
        source_url = value;
        source_url.value_namespace = name_space;
        source_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency = value;
        polling_frequency.value_namespace = name_space;
        polling_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffset::LeapSecondFile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-url")
    {
        source_url.yfilter = yfilter;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency.yfilter = yfilter;
    }
}

bool Ptp::UtcOffset::LeapSecondFile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-url" || name == "polling-frequency")
        return true;
    return false;
}

Ptp::UtcOffset::ScheduledOffsets::ScheduledOffsets()
    :
    scheduled_offset(this, {"date"})
{

    yang_name = "scheduled-offsets"; yang_parent_name = "utc-offset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffset::ScheduledOffsets::~ScheduledOffsets()
{
}

bool Ptp::UtcOffset::ScheduledOffsets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scheduled_offset.len(); index++)
    {
        if(scheduled_offset[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::UtcOffset::ScheduledOffsets::has_operation() const
{
    for (std::size_t index=0; index<scheduled_offset.len(); index++)
    {
        if(scheduled_offset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::UtcOffset::ScheduledOffsets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/utc-offset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffset::ScheduledOffsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-offsets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffset::ScheduledOffsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffset::ScheduledOffsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-offset")
    {
        auto ent_ = std::make_shared<Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset>();
        ent_->parent = this;
        scheduled_offset.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffset::ScheduledOffsets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : scheduled_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::UtcOffset::ScheduledOffsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::UtcOffset::ScheduledOffsets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::UtcOffset::ScheduledOffsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-offset")
        return true;
    return false;
}

Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::ScheduledOffset()
    :
    date{YType::str, "date"},
    offset{YType::uint32, "offset"}
{

    yang_name = "scheduled-offset"; yang_parent_name = "scheduled-offsets"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::~ScheduledOffset()
{
}

bool Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::has_data() const
{
    if (is_presence_container) return true;
    return date.is_set
	|| offset.is_set;
}

bool Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/utc-offset/scheduled-offsets/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-offset";
    ADD_KEY_TOKEN(date, "date");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Ptp::UtcOffset::ScheduledOffsets::ScheduledOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "offset")
        return true;
    return false;
}

Ptp::Logging::Logging()
    :
    best_master_clock(std::make_shared<Ptp::Logging::BestMasterClock>())
{
    best_master_clock->parent = this;

    yang_name = "logging"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Logging::~Logging()
{
}

bool Ptp::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (best_master_clock !=  nullptr && best_master_clock->has_data());
}

bool Ptp::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (best_master_clock !=  nullptr && best_master_clock->has_operation());
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

std::shared_ptr<ydk::Entity> Ptp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-master-clock")
    {
        if(best_master_clock == nullptr)
        {
            best_master_clock = std::make_shared<Ptp::Logging::BestMasterClock>();
        }
        return best_master_clock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(best_master_clock != nullptr)
    {
        _children["best-master-clock"] = best_master_clock;
    }

    return _children;
}

void Ptp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-master-clock")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::Logging::BestMasterClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Logging::BestMasterClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::UncalibratedClockClass2::UncalibratedClockClass2()
    :
    clock_class{YType::uint32, "clock-class"},
    unless_from_holdover{YType::boolean, "unless-from-holdover"}
{

    yang_name = "uncalibrated-clock-class2"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ptp::UncalibratedClockClass2::~UncalibratedClockClass2()
{
}

bool Ptp::UncalibratedClockClass2::has_data() const
{
    if (is_presence_container) return true;
    return clock_class.is_set
	|| unless_from_holdover.is_set;
}

bool Ptp::UncalibratedClockClass2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class.yfilter)
	|| ydk::is_set(unless_from_holdover.yfilter);
}

std::string Ptp::UncalibratedClockClass2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UncalibratedClockClass2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uncalibrated-clock-class2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UncalibratedClockClass2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());
    if (unless_from_holdover.is_set || is_set(unless_from_holdover.yfilter)) leaf_name_data.push_back(unless_from_holdover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UncalibratedClockClass2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UncalibratedClockClass2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UncalibratedClockClass2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unless-from-holdover")
    {
        unless_from_holdover = value;
        unless_from_holdover.value_namespace = name_space;
        unless_from_holdover.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UncalibratedClockClass2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
    if(value_path == "unless-from-holdover")
    {
        unless_from_holdover.yfilter = yfilter;
    }
}

bool Ptp::UncalibratedClockClass2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class" || name == "unless-from-holdover")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Ptp::TransparentClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::TransparentClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domains != nullptr)
    {
        _children["domains"] = domains;
    }

    return _children;
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
    :
    domain(this, {"domain"})
{

    yang_name = "domains"; yang_parent_name = "transparent-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::TransparentClock::Domains::~Domains()
{
}

bool Ptp::TransparentClock::Domains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::TransparentClock::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
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

std::shared_ptr<ydk::Entity> Ptp::TransparentClock::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<Ptp::TransparentClock::Domains::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::TransparentClock::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "domain";
    ADD_KEY_TOKEN(domain, "domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::TransparentClock::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::TransparentClock::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::TransparentClock::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Ptp::VirtualPort::VirtualPort()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    enable{YType::empty, "enable"},
    priority2{YType::uint32, "priority2"},
    local_priority{YType::uint32, "local-priority"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"},
    clock_class{YType::uint32, "clock-class"}
{

    yang_name = "virtual-port"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::VirtualPort::~VirtualPort()
{
}

bool Ptp::VirtualPort::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| enable.is_set
	|| priority2.is_set
	|| local_priority.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| clock_class.is_set;
}

bool Ptp::VirtualPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(clock_class.yfilter);
}

std::string Ptp::VirtualPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::VirtualPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::VirtualPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::VirtualPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::VirtualPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::VirtualPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::VirtualPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
}

bool Ptp::VirtualPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-accuracy" || name == "enable" || name == "priority2" || name == "local-priority" || name == "offset-scaled-log-variance" || name == "priority1" || name == "clock-class")
        return true;
    return false;
}


}
}

