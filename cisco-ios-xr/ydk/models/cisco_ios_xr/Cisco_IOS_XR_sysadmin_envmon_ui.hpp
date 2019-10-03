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
        ydk::YList trace;
        
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

        ydk::YList location;
        
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
        ydk::YLeaf loc_header; //type: uint32
        ydk::YLeaf print_header; //type: boolean
        class SensorAttributes; //type: Environment::Oper::Temperatures::Location::SensorAttributes

        ydk::YList sensor_attributes;
        
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

        ydk::YList location;
        
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
        ydk::YLeaf print_header; //type: boolean
        ydk::YLeaf loc_header; //type: uint32
        class SensorAttributes; //type: Environment::Oper::Voltages::Location::SensorAttributes

        ydk::YList sensor_attributes;
        
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

        ydk::YList location;
        
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
        ydk::YLeaf print_header; //type: boolean
        ydk::YLeaf loc_header; //type: uint32
        class SensorAttributes; //type: Environment::Oper::Current::Location::SensorAttributes

        ydk::YList sensor_attributes;
        
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

        ydk::YList location;
        
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
        ydk::YLeaf print_header; //type: boolean
        ydk::YLeaf loc_header; //type: uint32
        class FanAttributes; //type: Environment::Oper::Fan::Location::FanAttributes

        ydk::YList fan_attributes;
        
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

        ydk::YList location;
        
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

        ydk::YList pem_attributes;
        
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

        ydk::YList location;
        
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

        ydk::YList alt_attributes;
        
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
        ydk::YLeaf print_header; //type: boolean

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

        ydk::YList location;
        
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
        class Power; //type: Environment::All::Location::Power
        class Altitude; //type: Environment::All::Location::Altitude

        ydk::YList temperatures;
        ydk::YList voltages;
        ydk::YList current;
        ydk::YList fan;
        ydk::YList power;
        ydk::YList altitude;
        
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

        ydk::YList sensor_attributes;
        
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

        ydk::YList sensor_attributes;
        
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

        ydk::YList sensor_attributes;
        
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

        ydk::YList fan_attributes;
        
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


class Environment::All::Location::Power : public ydk::Entity
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

        ydk::YLeaf loc_iden; //type: string
        class PemAttributes; //type: Environment::All::Location::Power::PemAttributes

        ydk::YList pem_attributes;
        
}; // Environment::All::Location::Power


class Environment::All::Location::Power::PemAttributes : public ydk::Entity
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

}; // Environment::All::Location::Power::PemAttributes


class Environment::All::Location::Altitude : public ydk::Entity
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

        ydk::YLeaf loc_iden; //type: string
        class AltAttributes; //type: Environment::All::Location::Altitude::AltAttributes

        ydk::YList alt_attributes;
        
}; // Environment::All::Location::Altitude


class Environment::All::Location::Altitude::AltAttributes : public ydk::Entity
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
        ydk::YLeaf print_header; //type: boolean
        ydk::YLeaf rack; //type: uint32
        ydk::YLeaf sensor_value; //type: string
        ydk::YLeaf source; //type: string

}; // Environment::All::Location::Altitude::AltAttributes


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

        class Router; //type: Environment::Config::Router
        class AirFilter; //type: Environment::Config::AirFilter
        class FanCtrl; //type: Environment::Config::FanCtrl
        class Temperature; //type: Environment::Config::Temperature
        class Monitoring; //type: Environment::Config::Monitoring
        class RaiseFanSpeed; //type: Environment::Config::RaiseFanSpeed
        class FanCtrlOptics; //type: Environment::Config::FanCtrlOptics
        class GracefulShutdown; //type: Environment::Config::GracefulShutdown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Router> router;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::AirFilter> air_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrl> fan_ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Temperature> temperature;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::Monitoring> monitoring;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::RaiseFanSpeed> raise_fan_speed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrlOptics> fan_ctrl_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::GracefulShutdown> graceful_shutdown;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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


class Environment::Config::RaiseFanSpeed : public ydk::Entity
{
    public:
        RaiseFanSpeed();
        ~RaiseFanSpeed();

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

        class All; //type: Environment::Config::RaiseFanSpeed::All
        class RackLoc; //type: Environment::Config::RaiseFanSpeed::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::RaiseFanSpeed::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::RaiseFanSpeed::RackLoc> rack_loc;
        
}; // Environment::Config::RaiseFanSpeed


class Environment::Config::RaiseFanSpeed::All : public ydk::Entity
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

        ydk::YLeaf speed_pwm; //type: uint32

}; // Environment::Config::RaiseFanSpeed::All


