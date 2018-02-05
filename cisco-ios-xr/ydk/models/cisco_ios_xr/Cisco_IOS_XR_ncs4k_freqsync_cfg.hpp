#ifndef _CISCO_IOS_XR_NCS4K_FREQSYNC_CFG_
#define _CISCO_IOS_XR_NCS4K_FREQSYNC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs4k_freqsync_cfg {

class ClockInterface : public ydk::Entity
{
    public:
        ClockInterface();
        ~ClockInterface();

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

        class Clocks; //type: ClockInterface::Clocks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs4k_freqsync_cfg::ClockInterface::Clocks> clocks;
        
}; // ClockInterface


class ClockInterface::Clocks : public ydk::Entity
{
    public:
        Clocks();
        ~Clocks();

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

        class Clock; //type: ClockInterface::Clocks::Clock

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs4k_freqsync_cfg::ClockInterface::Clocks::Clock> > clock_;
        
}; // ClockInterface::Clocks


class ClockInterface::Clocks::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

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

        ydk::YLeaf clock_name; //type: string
        class FrequencySynchronization; //type: ClockInterface::Clocks::Clock::FrequencySynchronization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs4k_freqsync_cfg::ClockInterface::Clocks::Clock::FrequencySynchronization> frequency_synchronization;
        
}; // ClockInterface::Clocks::Clock


class ClockInterface::Clocks::Clock::FrequencySynchronization : public ydk::Entity
{
    public:
        FrequencySynchronization();
        ~FrequencySynchronization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_disable; //type: empty
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf time_of_day_priority; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf selection_input; //type: empty
        class InputQualityLevel; //type: ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel
        class OutputQualityLevel; //type: ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs4k_freqsync_cfg::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel> input_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs4k_freqsync_cfg::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel> output_quality_level;
        
}; // ClockInterface::Clocks::Clock::FrequencySynchronization


class ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel : public ydk::Entity
{
    public:
        InputQualityLevel();
        ~InputQualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf exact_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf min_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf max_quality_level_value; //type: FsyncQlValue

}; // ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel


class ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel : public ydk::Entity
{
    public:
        OutputQualityLevel();
        ~OutputQualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf exact_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf min_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf max_quality_level_value; //type: FsyncQlValue

}; // ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel

class FrequencySynchronization : public ydk::Entity
{
    public:
        FrequencySynchronization();
        ~FrequencySynchronization();

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

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf source_selection_logging; //type: FsyncSourceSelectionLogging
        ydk::YLeaf clock_interface_source_type; //type: FsyncClockSource
        ydk::YLeaf system_timing_mode; //type: FsyncSystemTimingMode

}; // FrequencySynchronization

class FsyncSystemTimingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf line_only;
        static const ydk::Enum::YLeaf clock_only;

};

class FsyncClockSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf independent;

};

class FsyncSourceSelectionLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf changes;
        static const ydk::Enum::YLeaf errors;

};


}
}

#endif /* _CISCO_IOS_XR_NCS4K_FREQSYNC_CFG_ */

