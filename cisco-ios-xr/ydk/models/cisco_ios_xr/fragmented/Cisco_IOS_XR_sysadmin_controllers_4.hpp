#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_4_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::Zen::ZenOper::ZenLocation : public ydk::Entity
{
    public:
        ZenLocation();
        ~ZenLocation();

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

        ydk::YLeaf zen_location; //type: string
        ydk::YLeaf zen_pci_base_address; //type: string
        ydk::YLeaf zen_pci_dev_vendor_id; //type: string
        ydk::YLeaf zen_pci_dev_device_id; //type: string
        ydk::YLeaf zen_hp_desc; //type: string
        ydk::YLeaf zen_handle; //type: string
        ydk::YLeaf zen_msi; //type: uint32
        ydk::YLeaf zen_irq; //type: string
        ydk::YLeaf zen_regs; //type: string
        ydk::YLeaf zen_trace; //type: string
        ydk::YLeaf zen_levm; //type: string
        ydk::YLeaf zen_sensor_poll_timer_tree; //type: string
        ydk::YLeaf zen_sensor_poll_timer; //type: string
        ydk::YLeaf zen_sensor_data; //type: string
        ydk::YLeaf zen_sim; //type: boolean
        ydk::YLeaf zen_debug; //type: boolean
        ydk::YLeaf zen_card_type; //type: uint32
        ydk::YLeaf zen_slot_num; //type: uint32
        ydk::YLeaf zen_pm_hdl; //type: string
        ydk::YLeaf zen_hdl; //type: string
        ydk::YLeaf zen_ccc_hdl; //type: string
        ydk::YLeaf zen_platform_local_hdl; //type: string
        ydk::YLeaf zen_cdui_srvr_hdl; //type: string
        class ZenTempSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault
        class ZenVoltSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault
        class ZenCurrSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault> zen_temp_sensor_default;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault> zen_volt_sensor_default;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault> zen_curr_sensor_default;
        
}; // Controller::Zen::ZenOper::ZenLocation


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault : public ydk::Entity
{
    public:
        ZenTempSensorDefault();
        ~ZenTempSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenTempSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData> zen_temp_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData : public ydk::Entity
{
    public:
        ZenTempSensorData();
        ~ZenTempSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenTempSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor> > zen_temp_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor : public ydk::Entity
{
    public:
        ZenTempSensor();
        ~ZenTempSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_temp_sensor; //type: string
        ydk::YLeaf zen_temp_sensor_id; //type: string
        ydk::YLeaf zen_temp_dev_addr; //type: uint32
        ydk::YLeaf zen_temp_poll_intvl; //type: uint32
        ydk::YLeaf zen_temp_delta; //type: uint32
        ydk::YLeaf zen_temp_raw_data; //type: uint32
        ydk::YLeaf zen_temp_sensor_value; //type: int32
        ydk::YLeaf zen_temp_unit; //type: int32
        ydk::YLeaf zen_temp_last_value; //type: uint32
        ydk::YLeaf zen_temp_send_update; //type: boolean
        ydk::YLeaf zen_temp_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault : public ydk::Entity
{
    public:
        ZenVoltSensorDefault();
        ~ZenVoltSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenVoltSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData> zen_volt_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData : public ydk::Entity
{
    public:
        ZenVoltSensorData();
        ~ZenVoltSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenVoltSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor> > zen_volt_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor : public ydk::Entity
{
    public:
        ZenVoltSensor();
        ~ZenVoltSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_volt_sensor; //type: int32
        ydk::YLeaf zen_volt_sensor_id; //type: string
        ydk::YLeaf zen_volt_dev_addr; //type: uint32
        ydk::YLeaf zen_volt_poll_intvl; //type: uint32
        ydk::YLeaf zen_volt_delta; //type: uint32
        ydk::YLeaf zen_volt_raw_data; //type: uint32
        ydk::YLeaf zen_volt_sensor_value; //type: int32
        ydk::YLeaf zen_volt_unit; //type: int32
        ydk::YLeaf zen_volt_last_value; //type: uint32
        ydk::YLeaf zen_volt_send_update; //type: boolean
        ydk::YLeaf zen_volt_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault : public ydk::Entity
{
    public:
        ZenCurrSensorDefault();
        ~ZenCurrSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenCurrSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData> zen_curr_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData : public ydk::Entity
{
    public:
        ZenCurrSensorData();
        ~ZenCurrSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenCurrSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor> > zen_curr_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor : public ydk::Entity
{
    public:
        ZenCurrSensor();
        ~ZenCurrSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_curr_sensor; //type: string
        ydk::YLeaf zen_curr_sensor_id; //type: string
        ydk::YLeaf zen_curr_dev_addr; //type: uint32
        ydk::YLeaf zen_curr_poll_intvl; //type: uint32
        ydk::YLeaf zen_curr_delta; //type: uint32
        ydk::YLeaf zen_curr_raw_data; //type: uint32
        ydk::YLeaf zen_curr_sensor_value; //type: int32
        ydk::YLeaf zen_curr_unit; //type: int32
        ydk::YLeaf zen_curr_last_value; //type: uint32
        ydk::YLeaf zen_curr_send_update; //type: boolean
        ydk::YLeaf zen_curr_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor


class Controller::Zen::Trace : public ydk::Entity
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
        class Location; //type: Controller::Zen::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::Trace::Location> > location;
        
}; // Controller::Zen::Trace


class Controller::Zen::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Zen::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::Trace::Location::AllOptions> > all_options;
        
}; // Controller::Zen::Trace::Location


class Controller::Zen::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Zen::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::Zen::Trace::Location::AllOptions


class Controller::Zen::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Zen::Trace::Location::AllOptions::TraceBlocks


class Controller::CccDriver : public ydk::Entity
{
    public:
        CccDriver();
        ~CccDriver();

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

        class Trace; //type: Controller::CccDriver::Trace
        class Bootflash; //type: Controller::CccDriver::Bootflash
        class Inventory; //type: Controller::CccDriver::Inventory
        class Power; //type: Controller::CccDriver::Power
        class ResetHistory; //type: Controller::CccDriver::ResetHistory
        class Register; //type: Controller::CccDriver::Register
        class Ejector; //type: Controller::CccDriver::Ejector
        class I2CDev; //type: Controller::CccDriver::I2CDev
        class Ethernet; //type: Controller::CccDriver::Ethernet
        class EventHistory; //type: Controller::CccDriver::EventHistory
        class OirHistory; //type: Controller::CccDriver::OirHistory
        class NotifHistory; //type: Controller::CccDriver::NotifHistory
        class Slave; //type: Controller::CccDriver::Slave
        class Action; //type: Controller::CccDriver::Action

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Trace> > trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash> bootflash;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power> power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory> reset_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ejector> ejector;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev> i2c_dev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::OirHistory> oir_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave> slave;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Action> action;
        
}; // Controller::CccDriver


class Controller::CccDriver::Trace : public ydk::Entity
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
        class Location; //type: Controller::CccDriver::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Trace::Location> > location;
        
}; // Controller::CccDriver::Trace


class Controller::CccDriver::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::CccDriver::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Trace::Location::AllOptions> > all_options;
        
}; // Controller::CccDriver::Trace::Location


class Controller::CccDriver::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::CccDriver::Trace::Location::AllOptions


class Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks


class Controller::CccDriver::Bootflash : public ydk::Entity
{
    public:
        Bootflash();
        ~Bootflash();

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

        class Info; //type: Controller::CccDriver::Bootflash::Info
        class Status; //type: Controller::CccDriver::Bootflash::Status
        class CreStatus; //type: Controller::CccDriver::Bootflash::CreStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::CreStatus> cre_status;
        
}; // Controller::CccDriver::Bootflash


class Controller::CccDriver::Bootflash::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

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

        class Location; //type: Controller::CccDriver::Bootflash::Info::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Info::Location> > location;
        
}; // Controller::CccDriver::Bootflash::Info


class Controller::CccDriver::Bootflash::Info::Location : public ydk::Entity
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
        class BfInfo; //type: Controller::CccDriver::Bootflash::Info::Location::BfInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Info::Location::BfInfo> bf_info;
        
}; // Controller::CccDriver::Bootflash::Info::Location


class Controller::CccDriver::Bootflash::Info::Location::BfInfo : public ydk::Entity
{
    public:
        BfInfo();
        ~BfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bf_info_values; //type: list of  string

}; // Controller::CccDriver::Bootflash::Info::Location::BfInfo


class Controller::CccDriver::Bootflash::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class Location; //type: Controller::CccDriver::Bootflash::Status::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Status::Location> > location;
        
}; // Controller::CccDriver::Bootflash::Status


class Controller::CccDriver::Bootflash::Status::Location : public ydk::Entity
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
        class BfStatus; //type: Controller::CccDriver::Bootflash::Status::Location::BfStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::Status::Location::BfStatus> bf_status;
        
}; // Controller::CccDriver::Bootflash::Status::Location


class Controller::CccDriver::Bootflash::Status::Location::BfStatus : public ydk::Entity
{
    public:
        BfStatus();
        ~BfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bf_status_values; //type: list of  string

}; // Controller::CccDriver::Bootflash::Status::Location::BfStatus


class Controller::CccDriver::Bootflash::CreStatus : public ydk::Entity
{
    public:
        CreStatus();
        ~CreStatus();

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

        class Location; //type: Controller::CccDriver::Bootflash::CreStatus::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::CreStatus::Location> > location;
        
}; // Controller::CccDriver::Bootflash::CreStatus


class Controller::CccDriver::Bootflash::CreStatus::Location : public ydk::Entity
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
        class BfStatus; //type: Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus> bf_status;
        
}; // Controller::CccDriver::Bootflash::CreStatus::Location


class Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus : public ydk::Entity
{
    public:
        BfStatus();
        ~BfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bf_status_values; //type: list of  string

}; // Controller::CccDriver::Bootflash::CreStatus::Location::BfStatus


class Controller::CccDriver::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Summary; //type: Controller::CccDriver::Inventory::Summary
        class Version; //type: Controller::CccDriver::Inventory::Version
        class Status; //type: Controller::CccDriver::Inventory::Status
        class Detail; //type: Controller::CccDriver::Inventory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Version> version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Detail> detail;
        
}; // Controller::CccDriver::Inventory


class Controller::CccDriver::Inventory::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class CccInvSummary; //type: Controller::CccDriver::Inventory::Summary::CccInvSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Summary::CccInvSummary> > ccc_inv_summary;
        
}; // Controller::CccDriver::Inventory::Summary


class Controller::CccDriver::Inventory::Summary::CccInvSummary : public ydk::Entity
{
    public:
        CccInvSummary();
        ~CccInvSummary();

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
        ydk::YLeaf ccc_inv_pid_string; //type: string
        ydk::YLeaf ccc_inv_slot_number; //type: uint32
        ydk::YLeaf ccc_inv_serial_number; //type: string
        ydk::YLeaf ccc_inv_hw_version; //type: string
        ydk::YLeaf ccc_inv_card_state; //type: string

}; // Controller::CccDriver::Inventory::Summary::CccInvSummary


class Controller::CccDriver::Inventory::Version : public ydk::Entity
{
    public:
        Version();
        ~Version();

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

        class CccInvVersion; //type: Controller::CccDriver::Inventory::Version::CccInvVersion

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Version::CccInvVersion> > ccc_inv_version;
        
}; // Controller::CccDriver::Inventory::Version


class Controller::CccDriver::Inventory::Version::CccInvVersion : public ydk::Entity
{
    public:
        CccInvVersion();
        ~CccInvVersion();

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
        ydk::YLeaf ccc_inv_pid_string; //type: string
        ydk::YLeaf ccc_inv_ccc_version; //type: string
        ydk::YLeaf ccc_inv_fpga_version; //type: string
        ydk::YLeaf ccc_inv_pon_version; //type: string
        ydk::YLeaf ccc_inv_switch_version; //type: string

}; // Controller::CccDriver::Inventory::Version::CccInvVersion


