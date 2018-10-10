#ifndef _CISCO_IOS_XR_PERF_MEAS_CFG_
#define _CISCO_IOS_XR_PERF_MEAS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_perf_meas_cfg {

class PerformanceMeasurement : public ydk::Entity
{
    public:
        PerformanceMeasurement();
        ~PerformanceMeasurement();

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

        ydk::YLeaf enable_performance_measurement; //type: empty
        class DelayProfileInterface; //type: PerformanceMeasurement::DelayProfileInterface
        class Interfaces; //type: PerformanceMeasurement::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface> delay_profile_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::Interfaces> interfaces;
        
}; // PerformanceMeasurement


class PerformanceMeasurement::DelayProfileInterface : public ydk::Entity
{
    public:
        DelayProfileInterface();
        ~DelayProfileInterface();

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

        class Advertisement; //type: PerformanceMeasurement::DelayProfileInterface::Advertisement
        class Probe; //type: PerformanceMeasurement::DelayProfileInterface::Probe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface::Probe> probe;
        
}; // PerformanceMeasurement::DelayProfileInterface


class PerformanceMeasurement::DelayProfileInterface::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

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

        class Accelerated; //type: PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated
        class Periodic; //type: PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated> accelerated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic> periodic;
        
}; // PerformanceMeasurement::DelayProfileInterface::Advertisement


class PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated : public ydk::Entity
{
    public:
        Accelerated();
        ~Accelerated();

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

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf minimum_change; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated


class PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf minimum_change; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic


class PerformanceMeasurement::DelayProfileInterface::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

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

        ydk::YLeaf one_way_measurement; //type: empty
        ydk::YLeaf interval; //type: uint32
        class Burst; //type: PerformanceMeasurement::DelayProfileInterface::Probe::Burst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::DelayProfileInterface::Probe::Burst> burst;
        
}; // PerformanceMeasurement::DelayProfileInterface::Probe


class PerformanceMeasurement::DelayProfileInterface::Probe::Burst : public ydk::Entity
{
    public:
        Burst();
        ~Burst();

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

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // PerformanceMeasurement::DelayProfileInterface::Probe::Burst


class PerformanceMeasurement::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: PerformanceMeasurement::Interfaces::Interface

        ydk::YList interface;
        
}; // PerformanceMeasurement::Interfaces


class PerformanceMeasurement::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf enable_interface; //type: empty
        class DelayMeasurement; //type: PerformanceMeasurement::Interfaces::Interface::DelayMeasurement

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_cfg::PerformanceMeasurement::Interfaces::Interface::DelayMeasurement> delay_measurement;
        
}; // PerformanceMeasurement::Interfaces::Interface


class PerformanceMeasurement::Interfaces::Interface::DelayMeasurement : public ydk::Entity
{
    public:
        DelayMeasurement();
        ~DelayMeasurement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_delay_measurement; //type: empty
        ydk::YLeaf advertise_delay; //type: uint32

}; // PerformanceMeasurement::Interfaces::Interface::DelayMeasurement


}
}

#endif /* _CISCO_IOS_XR_PERF_MEAS_CFG_ */

