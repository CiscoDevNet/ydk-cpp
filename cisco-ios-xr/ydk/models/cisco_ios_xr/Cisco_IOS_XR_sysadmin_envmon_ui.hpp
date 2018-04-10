#ifndef _CISCO_IOS_XR_SYSADMIN_ENVMON_UI_
#define _CISCO_IOS_XR_SYSADMIN_ENVMON_UI_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_envmon_ui {

class Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Oper; //type: Environment::Oper
        class All; //type: Environment::All
        class Config; //type: Environment::Config
        class Trace; //type: Environment::Trace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config> config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Trace> > trace;
        
}; // Environment


class Environment::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Temperatures; //type: Environment::Oper::Temperatures
        class Voltages; //type: Environment::Oper::Voltages
        class Current; //type: Environment::Oper::Current
        class Fan; //type: Environment::Oper::Fan
        class Power; //type: Environment::Oper::Power
        class Altitude; //type: Environment::Oper::Altitude

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Temperatures> temperatures;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Voltages> voltages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Current> current;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Fan> fan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Power> power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Altitude> altitude;
        
}; // Environment::Oper


class Environment::Oper::Temperatures : public ydk::Entity
{
    public:
        Temperatures();
        ~Temperatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Temperatures::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Temperatures::Location> > location;
        
}; // Environment::Oper::Temperatures


class Environment::Oper::Temperatures::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SensorAttributes; //type: Environment::Oper::Temperatures::Location::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Temperatures::Location::SensorAttributes> > sensor_attributes;
        
}; // Environment::Oper::Temperatures::Location


class Environment::Oper::Temperatures::Location::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf alarm; //type: string
        ydk::YLeaf temperature_value; //type: string
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf critical_lo; //type: int32
        ydk::YLeaf major_lo; //type: int32
        ydk::YLeaf minor_lo; //type: int32
        ydk::YLeaf minor_hi; //type: int32
        ydk::YLeaf major_hi; //type: int32
        ydk::YLeaf critical_hi; //type: int32

}; // Environment::Oper::Temperatures::Location::SensorAttributes


class Environment::Oper::Voltages : public ydk::Entity
{
    public:
        Voltages();
        ~Voltages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Voltages::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Voltages::Location> > location;
        
}; // Environment::Oper::Voltages


class Environment::Oper::Voltages::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SensorAttributes; //type: Environment::Oper::Voltages::Location::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Voltages::Location::SensorAttributes> > sensor_attributes;
        
}; // Environment::Oper::Voltages::Location


class Environment::Oper::Voltages::Location::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf alarm; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf temperature_value; //type: int32
        ydk::YLeaf critical_lo; //type: int32
        ydk::YLeaf major_lo; //type: int32
        ydk::YLeaf minor_lo; //type: int32
        ydk::YLeaf minor_hi; //type: int32
        ydk::YLeaf major_hi; //type: int32
        ydk::YLeaf critical_hi; //type: int32

}; // Environment::Oper::Voltages::Location::SensorAttributes


class Environment::Oper::Current : public ydk::Entity
{
    public:
        Current();
        ~Current();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Current::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Current::Location> > location;
        
}; // Environment::Oper::Current


class Environment::Oper::Current::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SensorAttributes; //type: Environment::Oper::Current::Location::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Current::Location::SensorAttributes> > sensor_attributes;
        
}; // Environment::Oper::Current::Location


class Environment::Oper::Current::Location::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf alarm; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf temperature_value; //type: int32

}; // Environment::Oper::Current::Location::SensorAttributes


class Environment::Oper::Fan : public ydk::Entity
{
    public:
        Fan();
        ~Fan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Fan::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Fan::Location> > location;
        
}; // Environment::Oper::Fan


class Environment::Oper::Fan::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class FanAttributes; //type: Environment::Oper::Fan::Location::FanAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Fan::Location::FanAttributes> > fan_attributes;
        
}; // Environment::Oper::Fan::Location