class Controller::CccDriver::Inventory::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class CccInvStatus; //type: Controller::CccDriver::Inventory::Status::CccInvStatus

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Status::CccInvStatus> > ccc_inv_status;
        
}; // Controller::CccDriver::Inventory::Status


class Controller::CccDriver::Inventory::Status::CccInvStatus : public ydk::Entity
{
    public:
        CccInvStatus();
        ~CccInvStatus();

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
        class CccInvStatusList; //type: Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList> ccc_inv_status_list;
        
}; // Controller::CccDriver::Inventory::Status::CccInvStatus


class Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList : public ydk::Entity
{
    public:
        CccInvStatusList();
        ~CccInvStatusList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ccc_inv_status_values; //type: list of  string

}; // Controller::CccDriver::Inventory::Status::CccInvStatus::CccInvStatusList


class Controller::CccDriver::Inventory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class CccInvDetail; //type: Controller::CccDriver::Inventory::Detail::CccInvDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Detail::CccInvDetail> > ccc_inv_detail;
        
}; // Controller::CccDriver::Inventory::Detail


class Controller::CccDriver::Inventory::Detail::CccInvDetail : public ydk::Entity
{
    public:
        CccInvDetail();
        ~CccInvDetail();

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
        class CccInvDetailList; //type: Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList> ccc_inv_detail_list;
        
}; // Controller::CccDriver::Inventory::Detail::CccInvDetail


class Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList : public ydk::Entity
{
    public:
        CccInvDetailList();
        ~CccInvDetailList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ccc_inv_detail_values; //type: list of  string

}; // Controller::CccDriver::Inventory::Detail::CccInvDetail::CccInvDetailList


class Controller::CccDriver::Power : public ydk::Entity
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

        class MasterAccess; //type: Controller::CccDriver::Power::MasterAccess

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess> master_access;
        
}; // Controller::CccDriver::Power


class Controller::CccDriver::Power::MasterAccess : public ydk::Entity
{
    public:
        MasterAccess();
        ~MasterAccess();

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

        class Summary; //type: Controller::CccDriver::Power::MasterAccess::Summary
        class Detail; //type: Controller::CccDriver::Power::MasterAccess::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess::Detail> detail;
        
}; // Controller::CccDriver::Power::MasterAccess


class Controller::CccDriver::Power::MasterAccess::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class PowerSummary; //type: Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary> > power_summary;
        
}; // Controller::CccDriver::Power::MasterAccess::Summary


class Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary : public ydk::Entity
{
    public:
        PowerSummary();
        ~PowerSummary();

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

        ydk::YLeaf ccc_power_location; //type: string
        ydk::YLeaf card_type; //type: string
        ydk::YLeaf power_state; //type: string

}; // Controller::CccDriver::Power::MasterAccess::Summary::PowerSummary


class Controller::CccDriver::Power::MasterAccess::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CccDriver::Power::MasterAccess::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess::Detail::Location> > location;
        
}; // Controller::CccDriver::Power::MasterAccess::Detail


class Controller::CccDriver::Power::MasterAccess::Detail::Location : public ydk::Entity
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
        class PowerDetails; //type: Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails> power_details;
        
}; // Controller::CccDriver::Power::MasterAccess::Detail::Location


class Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails : public ydk::Entity
{
    public:
        PowerDetails();
        ~PowerDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList power_details_values; //type: list of  string

}; // Controller::CccDriver::Power::MasterAccess::Detail::Location::PowerDetails


class Controller::CccDriver::ResetHistory : public ydk::Entity
{
    public:
        ResetHistory();
        ~ResetHistory();

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

        class Onchip; //type: Controller::CccDriver::ResetHistory::Onchip
        class Onboard; //type: Controller::CccDriver::ResetHistory::Onboard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onchip> onchip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onboard> onboard;
        
}; // Controller::CccDriver::ResetHistory


class Controller::CccDriver::ResetHistory::Onchip : public ydk::Entity
{
    public:
        Onchip();
        ~Onchip();

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

        class Location; //type: Controller::CccDriver::ResetHistory::Onchip::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onchip::Location> > location;
        
}; // Controller::CccDriver::ResetHistory::Onchip


class Controller::CccDriver::ResetHistory::Onchip::Location : public ydk::Entity
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

        ydk::YLeaf loc; //type: string
        ydk::YLeaf ccc_reset_timeofday; //type: string
        ydk::YLeaf ccc_reset_uptime; //type: string
        ydk::YLeaf ccc_hw_reset_count; //type: uint32
        class CccResetEntry; //type: Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry> > ccc_reset_entry;
        
}; // Controller::CccDriver::ResetHistory::Onchip::Location


class Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry : public ydk::Entity
{
    public:
        CccResetEntry();
        ~CccResetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_reset_entry; //type: int32
        ydk::YLeaf ccc_reset_pos; //type: uint32
        ydk::YLeaf ccc_reset_idx; //type: uint32
        ydk::YLeaf ccc_reset_word0; //type: uint32
        ydk::YLeaf ccc_reset_pidx; //type: uint32
        ydk::YLeaf ccc_reset_sor; //type: uint32
        ydk::YLeaf ccc_reset_sor_string; //type: string
        ydk::YLeaf ccc_reset_cmd; //type: uint32
        ydk::YLeaf ccc_reset_cmd_string; //type: string
        ydk::YLeaf ccc_reset_hrm; //type: uint32
        ydk::YLeaf ccc_reset_srm; //type: uint32
        ydk::YLeaf ccc_reset_hr; //type: uint32
        ydk::YLeaf ccc_reset_sr; //type: uint32
        ydk::YLeaf ccc_reset_word1; //type: uint32
        ydk::YLeaf ccc_reset_date; //type: string

}; // Controller::CccDriver::ResetHistory::Onchip::Location::CccResetEntry


class Controller::CccDriver::ResetHistory::Onboard : public ydk::Entity
{
    public:
        Onboard();
        ~Onboard();

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

