#ifndef _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_envmon_oper {

class EnvironmentalMonitoringCli : public ydk::Entity
{
    public:
        EnvironmentalMonitoringCli();
        ~EnvironmentalMonitoringCli();

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

        class RackClis; //type: EnvironmentalMonitoringCli::RackClis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis> rack_clis;
        
}; // EnvironmentalMonitoringCli


class EnvironmentalMonitoringCli::RackClis : public ydk::Entity
{
    public:
        RackClis();
        ~RackClis();

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

        class RackCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli

        ydk::YList rack_cli;
        
}; // EnvironmentalMonitoringCli::RackClis


class EnvironmentalMonitoringCli::RackClis::RackCli : public ydk::Entity
{
    public:
        RackCli();
        ~RackCli();

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

        ydk::YLeaf rack; //type: uint32
        class SlotClis; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis> slot_clis;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis : public ydk::Entity
{
    public:
        SlotClis();
        ~SlotClis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlotCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli

        ydk::YList slot_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli : public ydk::Entity
{
    public:
        SlotCli();
        ~SlotCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: string
        class ModuleClis; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis> module_clis;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis : public ydk::Entity
{
    public:
        ModuleClis();
        ~ModuleClis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ModuleCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli

        ydk::YList module_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli : public ydk::Entity
{
    public:
        ModuleCli();
        ~ModuleCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module; //type: string
        class SensorTypeClis; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis
        class PowerCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis> sensor_type_clis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli> power_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis : public ydk::Entity
{
    public:
        SensorTypeClis();
        ~SensorTypeClis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorTypeCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli

        ydk::YList sensor_type_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli : public ydk::Entity
{
    public:
        SensorTypeCli();
        ~SensorTypeCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class SensorNameClis; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis> sensor_name_clis;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis : public ydk::Entity
{
    public:
        SensorNameClis();
        ~SensorNameClis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorNameCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli

        ydk::YList sensor_name_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli : public ydk::Entity
{
    public:
        SensorNameCli();
        ~SensorNameCli();

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
        ydk::YLeaf value_brief_cli; //type: string
        class ValueDetailedCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ValueDetailedCli
        class ThresholdClis; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ValueDetailedCli> value_detailed_cli;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis> threshold_clis;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ValueDetailedCli : public ydk::Entity
{
    public:
        ValueDetailedCli();
        ~ValueDetailedCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ValueDetailedCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis : public ydk::Entity
{
    public:
        ThresholdClis();
        ~ThresholdClis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli

        ydk::YList threshold_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli : public ydk::Entity
{
    public:
        ThresholdCli();
        ~ThresholdCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf trap_cli; //type: boolean
        ydk::YLeaf value_brief_cli; //type: string
        class ValueDetailedCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli::ValueDetailedCli

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli::ValueDetailedCli> value_detailed_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli::ValueDetailedCli : public ydk::Entity
{
    public:
        ValueDetailedCli();
        ~ValueDetailedCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::SensorTypeClis::SensorTypeCli::SensorNameClis::SensorNameCli::ThresholdClis::ThresholdCli::ValueDetailedCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli : public ydk::Entity
{
    public:
        PowerCli();
        ~PowerCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerBagCli; //type: EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli::PowerBagCli

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli::PowerBagCli> power_bag_cli;
        
}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli


class EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli::PowerBagCli : public ydk::Entity
{
    public:
        PowerBagCli();
        ~PowerBagCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_value; //type: int32
        ydk::YLeaf power_max_value; //type: int32
        ydk::YLeaf power_unit_multiplier; //type: uint32
        ydk::YLeaf power_accuracy; //type: uint32
        ydk::YLeaf power_measure_caliber; //type: uint32
        ydk::YLeaf power_current_type; //type: uint32
        ydk::YLeaf power_origin; //type: uint32
        ydk::YLeaf power_admin_state; //type: uint32
        ydk::YLeaf power_oper_state; //type: uint32
        ydk::YLeaf power_state_enter_reason; //type: string

}; // EnvironmentalMonitoringCli::RackClis::RackCli::SlotClis::SlotCli::ModuleClis::ModuleCli::PowerCli::PowerBagCli

class EnvironmentalMonitoring : public ydk::Entity
{
    public:
        EnvironmentalMonitoring();
        ~EnvironmentalMonitoring();

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

        class Racks; //type: EnvironmentalMonitoring::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks> racks;
        
}; // EnvironmentalMonitoring


class EnvironmentalMonitoring::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

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

        class Rack; //type: EnvironmentalMonitoring::Racks::Rack

        ydk::YList rack;
        
}; // EnvironmentalMonitoring::Racks


class EnvironmentalMonitoring::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: uint32
        class Slots; //type: EnvironmentalMonitoring::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots> slots;
        
}; // EnvironmentalMonitoring::Racks::Rack


class EnvironmentalMonitoring::Racks::Rack::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: string
        class Modules; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules> modules;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules : public ydk::Entity
{
    public:
        Modules();
        ~Modules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Module; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module

        ydk::YList module;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module; //type: string
        class Power; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power
        class SensorTypes; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power> power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes> sensor_types;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power : public ydk::Entity
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

        class PowerBag; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag> power_bag;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag : public ydk::Entity
{
    public:
        PowerBag();
        ~PowerBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_value; //type: int32
        ydk::YLeaf power_max_value; //type: int32
        ydk::YLeaf power_unit_multiplier; //type: uint32
        ydk::YLeaf power_accuracy; //type: uint32
        ydk::YLeaf power_measure_caliber; //type: uint32
        ydk::YLeaf power_current_type; //type: uint32
        ydk::YLeaf power_origin; //type: uint32
        ydk::YLeaf power_admin_state; //type: uint32
        ydk::YLeaf power_oper_state; //type: uint32
        ydk::YLeaf power_state_enter_reason; //type: string

}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes : public ydk::Entity
{
    public:
        SensorTypes();
        ~SensorTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorType; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType

        ydk::YList sensor_type;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType : public ydk::Entity
{
    public:
        SensorType();
        ~SensorType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class SensorNames; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames> sensor_names;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames : public ydk::Entity
{
    public:
        SensorNames();
        ~SensorNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorName; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName

        ydk::YList sensor_name;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName : public ydk::Entity
{
    public:
        SensorName();
        ~SensorName();

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
        ydk::YLeaf value_brief; //type: string
        class Thresholds; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds
        class ValueDetailed; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds> thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed> value_detailed;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold

        ydk::YList threshold;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf trap; //type: boolean
        ydk::YLeaf value_brief; //type: string
        class ValueDetailed; //type: EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed> value_detailed;
        
}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed : public ydk::Entity
{
    public:
        ValueDetailed();
        ~ValueDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed


class EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed : public ydk::Entity
{
    public:
        ValueDetailed();
        ~ValueDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_ */