class Environment::Oper::Fan::Location::FanAttributes : public ydk::Entity
{
    public:
        FanAttributes();
        ~FanAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logical_slot; //type: string
        ydk::YLeaf print_fan_header; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf fru_pid; //type: string
        ydk::YLeaf fans_speed; //type: string
        ydk::YLeaf fan_header; //type: uint32
        ydk::YLeaf speed_space; //type: uint32

}; // Environment::Oper::Fan::Location::FanAttributes


class Environment::Oper::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Power::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Power::Location> > location;
        
}; // Environment::Oper::Power


class Environment::Oper::Power::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class PemAttributes; //type: Environment::Oper::Power::Location::PemAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Power::Location::PemAttributes> > pem_attributes;
        
}; // Environment::Oper::Power::Location


class Environment::Oper::Power::Location::PemAttributes : public ydk::Entity
{
    public:
        PemAttributes();
        ~PemAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pem; //type: string
        ydk::YLeaf pem_id; //type: string
        ydk::YLeaf card_type; //type: string
        ydk::YLeaf ps_type; //type: string
        ydk::YLeaf shelf_num; //type: uint16
        ydk::YLeaf supply_type; //type: string
        ydk::YLeaf input_voltage; //type: string
        ydk::YLeaf input_current; //type: string
        ydk::YLeaf output_voltage; //type: string
        ydk::YLeaf output_current; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf input_power_to_ps; //type: uint32
        ydk::YLeaf input_current_to_ps; //type: string
        ydk::YLeaf output_power_from_ps; //type: uint32
        ydk::YLeaf output_current_from_ps; //type: string
        ydk::YLeaf power_allocated; //type: uint32
        ydk::YLeaf power_consumed; //type: string
        ydk::YLeaf power_status; //type: string
        ydk::YLeaf confgd_power_redundancy_mode; //type: string
        ydk::YLeaf usable_power_capacity; //type: uint32
        ydk::YLeaf protection_power_capacity; //type: uint32
        ydk::YLeaf power_resrv_and_alloc; //type: uint32
        ydk::YLeaf system_power_used; //type: uint32
        ydk::YLeaf system_power_input; //type: uint32
        ydk::YLeaf power_level; //type: uint16
        ydk::YLeaf output_header; //type: uint16
        ydk::YLeaf output_footer; //type: uint16
        ydk::YLeaf ps_sum_footer; //type: uint16

}; // Environment::Oper::Power::Location::PemAttributes


class Environment::Oper::Altitude : public ydk::Entity
{
    public:
        Altitude();
        ~Altitude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Oper::Altitude::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Altitude::Location> > location;
        
}; // Environment::Oper::Altitude


class Environment::Oper::Altitude::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class AltAttributes; //type: Environment::Oper::Altitude::Location::AltAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Oper::Altitude::Location::AltAttributes> > alt_attributes;
        
}; // Environment::Oper::Altitude::Location


class Environment::Oper::Altitude::Location::AltAttributes : public ydk::Entity
{
    public:
        AltAttributes();
        ~AltAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf rack; //type: uint32
        ydk::YLeaf sensor_value; //type: string
        ydk::YLeaf source; //type: string

}; // Environment::Oper::Altitude::Location::AltAttributes


class Environment::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::All::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location> > location;
        
}; // Environment::All


class Environment::All::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class Temperatures; //type: Environment::All::Location::Temperatures
        class Voltages; //type: Environment::All::Location::Voltages
        class Current; //type: Environment::All::Location::Current
        class Fan; //type: Environment::All::Location::Fan

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Temperatures> > temperatures;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Voltages> > voltages;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Current> > current;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Fan> > fan;
        
}; // Environment::All::Location


class Environment::All::Location::Temperatures : public ydk::Entity
{
    public:
        Temperatures();
        ~Temperatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_iden; //type: string
        ydk::YLeaf print_header; //type: boolean
        class SensorAttributes; //type: Environment::All::Location::Temperatures::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Temperatures::SensorAttributes> > sensor_attributes;
        
}; // Environment::All::Location::Temperatures