        class Location; //type: Controller::CccDriver::ResetHistory::Onboard::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onboard::Location> > location;
        
}; // Controller::CccDriver::ResetHistory::Onboard


class Controller::CccDriver::ResetHistory::Onboard::Location : public ydk::Entity
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

        ydk::YLeaf loc; //type: string
        ydk::YLeaf ccc_reset_scratch_sig; //type: string
        ydk::YLeaf ccc_reset_scratch_version; //type: uint32
        ydk::YLeaf ccc_reset_history_sig; //type: string
        ydk::YLeaf ccc_reset_history_count; //type: uint32
        class CccResetOnboardEntry; //type: Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry> > ccc_reset_onboard_entry;
        
}; // Controller::CccDriver::ResetHistory::Onboard::Location


class Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry : public ydk::Entity
{
    public:
        CccResetOnboardEntry();
        ~CccResetOnboardEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_reset_onboard_entry; //type: int32
        ydk::YLeaf ccc_reset_pos; //type: uint32
        ydk::YLeaf ccc_reset_idx; //type: uint32
        ydk::YLeaf ccc_reset_word0; //type: uint32
        ydk::YLeaf ccc_reset_pidx; //type: uint32
        ydk::YLeaf ccc_reset_sor; //type: uint32
        ydk::YLeaf ccc_reset_sor_string; //type: string
        ydk::YLeaf ccc_reset_cmd; //type: uint32
        ydk::YLeaf ccc_reset_cmd_string; //type: string
        ydk::YLeaf ccc_reset_hrm; //type: uint32
        ydk::YLeaf ccc_reset_srm; //type: uint32
        ydk::YLeaf ccc_reset_hr; //type: uint32
        ydk::YLeaf ccc_reset_sr; //type: uint32
        ydk::YLeaf ccc_reset_word1; //type: uint32
        ydk::YLeaf ccc_reset_date; //type: string

}; // Controller::CccDriver::ResetHistory::Onboard::Location::CccResetOnboardEntry


class Controller::CccDriver::Register : public ydk::Entity
{
    public:
        Register();
        ~Register();

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

        class RegisterLocation; //type: Controller::CccDriver::Register::RegisterLocation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation> > register_location;
        
}; // Controller::CccDriver::Register


class Controller::CccDriver::Register::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class CccBlockNumber; //type: Controller::CccDriver::Register::RegisterLocation::CccBlockNumber
        class CccOffset; //type: Controller::CccDriver::Register::RegisterLocation::CccOffset
        class CccAddress; //type: Controller::CccDriver::Register::RegisterLocation::CccAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccBlockNumber> > ccc_block_number;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccOffset> > ccc_offset;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccAddress> > ccc_address;
        
}; // Controller::CccDriver::Register::RegisterLocation


class Controller::CccDriver::Register::RegisterLocation::CccBlockNumber : public ydk::Entity
{
    public:
        CccBlockNumber();
        ~CccBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf ccc_block_nm; //type: string
        class CccRegisterNumber; //type: Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber> > ccc_register_number;
        
}; // Controller::CccDriver::Register::RegisterLocation::CccBlockNumber


class Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber : public ydk::Entity
{
    public:
        CccRegisterNumber();
        ~CccRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf ccc_register_name; //type: string
        class CccData; //type: Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData> > ccc_data;
        
}; // Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber


class Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData : public ydk::Entity
{
    public:
        CccData();
        ~CccData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CccDriver::Register::RegisterLocation::CccBlockNumber::CccRegisterNumber::CccData


class Controller::CccDriver::Register::RegisterLocation::CccOffset : public ydk::Entity
{
    public:
        CccOffset();
        ~CccOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class CccRegOffsetData; //type: Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData> > ccc_reg_offset_data;
        
}; // Controller::CccDriver::Register::RegisterLocation::CccOffset


class Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData : public ydk::Entity
{
    public:
        CccRegOffsetData();
        ~CccRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CccDriver::Register::RegisterLocation::CccOffset::CccRegOffsetData


class Controller::CccDriver::Register::RegisterLocation::CccAddress : public ydk::Entity
{
    public:
        CccAddress();
        ~CccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class CccRegRangeAddrList; //type: Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList> > ccc_reg_range_addr_list;
        
}; // Controller::CccDriver::Register::RegisterLocation::CccAddress


class Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList : public ydk::Entity
{
    public:
        CccRegRangeAddrList();
        ~CccRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_reg_range_addr; //type: uint32
        class CccRegData; //type: Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData> > ccc_reg_data;
        
}; // Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList


class Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData : public ydk::Entity
{
    public:
        CccRegData();
        ~CccRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccc_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CccDriver::Register::RegisterLocation::CccAddress::CccRegRangeAddrList::CccRegData


class Controller::CccDriver::Ejector : public ydk::Entity
{
    public:
        Ejector();
        ~Ejector();

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

        class Status; //type: Controller::CccDriver::Ejector::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ejector::Status> status;
        
}; // Controller::CccDriver::Ejector


class Controller::CccDriver::Ejector::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class CccEjectorStatus; //type: Controller::CccDriver::Ejector::Status::CccEjectorStatus

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ejector::Status::CccEjectorStatus> > ccc_ejector_status;
        
}; // Controller::CccDriver::Ejector::Status


class Controller::CccDriver::Ejector::Status::CccEjectorStatus : public ydk::Entity
{
    public:
        CccEjectorStatus();
        ~CccEjectorStatus();

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
        ydk::YLeaf ccc_is_fc_card_type; //type: boolean
        ydk::YLeaf ccc_is_lc_card_type; //type: boolean
        ydk::YLeaf ccc_is_rp_sc_card_type; //type: boolean
        ydk::YLeaf ccc_ejc_card_type; //type: uint32
        ydk::YLeaf ccc_ejc_platform; //type: uint32
        ydk::YLeaf ccc_ejc_board_type; //type: string
        ydk::YLeaf ccc_ejc_card_slot; //type: uint32
        ydk::YLeaf ccc_ejc_card_version; //type: string
        ydk::YLeaf ccc_ejc_board_version; //type: string
        ydk::YLeaf ccc_ejc_hw_version; //type: string
        ydk::YLeaf ccc_ejc_core_version; //type: string
        ydk::YLeaf ccc_ejc_pon_version; //type: string
        ydk::YLeaf ccc_ejc_rp_supported; //type: string
        ydk::YLeaf ccc_ejc_enable; //type: string
        ydk::YLeaf ccc_ejc_status; //type: string
        ydk::YLeaf ccc_ejc_rp_pex_csr; //type: string
        ydk::YLeaf ccc_ejc_gp_live; //type: string
        ydk::YLeaf ccc_ejc_gp_status; //type: string
        ydk::YLeaf ccc_ejc_fc_pex_csr; //type: string
        ydk::YLeaf ccc_ejc_fc_ejector_support; //type: string
        ydk::YLeaf ccc_ejc_lc_pex_csr; //type: string
        ydk::YLeaf ccc_ejc_lc_ejector_support; //type: string

}; // Controller::CccDriver::Ejector::Status::CccEjectorStatus


class Controller::CccDriver::I2CDev : public ydk::Entity
{
    public:
        I2CDev();
        ~I2CDev();

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

