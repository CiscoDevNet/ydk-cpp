
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ptp_pd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_pd_cfg {

LogServoRoot::LogServoRoot()
    :
    servo_event_enable{YType::boolean, "servo-event-enable"}
{

    yang_name = "log-servo-root"; yang_parent_name = "Cisco-IOS-XR-ptp-pd-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

LogServoRoot::~LogServoRoot()
{
}

bool LogServoRoot::has_data() const
{
    if (is_presence_container) return true;
    return servo_event_enable.is_set;
}

bool LogServoRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(servo_event_enable.yfilter);
}

std::string LogServoRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-pd-cfg:log-servo-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogServoRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (servo_event_enable.is_set || is_set(servo_event_enable.yfilter)) leaf_name_data.push_back(servo_event_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LogServoRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LogServoRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LogServoRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "servo-event-enable")
    {
        servo_event_enable = value;
        servo_event_enable.value_namespace = name_space;
        servo_event_enable.value_namespace_prefix = name_space_prefix;
    }
}

void LogServoRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "servo-event-enable")
    {
        servo_event_enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> LogServoRoot::clone_ptr() const
{
    return std::make_shared<LogServoRoot>();
}

std::string LogServoRoot::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LogServoRoot::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LogServoRoot::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LogServoRoot::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LogServoRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servo-event-enable")
        return true;
    return false;
}


}
}