class Environment::All::Location::Temperatures::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf alarm; //type: string
        ydk::YLeaf temperature_value; //type: string
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf critical_lo; //type: int32
        ydk::YLeaf major_lo; //type: int32
        ydk::YLeaf minor_lo; //type: int32
        ydk::YLeaf minor_hi; //type: int32
        ydk::YLeaf major_hi; //type: int32
        ydk::YLeaf critical_hi; //type: int32

}; // Environment::All::Location::Temperatures::SensorAttributes


class Environment::All::Location::Voltages : public ydk::Entity
{
    public:
        Voltages();
        ~Voltages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_iden; //type: string
        ydk::YLeaf print_header; //type: boolean
        class SensorAttributes; //type: Environment::All::Location::Voltages::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Voltages::SensorAttributes> > sensor_attributes;
        
}; // Environment::All::Location::Voltages


class Environment::All::Location::Voltages::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf alarm; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf temperature_value; //type: int32
        ydk::YLeaf critical_lo; //type: int32
        ydk::YLeaf major_lo; //type: int32
        ydk::YLeaf minor_lo; //type: int32
        ydk::YLeaf minor_hi; //type: int32
        ydk::YLeaf major_hi; //type: int32
        ydk::YLeaf critical_hi; //type: int32

}; // Environment::All::Location::Voltages::SensorAttributes


class Environment::All::Location::Current : public ydk::Entity
{
    public:
        Current();
        ~Current();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_iden; //type: string
        ydk::YLeaf print_header; //type: boolean
        class SensorAttributes; //type: Environment::All::Location::Current::SensorAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Current::SensorAttributes> > sensor_attributes;
        
}; // Environment::All::Location::Current


class Environment::All::Location::Current::SensorAttributes : public ydk::Entity
{
    public:
        SensorAttributes();
        ~SensorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor; //type: string
        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf value_; //type: string

}; // Environment::All::Location::Current::SensorAttributes


class Environment::All::Location::Fan : public ydk::Entity
{
    public:
        Fan();
        ~Fan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_iden; //type: string
        class FanAttributes; //type: Environment::All::Location::Fan::FanAttributes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::All::Location::Fan::FanAttributes> > fan_attributes;
        
}; // Environment::All::Location::Fan


class Environment::All::Location::Fan::FanAttributes : public ydk::Entity
{
    public:
        FanAttributes();
        ~FanAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logical_slot; //type: string
        ydk::YLeaf print_fan_header; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf fru_pid; //type: string
        ydk::YLeaf fans_speed; //type: string
        ydk::YLeaf fan_header; //type: uint32
        ydk::YLeaf speed_space; //type: uint32

}; // Environment::All::Location::Fan::FanAttributes


class Environment::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf raise_fan_speed; //type: uint32
        ydk::YLeaf fan_ctrl_optics; //type: uint32
        ydk::YLeaf graceful_shutdown; //type: uint32
        class Router; //type: Environment::Config::Router
        class AirFilter; //type: Environment::Config::AirFilter
        class FanCtrl; //type: Environment::Config::FanCtrl
        class Temperature; //type: Environment::Config::Temperature
        class Monitoring; //type: Environment::Config::Monitoring

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router> router;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter> air_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrl> fan_ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Temperature> temperature;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Monitoring> monitoring;
        
}; // Environment::Config


class Environment::Config::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Altitude; //type: Environment::Config::Router::Altitude

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router::Altitude> altitude;
        
}; // Environment::Config::Router


class Environment::Config::Router::Altitude : public ydk::Entity
{
    public:
        Altitude();
        ~Altitude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class All; //type: Environment::Config::Router::Altitude::All
        class RackLoc; //type: Environment::Config::Router::Altitude::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router::Altitude::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router::Altitude::RackLoc> rack_loc;
        
}; // Environment::Config::Router::Altitude


class Environment::Config::Router::Altitude::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf num_meters; //type: uint32

}; // Environment::Config::Router::Altitude::All


class Environment::Config::Router::Altitude::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Config::Router::Altitude::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router::Altitude::RackLoc::Location> > location;
        
}; // Environment::Config::Router::Altitude::RackLoc


class Environment::Config::Router::Altitude::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId
        ydk::YLeaf num_meters; //type: uint32

}; // Environment::Config::Router::Altitude::RackLoc::Location