        class CpuComplex; //type: Controller::CccDriver::I2CDev::CpuComplex
        class Ioexpander; //type: Controller::CccDriver::I2CDev::Ioexpander

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::CpuComplex> cpu_complex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::Ioexpander> ioexpander;
        
}; // Controller::CccDriver::I2CDev


class Controller::CccDriver::I2CDev::CpuComplex : public ydk::Entity
{
    public:
        CpuComplex();
        ~CpuComplex();

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

        class Location; //type: Controller::CccDriver::I2CDev::CpuComplex::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::CpuComplex::Location> > location;
        
}; // Controller::CccDriver::I2CDev::CpuComplex


class Controller::CccDriver::I2CDev::CpuComplex::Location : public ydk::Entity
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
        class CpuComplexDetail; //type: Controller::CccDriver::I2CDev::CpuComplex::Location::CpuComplexDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::CpuComplex::Location::CpuComplexDetail> cpu_complex_detail;
        
}; // Controller::CccDriver::I2CDev::CpuComplex::Location


class Controller::CccDriver::I2CDev::CpuComplex::Location::CpuComplexDetail : public ydk::Entity
{
    public:
        CpuComplexDetail();
        ~CpuComplexDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cpu_complex_values; //type: list of  string

}; // Controller::CccDriver::I2CDev::CpuComplex::Location::CpuComplexDetail


class Controller::CccDriver::I2CDev::Ioexpander : public ydk::Entity
{
    public:
        Ioexpander();
        ~Ioexpander();

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

        class Location; //type: Controller::CccDriver::I2CDev::Ioexpander::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::Ioexpander::Location> > location;
        
}; // Controller::CccDriver::I2CDev::Ioexpander


class Controller::CccDriver::I2CDev::Ioexpander::Location : public ydk::Entity
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
        class IoExpVal; //type: Controller::CccDriver::I2CDev::Ioexpander::Location::IoExpVal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2CDev::Ioexpander::Location::IoExpVal> io_exp_val;
        
}; // Controller::CccDriver::I2CDev::Ioexpander::Location


class Controller::CccDriver::I2CDev::Ioexpander::Location::IoExpVal : public ydk::Entity
{
    public:
        IoExpVal();
        ~IoExpVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList io_exp_details; //type: list of  string

}; // Controller::CccDriver::I2CDev::Ioexpander::Location::IoExpVal


class Controller::CccDriver::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        class EthernetStatus; //type: Controller::CccDriver::Ethernet::EthernetStatus
        class EthernetCounters; //type: Controller::CccDriver::Ethernet::EthernetCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetStatus> ethernet_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetCounters> ethernet_counters;
        
}; // Controller::CccDriver::Ethernet


class Controller::CccDriver::Ethernet::EthernetStatus : public ydk::Entity
{
    public:
        EthernetStatus();
        ~EthernetStatus();

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

        class Location; //type: Controller::CccDriver::Ethernet::EthernetStatus::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetStatus::Location> > location;
        
}; // Controller::CccDriver::Ethernet::EthernetStatus


class Controller::CccDriver::Ethernet::EthernetStatus::Location : public ydk::Entity
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
        class EthernetStatus_; //type: Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_> ethernet_status;
        
}; // Controller::CccDriver::Ethernet::EthernetStatus::Location


class Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_ : public ydk::Entity
{
    public:
        EthernetStatus_();
        ~EthernetStatus_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ethernet_status_values; //type: list of  string

}; // Controller::CccDriver::Ethernet::EthernetStatus::Location::EthernetStatus_


class Controller::CccDriver::Ethernet::EthernetCounters : public ydk::Entity
{
    public:
        EthernetCounters();
        ~EthernetCounters();

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

        class Location; //type: Controller::CccDriver::Ethernet::EthernetCounters::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetCounters::Location> > location;
        
}; // Controller::CccDriver::Ethernet::EthernetCounters


class Controller::CccDriver::Ethernet::EthernetCounters::Location : public ydk::Entity
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
        class EthernetCounters_; //type: Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_> ethernet_counters;
        
}; // Controller::CccDriver::Ethernet::EthernetCounters::Location


class Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_ : public ydk::Entity
{
    public:
        EthernetCounters_();
        ~EthernetCounters_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ethernet_counter_values; //type: list of  string

}; // Controller::CccDriver::Ethernet::EthernetCounters::Location::EthernetCounters_


class Controller::CccDriver::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

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

        class Brief; //type: Controller::CccDriver::EventHistory::Brief
        class Detail; //type: Controller::CccDriver::EventHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Detail> detail;
        
}; // Controller::CccDriver::EventHistory


class Controller::CccDriver::EventHistory::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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

        class Location; //type: Controller::CccDriver::EventHistory::Brief::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Brief::Location> > location;
        
}; // Controller::CccDriver::EventHistory::Brief