class Environment::Config::RaiseFanSpeed::RackLoc : public ydk::Entity
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

        class Location; //type: Environment::Config::RaiseFanSpeed::RackLoc::Location

        ydk::YList location;
        
}; // Environment::Config::RaiseFanSpeed::RackLoc


class Environment::Config::RaiseFanSpeed::RackLoc::Location : public ydk::Entity
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
        ydk::YLeaf speed_pwm; //type: uint32

}; // Environment::Config::RaiseFanSpeed::RackLoc::Location


class Environment::Config::FanCtrlOptics : public ydk::Entity
{
    public:
        FanCtrlOptics();
        ~FanCtrlOptics();

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

        class Enable; //type: Environment::Config::FanCtrlOptics::Enable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrlOptics::Enable> enable;
        
}; // Environment::Config::FanCtrlOptics


class Environment::Config::FanCtrlOptics::Enable : public ydk::Entity
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

        class RackLoc; //type: Environment::Config::FanCtrlOptics::Enable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::FanCtrlOptics::Enable::RackLoc> rack_loc;
        
}; // Environment::Config::FanCtrlOptics::Enable


class Environment::Config::FanCtrlOptics::Enable::RackLoc : public ydk::Entity
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
        class Location; //type: Environment::Config::FanCtrlOptics::Enable::RackLoc::Location

        ydk::YList location;
        
}; // Environment::Config::FanCtrlOptics::Enable::RackLoc


class Environment::Config::FanCtrlOptics::Enable::RackLoc::Location : public ydk::Entity
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

}; // Environment::Config::FanCtrlOptics::Enable::RackLoc::Location


class Environment::Config::GracefulShutdown : public ydk::Entity
{
    public:
        GracefulShutdown();
        ~GracefulShutdown();

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

        class Disable; //type: Environment::Config::GracefulShutdown::Disable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::GracefulShutdown::Disable> disable;
        
}; // Environment::Config::GracefulShutdown


class Environment::Config::GracefulShutdown::Disable : public ydk::Entity
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

        class RackLoc; //type: Environment::Config::GracefulShutdown::Disable::RackLoc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::Environment::Config::GracefulShutdown::Disable::RackLoc> rack_loc;
        
}; // Environment::Config::GracefulShutdown::Disable


class Environment::Config::GracefulShutdown::Disable::RackLoc : public ydk::Entity
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
        class Location; //type: Environment::Config::GracefulShutdown::Disable::RackLoc::Location

        ydk::YList location;
        
}; // Environment::Config::GracefulShutdown::Disable::RackLoc


class Environment::Config::GracefulShutdown::Disable::RackLoc::Location : public ydk::Entity
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

}; // Environment::Config::GracefulShutdown::Disable::RackLoc::Location


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

        ydk::YList location;
        
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

        ydk::YList all_options;
        
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

        ydk::YList trace_blocks;
        
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
        class Progressive; //type: PowerMgmt::Config::Progressive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::SingleFeedMode> single_feed_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::ExtendedTemp> extended_temp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::RedundancyNumPms> redundancy_num_pms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Progressive> progressive;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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

        ydk::YList location;
        
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


class PowerMgmt::Config::Progressive : public ydk::Entity
{
    public:
        Progressive();
        ~Progressive();

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

        class Enable; //type: PowerMgmt::Config::Progressive::Enable

        ydk::YList enable;
        
}; // PowerMgmt::Config::Progressive


class PowerMgmt::Config::Progressive::Enable : public ydk::Entity
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

        ydk::YLeaf enabled; //type: Enabled
        ydk::YLeaf syslog_threshold; //type: uint32
        ydk::YLeaf shutdown_threshold; //type: uint32
        class Priority; //type: PowerMgmt::Config::Progressive::Enable::Priority

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_envmon_ui::PowerMgmt::Config::Progressive::Enable::Priority> priority;
                class Enabled;

}; // PowerMgmt::Config::Progressive::Enable


class PowerMgmt::Config::Progressive::Enable::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: PowerMgmt::Config::Progressive::Enable::Priority::Location

        ydk::YList location;
        
}; // PowerMgmt::Config::Progressive::Enable::Priority


class PowerMgmt::Config::Progressive::Enable::Priority::Location : public ydk::Entity
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

        ydk::YLeaf loc; //type: string
        ydk::YLeaf prior; //type: uint32

}; // PowerMgmt::Config::Progressive::Enable::Priority::Location

class PowerMgmt::Config::Progressive::Enable::Enabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ENVMON_UI_ */