class Environment::Config::AirFilter : public ydk::Entity
{
    public:
        AirFilter();
        ~AirFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Replaced; //type: Environment::Config::AirFilter::Replaced

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter::Replaced> replaced;
        
}; // Environment::Config::AirFilter


class Environment::Config::AirFilter::Replaced : public ydk::Entity
{
    public:
        Replaced();
        ~Replaced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class All; //type: Environment::Config::AirFilter::Replaced::All
        class RackLoc; //type: Environment::Config::AirFilter::Replaced::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter::Replaced::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter::Replaced::RackLoc> rack_loc;
        
}; // Environment::Config::AirFilter::Replaced


class Environment::Config::AirFilter::Replaced::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf date; //type: string

}; // Environment::Config::AirFilter::Replaced::All


class Environment::Config::AirFilter::Replaced::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Environment::Config::AirFilter::Replaced::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter::Replaced::RackLoc::Location> > location;
        
}; // Environment::Config::AirFilter::Replaced::RackLoc


class Environment::Config::AirFilter::Replaced::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId
        ydk::YLeaf date; //type: string

}; // Environment::Config::AirFilter::Replaced::RackLoc::Location


class Environment::Config::FanCtrl : public ydk::Entity
{
    public:
        FanCtrl();
        ~FanCtrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Disable; //type: Environment::Config::FanCtrl::Disable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrl::Disable> disable;
        
}; // Environment::Config::FanCtrl


class Environment::Config::FanCtrl::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: Environment::Config::FanCtrl::Disable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrl::Disable::RackLoc> rack_loc;
        
}; // Environment::Config::FanCtrl::Disable


class Environment::Config::FanCtrl::Disable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: Environment::Config::FanCtrl::Disable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrl::Disable::RackLoc::Location> > location;
        
}; // Environment::Config::FanCtrl::Disable::RackLoc


class Environment::Config::FanCtrl::Disable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // Environment::Config::FanCtrl::Disable::RackLoc::Location


class Environment::Config::Temperature : public ydk::Entity
{
    public:
        Temperature();
        ~Temperature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Disable; //type: Environment::Config::Temperature::Disable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Temperature::Disable> disable;
        
}; // Environment::Config::Temperature


class Environment::Config::Temperature::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: Environment::Config::Temperature::Disable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Temperature::Disable::RackLoc> rack_loc;
        
}; // Environment::Config::Temperature::Disable


class Environment::Config::Temperature::Disable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: Environment::Config::Temperature::Disable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Temperature::Disable::RackLoc::Location> > location;
        
}; // Environment::Config::Temperature::Disable::RackLoc


class Environment::Config::Temperature::Disable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // Environment::Config::Temperature::Disable::RackLoc::Location


class Environment::Config::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Disable; //type: Environment::Config::Monitoring::Disable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Monitoring::Disable> disable;
        
}; // Environment::Config::Monitoring


class Environment::Config::Monitoring::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: Environment::Config::Monitoring::Disable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Monitoring::Disable::RackLoc> rack_loc;
        
}; // Environment::Config::Monitoring::Disable


class Environment::Config::Monitoring::Disable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: Environment::Config::Monitoring::Disable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Monitoring::Disable::RackLoc::Location> > location;
        
}; // Environment::Config::Monitoring::Disable::RackLoc


class Environment::Config::Monitoring::Disable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // Environment::Config::Monitoring::Disable::RackLoc::Location


class Environment::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf buffer; //type: string
        class Location; //type: Environment::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Trace::Location> > location;
        
}; // Environment::Trace


class Environment::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Environment::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Trace::Location::AllOptions> > all_options;
        
}; // Environment::Trace::Location


class Environment::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Environment::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Environment::Trace::Location::AllOptions


class Environment::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Environment::Trace::Location::AllOptions::TraceBlocks

class PowerMgmt : public ydk::Entity
{
    public:
        PowerMgmt();
        ~PowerMgmt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Config; //type: PowerMgmt::Config

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config> config;
        
}; // PowerMgmt