class Controller::CccDriver::EventHistory::Brief::Location : public ydk::Entity
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
        class CardEventHistBrief; //type: Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief> card_event_hist_brief;
        
}; // Controller::CccDriver::EventHistory::Brief::Location


class Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief : public ydk::Entity
{
    public:
        CardEventHistBrief();
        ~CardEventHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_brief_values; //type: list of  string

}; // Controller::CccDriver::EventHistory::Brief::Location::CardEventHistBrief


class Controller::CccDriver::EventHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CccDriver::EventHistory::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Detail::Location> > location;
        
}; // Controller::CccDriver::EventHistory::Detail


class Controller::CccDriver::EventHistory::Detail::Location : public ydk::Entity
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
        class CardEventHistDetail; //type: Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
}; // Controller::CccDriver::EventHistory::Detail::Location


class Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail : public ydk::Entity
{
    public:
        CardEventHistDetail();
        ~CardEventHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_detail_values; //type: list of  string

}; // Controller::CccDriver::EventHistory::Detail::Location::CardEventHistDetail


class Controller::CccDriver::OirHistory : public ydk::Entity
{
    public:
        OirHistory();
        ~OirHistory();

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

        class Rack; //type: Controller::CccDriver::OirHistory::Rack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::OirHistory::Rack> > rack;
        
}; // Controller::CccDriver::OirHistory


class Controller::CccDriver::OirHistory::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf rack; //type: string
        class CardOirHist; //type: Controller::CccDriver::OirHistory::Rack::CardOirHist

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::OirHistory::Rack::CardOirHist> card_oir_hist;
        
}; // Controller::CccDriver::OirHistory::Rack


class Controller::CccDriver::OirHistory::Rack::CardOirHist : public ydk::Entity
{
    public:
        CardOirHist();
        ~CardOirHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_oir_events; //type: list of  string

}; // Controller::CccDriver::OirHistory::Rack::CardOirHist


class Controller::CccDriver::NotifHistory : public ydk::Entity
{
    public:
        NotifHistory();
        ~NotifHistory();

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

        class Brief; //type: Controller::CccDriver::NotifHistory::Brief
        class Detail; //type: Controller::CccDriver::NotifHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Detail> detail;
        
}; // Controller::CccDriver::NotifHistory


class Controller::CccDriver::NotifHistory::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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

        class Location; //type: Controller::CccDriver::NotifHistory::Brief::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Brief::Location> > location;
        
}; // Controller::CccDriver::NotifHistory::Brief


class Controller::CccDriver::NotifHistory::Brief::Location : public ydk::Entity
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
        class CardNotifHistBrief; //type: Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief> card_notif_hist_brief;
        
}; // Controller::CccDriver::NotifHistory::Brief::Location


class Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief : public ydk::Entity
{
    public:
        CardNotifHistBrief();
        ~CardNotifHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_brief_values; //type: list of  string

}; // Controller::CccDriver::NotifHistory::Brief::Location::CardNotifHistBrief


class Controller::CccDriver::NotifHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CccDriver::NotifHistory::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Detail::Location> > location;
        
}; // Controller::CccDriver::NotifHistory::Detail


class Controller::CccDriver::NotifHistory::Detail::Location : public ydk::Entity
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
        class CardNotifHistDetail; //type: Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail> card_notif_hist_detail;
        
}; // Controller::CccDriver::NotifHistory::Detail::Location


class Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail : public ydk::Entity
{
    public:
        CardNotifHistDetail();
        ~CardNotifHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_detail_values; //type: list of  string

}; // Controller::CccDriver::NotifHistory::Detail::Location::CardNotifHistDetail


class Controller::CccDriver::Slave : public ydk::Entity
{
    public:
        Slave();
        ~Slave();

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

        class EventHistory; //type: Controller::CccDriver::Slave::EventHistory
        class NotifHistory; //type: Controller::CccDriver::Slave::NotifHistory
        class OirHistory; //type: Controller::CccDriver::Slave::OirHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::OirHistory> oir_history;
        
}; // Controller::CccDriver::Slave


class Controller::CccDriver::Slave::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

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

        class Brief; //type: Controller::CccDriver::Slave::EventHistory::Brief
        class Detail; //type: Controller::CccDriver::Slave::EventHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Detail> detail;
        
}; // Controller::CccDriver::Slave::EventHistory


class Controller::CccDriver::Slave::EventHistory::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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

        class Location; //type: Controller::CccDriver::Slave::EventHistory::Brief::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Brief::Location> > location;
        
}; // Controller::CccDriver::Slave::EventHistory::Brief


class Controller::CccDriver::Slave::EventHistory::Brief::Location : public ydk::Entity
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
        class CardEventHistBrief; //type: Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief> card_event_hist_brief;
        
}; // Controller::CccDriver::Slave::EventHistory::Brief::Location


class Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief : public ydk::Entity
{
    public:
        CardEventHistBrief();
        ~CardEventHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_brief_values; //type: list of  string

}; // Controller::CccDriver::Slave::EventHistory::Brief::Location::CardEventHistBrief


class Controller::CccDriver::Slave::EventHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CccDriver::Slave::EventHistory::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Detail::Location> > location;
        
}; // Controller::CccDriver::Slave::EventHistory::Detail


class Controller::CccDriver::Slave::EventHistory::Detail::Location : public ydk::Entity
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
        class CardEventHistDetail; //type: Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
}; // Controller::CccDriver::Slave::EventHistory::Detail::Location


class Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail : public ydk::Entity
{
    public:
        CardEventHistDetail();
        ~CardEventHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_detail_values; //type: list of  string

}; // Controller::CccDriver::Slave::EventHistory::Detail::Location::CardEventHistDetail


class Controller::CccDriver::Slave::NotifHistory : public ydk::Entity
{
    public:
        NotifHistory();
        ~NotifHistory();

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

        class Brief; //type: Controller::CccDriver::Slave::NotifHistory::Brief
        class Detail; //type: Controller::CccDriver::Slave::NotifHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Detail> detail;
        
}; // Controller::CccDriver::Slave::NotifHistory


class Controller::CccDriver::Slave::NotifHistory::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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

        class Location; //type: Controller::CccDriver::Slave::NotifHistory::Brief::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Brief::Location> > location;
        
}; // Controller::CccDriver::Slave::NotifHistory::Brief


class Controller::CccDriver::Slave::NotifHistory::Brief::Location : public ydk::Entity
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
        class CardNotifHistBrief; //type: Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief> card_notif_hist_brief;
        
}; // Controller::CccDriver::Slave::NotifHistory::Brief::Location


class Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief : public ydk::Entity
{
    public:
        CardNotifHistBrief();
        ~CardNotifHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_brief_values; //type: list of  string

}; // Controller::CccDriver::Slave::NotifHistory::Brief::Location::CardNotifHistBrief


class Controller::CccDriver::Slave::NotifHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CccDriver::Slave::NotifHistory::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Detail::Location> > location;
        
}; // Controller::CccDriver::Slave::NotifHistory::Detail


class Controller::CccDriver::Slave::NotifHistory::Detail::Location : public ydk::Entity
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
        class CardNotifHistDetail; //type: Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail> card_notif_hist_detail;
        
}; // Controller::CccDriver::Slave::NotifHistory::Detail::Location


class Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail : public ydk::Entity
{
    public:
        CardNotifHistDetail();
        ~CardNotifHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_detail_values; //type: list of  string

}; // Controller::CccDriver::Slave::NotifHistory::Detail::Location::CardNotifHistDetail


class Controller::CccDriver::Slave::OirHistory : public ydk::Entity
{
    public:
        OirHistory();
        ~OirHistory();

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

        class Rack; //type: Controller::CccDriver::Slave::OirHistory::Rack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::OirHistory::Rack> > rack;
        
}; // Controller::CccDriver::Slave::OirHistory


class Controller::CccDriver::Slave::OirHistory::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf rack; //type: string
        class CardOirHist; //type: Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist> card_oir_hist;
        
}; // Controller::CccDriver::Slave::OirHistory::Rack


class Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist : public ydk::Entity
{
    public:
        CardOirHist();
        ~CardOirHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_oir_events; //type: list of  string

}; // Controller::CccDriver::Slave::OirHistory::Rack::CardOirHist


class Controller::CccDriver::Action : public ydk::Entity
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

        class Register; //type: Controller::CccDriver::Action::Register

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Action::Register> register_;
        
}; // Controller::CccDriver::Action


class Controller::CccDriver::Action::Register : public ydk::Entity
{
    public:
        Register();
        ~Register();

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

        class Location; //type: Controller::CccDriver::Action::Register::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Action::Register::Location> > location;
        
}; // Controller::CccDriver::Action::Register


class Controller::CccDriver::Action::Register::Location : public ydk::Entity
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

}; // Controller::CccDriver::Action::Register::Location


class Controller::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        class Oper; //type: Controller::Switch::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper> oper;
        
}; // Controller::Switch


class Controller::Switch::Oper : public ydk::Entity
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

        class Reachable; //type: Controller::Switch::Oper::Reachable
        class Summary; //type: Controller::Switch::Oper::Summary
        class Statistics; //type: Controller::Switch::Oper::Statistics
        class Serdes; //type: Controller::Switch::Oper::Serdes
        class Mac; //type: Controller::Switch::Oper::Mac
        class Bridge; //type: Controller::Switch::Oper::Bridge
        class Fdb; //type: Controller::Switch::Oper::Fdb
        class Vlan; //type: Controller::Switch::Oper::Vlan
        class Sdr; //type: Controller::Switch::Oper::Sdr
        class Sfp; //type: Controller::Switch::Oper::Sfp
        class Mlap; //type: Controller::Switch::Oper::Mlap
        class SwitchDebugCont; //type: Controller::Switch::Oper::SwitchDebugCont
        class Esd; //type: Controller::Switch::Oper::Esd
        class MgmtAgent; //type: Controller::Switch::Oper::MgmtAgent
        class PortState; //type: Controller::Switch::Oper::PortState
        class Trunk; //type: Controller::Switch::Oper::Trunk

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Reachable> reachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Serdes> serdes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Bridge> bridge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb> fdb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr> sdr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap> mlap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::SwitchDebugCont> switch_debug_cont;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Esd> esd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent> mgmt_agent;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::PortState> port_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Trunk> trunk;
        
}; // Controller::Switch::Oper


class Controller::Switch::Oper::Reachable : public ydk::Entity
{
    public:
        Reachable();
        ~Reachable();

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

        class Location; //type: Controller::Switch::Oper::Reachable::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Reachable::Location> > location;
        
}; // Controller::Switch::Oper::Reachable


class Controller::Switch::Oper::Reachable::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum

}; // Controller::Switch::Oper::Reachable::Location


class Controller::Switch::Oper::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class Location; //type: Controller::Switch::Oper::Summary::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Summary::Location> > location;
        
}; // Controller::Switch::Oper::Summary


class Controller::Switch::Oper::Summary::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Summary::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Summary::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::Summary::Location


class Controller::Switch::Oper::Summary::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf admin_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf forwarding; //type: SwitchForwardingState
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Summary::Location::PortIter


class Controller::Switch::Oper::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class SummaryStatistics; //type: Controller::Switch::Oper::Statistics::SummaryStatistics
        class Detail; //type: Controller::Switch::Oper::Statistics::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::SummaryStatistics> summary_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::Detail> detail;
        
}; // Controller::Switch::Oper::Statistics


class Controller::Switch::Oper::Statistics::SummaryStatistics : public ydk::Entity
{
    public:
        SummaryStatistics();
        ~SummaryStatistics();

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

        class Location; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::SummaryStatistics::Location> > location;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf state_changes; //type: uint32
        ydk::YLeaf sw_sum_tx_packets; //type: uint64
        ydk::YLeaf sw_sum_rx_packets; //type: uint64
        ydk::YLeaf sw_sum_tx_drops_errors; //type: uint64
        ydk::YLeaf sw_sum_rx_drops_errors; //type: uint64
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::Switch::Oper::Statistics::Detail::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::Detail::Location> > location;
        
}; // Controller::Switch::Oper::Statistics::Detail