class PowerMgmt::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Action; //type: PowerMgmt::Config::Action
        class SingleFeedMode; //type: PowerMgmt::Config::SingleFeedMode
        class ExtendedTemp; //type: PowerMgmt::Config::ExtendedTemp
        class RedundancyNumPms; //type: PowerMgmt::Config::RedundancyNumPms

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::SingleFeedMode> single_feed_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::ExtendedTemp> extended_temp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::RedundancyNumPms> redundancy_num_pms;
        
}; // PowerMgmt::Config


class PowerMgmt::Config::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Disable; //type: PowerMgmt::Config::Action::Disable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Action::Disable> disable;
        
}; // PowerMgmt::Config::Action


class PowerMgmt::Config::Action::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: PowerMgmt::Config::Action::Disable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Action::Disable::RackLoc> rack_loc;
        
}; // PowerMgmt::Config::Action::Disable


class PowerMgmt::Config::Action::Disable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: PowerMgmt::Config::Action::Disable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Action::Disable::RackLoc::Location> > location;
        
}; // PowerMgmt::Config::Action::Disable::RackLoc


class PowerMgmt::Config::Action::Disable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // PowerMgmt::Config::Action::Disable::RackLoc::Location


class PowerMgmt::Config::SingleFeedMode : public ydk::Entity
{
    public:
        SingleFeedMode();
        ~SingleFeedMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Enable; //type: PowerMgmt::Config::SingleFeedMode::Enable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::SingleFeedMode::Enable> enable;
        
}; // PowerMgmt::Config::SingleFeedMode


class PowerMgmt::Config::SingleFeedMode::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: PowerMgmt::Config::SingleFeedMode::Enable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::SingleFeedMode::Enable::RackLoc> rack_loc;
        
}; // PowerMgmt::Config::SingleFeedMode::Enable


class PowerMgmt::Config::SingleFeedMode::Enable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location> > location;
        
}; // PowerMgmt::Config::SingleFeedMode::Enable::RackLoc


class PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location


class PowerMgmt::Config::ExtendedTemp : public ydk::Entity
{
    public:
        ExtendedTemp();
        ~ExtendedTemp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Enable; //type: PowerMgmt::Config::ExtendedTemp::Enable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::ExtendedTemp::Enable> enable;
        
}; // PowerMgmt::Config::ExtendedTemp


class PowerMgmt::Config::ExtendedTemp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RackLoc; //type: PowerMgmt::Config::ExtendedTemp::Enable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::ExtendedTemp::Enable::RackLoc> rack_loc;
        
}; // PowerMgmt::Config::ExtendedTemp::Enable


class PowerMgmt::Config::ExtendedTemp::Enable::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        class Location; //type: PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location> > location;
        
}; // PowerMgmt::Config::ExtendedTemp::Enable::RackLoc


class PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId

}; // PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location


class PowerMgmt::Config::RedundancyNumPms : public ydk::Entity
{
    public:
        RedundancyNumPms();
        ~RedundancyNumPms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class All; //type: PowerMgmt::Config::RedundancyNumPms::All
        class RackLoc; //type: PowerMgmt::Config::RedundancyNumPms::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::RedundancyNumPms::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::RedundancyNumPms::RackLoc> rack_loc;
        
}; // PowerMgmt::Config::RedundancyNumPms


class PowerMgmt::Config::RedundancyNumPms::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf num_pm; //type: uint32

}; // PowerMgmt::Config::RedundancyNumPms::All


class PowerMgmt::Config::RedundancyNumPms::RackLoc : public ydk::Entity
{
    public:
        RackLoc();
        ~RackLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: PowerMgmt::Config::RedundancyNumPms::RackLoc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::RedundancyNumPms::RackLoc::Location> > location;
        
}; // PowerMgmt::Config::RedundancyNumPms::RackLoc


class PowerMgmt::Config::RedundancyNumPms::RackLoc::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rackid; //type: RackId
        ydk::YLeaf num_pm; //type: uint32

}; // PowerMgmt::Config::RedundancyNumPms::RackLoc::Location


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ENVMON_UI_ */