class Controller::Switch::Oper::Statistics::Detail::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::Detail::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf connects_to; //type: string
        class Counters; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters> counters;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sw_det_rx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_flow_control; //type: uint64
        ydk::YLeaf sw_det_rx_good_octets; //type: uint64
        ydk::YLeaf sw_det_rx_bad_octets; //type: uint64
        ydk::YLeaf sw_det_rx_fifo_overrun; //type: uint64
        ydk::YLeaf sw_det_rx_undersize; //type: uint64
        ydk::YLeaf sw_det_rx_fragments; //type: uint64
        ydk::YLeaf sw_det_rx_oversize; //type: uint64
        ydk::YLeaf sw_det_rx_jabber; //type: uint64
        ydk::YLeaf sw_det_rx_errors; //type: uint64
        ydk::YLeaf sw_det_rx_bad_crc; //type: uint64
        ydk::YLeaf sw_det_rx_collisions; //type: uint64
        ydk::YLeaf sw_det_rx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_tx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_flow_control; //type: uint64
        ydk::YLeaf sw_det_tx_good_octets; //type: uint64
        ydk::YLeaf sw_det_tx_deferred; //type: uint64
        ydk::YLeaf sw_det_tx_fifo_unrun; //type: uint64
        ydk::YLeaf sw_det_tx_mult_collision; //type: uint64
        ydk::YLeaf sw_det_tx_excess_collision; //type: uint64
        ydk::YLeaf sw_det_tx_late_collisions; //type: uint64
        ydk::YLeaf sw_det_tx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_txq_drops; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_64; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_65_127; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_128_255; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_256_511; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_512_1023; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_1024_max; //type: uint64

}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters


class Controller::Switch::Oper::Serdes : public ydk::Entity
{
    public:
        Serdes();
        ~Serdes();

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

        class SerdesStatistics; //type: Controller::Switch::Oper::Serdes::SerdesStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Serdes::SerdesStatistics> serdes_statistics;
        
}; // Controller::Switch::Oper::Serdes


class Controller::Switch::Oper::Serdes::SerdesStatistics : public ydk::Entity
{
    public:
        SerdesStatistics();
        ~SerdesStatistics();

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

        class Location; //type: Controller::Switch::Oper::Serdes::SerdesStatistics::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Serdes::SerdesStatistics::Location> > location;
        
}; // Controller::Switch::Oper::Serdes::SerdesStatistics


class Controller::Switch::Oper::Serdes::SerdesStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::Serdes::SerdesStatistics::Location


class Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class SerdesEntry; //type: Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry> > serdes_entry;
        
}; // Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter


class Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry : public ydk::Entity
{
    public:
        SerdesEntry();
        ~SerdesEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf base_reg; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf lane_0; //type: string
        ydk::YLeaf lane_1; //type: string
        ydk::YLeaf lane_2; //type: string
        ydk::YLeaf lane_3; //type: string

}; // Controller::Switch::Oper::Serdes::SerdesStatistics::Location::PortIter::SerdesEntry


class Controller::Switch::Oper::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class MacStatistics; //type: Controller::Switch::Oper::Mac::MacStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mac::MacStatistics> mac_statistics;
        
}; // Controller::Switch::Oper::Mac


class Controller::Switch::Oper::Mac::MacStatistics : public ydk::Entity
{
    public:
        MacStatistics();
        ~MacStatistics();

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

        class Location; //type: Controller::Switch::Oper::Mac::MacStatistics::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mac::MacStatistics::Location> > location;
        
}; // Controller::Switch::Oper::Mac::MacStatistics


class Controller::Switch::Oper::Mac::MacStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class MacEntry; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry> > mac_entry;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry : public ydk::Entity
{
    public:
        MacEntry();
        ~MacEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf base_reg; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf value_; //type: string

}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry


class Controller::Switch::Oper::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        class Statistics; //type: Controller::Switch::Oper::Bridge::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Bridge::Statistics> statistics;
        
}; // Controller::Switch::Oper::Bridge


class Controller::Switch::Oper::Bridge::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class Location; //type: Controller::Switch::Oper::Bridge::Statistics::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Bridge::Statistics::Location> > location;
        
}; // Controller::Switch::Oper::Bridge::Statistics


class Controller::Switch::Oper::Bridge::Statistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class IngressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId
        class EgressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId> > ingress_set_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId> > egress_set_id;
        
}; // Controller::Switch::Oper::Bridge::Statistics::Location


class Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId : public ydk::Entity
{
    public:
        IngressSetId();
        ~IngressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress_set; //type: uint32
        ydk::YLeaf ingress_set_name; //type: string
        ydk::YLeaf ingress_frames; //type: uint64
        ydk::YLeaf ingress_vlan_discards; //type: uint64
        ydk::YLeaf ingress_security_discards; //type: uint64
        ydk::YLeaf ingress_other_discards; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId


class Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId : public ydk::Entity
{
    public:
        EgressSetId();
        ~EgressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf egress_set; //type: uint32
        ydk::YLeaf egress_set_name; //type: string
        ydk::YLeaf egress_ucast_frames; //type: uint64
        ydk::YLeaf egress_mcast_frames; //type: uint64
        ydk::YLeaf egress_bcast_frames; //type: uint64
        ydk::YLeaf egress_discarded_frames; //type: uint64
        ydk::YLeaf egress_txq_congestion; //type: uint64
        ydk::YLeaf egress_ctrl_packets; //type: uint64
        ydk::YLeaf egress_other_drops; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId


class Controller::Switch::Oper::Fdb : public ydk::Entity
{
    public:
        Fdb();
        ~Fdb();

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

        class Vlan; //type: Controller::Switch::Oper::Fdb::Vlan
        class Mac; //type: Controller::Switch::Oper::Fdb::Mac
        class Port; //type: Controller::Switch::Oper::Fdb::Port
        class Statistics; //type: Controller::Switch::Oper::Fdb::Statistics
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_4_ */

