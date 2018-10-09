#ifndef _CISCO_IOS_XR_CONFIG_MDA_CFG_
#define _CISCO_IOS_XR_CONFIG_MDA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_mda_cfg {

class ActiveNodes : public ydk::Entity
{
    public:
        ActiveNodes();
        ~ActiveNodes();

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

        class ActiveNode; //type: ActiveNodes::ActiveNode

        ydk::YList active_node;
        
}; // ActiveNodes


class ActiveNodes::ActiveNode : public ydk::Entity
{
    public:
        ActiveNode();
        ~ActiveNode();

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

        ydk::YLeaf node_name; //type: string
        class WatchdogNodeThreshold; //type: ActiveNodes::ActiveNode::WatchdogNodeThreshold
        class Ltrace; //type: ActiveNodes::ActiveNode::Ltrace
        class ClockInterface; //type: ActiveNodes::ActiveNode::ClockInterface
        class SsrpGroup; //type: ActiveNodes::ActiveNode::SsrpGroup
        class LptsLocal; //type: ActiveNodes::ActiveNode::LptsLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::WatchdogNodeThreshold> watchdog_node_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace> ltrace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface> clock_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup> ssrp_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal> lpts_local;
        
}; // ActiveNodes::ActiveNode


class ActiveNodes::ActiveNode::WatchdogNodeThreshold : public ydk::Entity
{
    public:
        WatchdogNodeThreshold();
        ~WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiskThreshold; //type: ActiveNodes::ActiveNode::WatchdogNodeThreshold::DiskThreshold
        class MemoryThreshold; //type: ActiveNodes::ActiveNode::WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::WatchdogNodeThreshold::DiskThreshold> disk_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // ActiveNodes::ActiveNode::WatchdogNodeThreshold


class ActiveNodes::ActiveNode::WatchdogNodeThreshold::DiskThreshold : public ydk::Entity
{
    public:
        DiskThreshold();
        ~DiskThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint32

}; // ActiveNodes::ActiveNode::WatchdogNodeThreshold::DiskThreshold


class ActiveNodes::ActiveNode::WatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint32

}; // ActiveNodes::ActiveNode::WatchdogNodeThreshold::MemoryThreshold


class ActiveNodes::ActiveNode::Ltrace : public ydk::Entity
{
    public:
        Ltrace();
        ~Ltrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationParams; //type: ActiveNodes::ActiveNode::Ltrace::AllocationParams

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace::AllocationParams> allocation_params;
        
}; // ActiveNodes::ActiveNode::Ltrace


class ActiveNodes::ActiveNode::Ltrace::AllocationParams : public ydk::Entity
{
    public:
        AllocationParams();
        ~AllocationParams();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: InfraLtraceMode
        ydk::YLeaf scale_factor; //type: InfraLtraceScale

}; // ActiveNodes::ActiveNode::Ltrace::AllocationParams


class ActiveNodes::ActiveNode::ClockInterface : public ydk::Entity
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

        class Clocks; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks> clocks;
        
}; // ActiveNodes::ActiveNode::ClockInterface


class ActiveNodes::ActiveNode::ClockInterface::Clocks : public ydk::Entity
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

        class Clock; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock

        ydk::YList clock_;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock : public ydk::Entity
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

        ydk::YLeaf clock_type; //type: FsyncClock
        ydk::YLeaf port; //type: uint32
        class FrequencySynchronization; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization
        class SyncController; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization> frequency_synchronization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController> sync_controller;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization : public ydk::Entity
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

        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf selection_input; //type: empty
        ydk::YLeaf time_of_day_priority; //type: uint32
        ydk::YLeaf ssm_disable; //type: empty
        class OutputQualityLevel; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel
        class InputQualityLevel; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel> output_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel> input_quality_level;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController : public ydk::Entity
{
    public:
        SyncController();
        ~SyncController();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TransportMode; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode> transport_mode;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode : public ydk::Entity
{
    public:
        TransportMode();
        ~TransportMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrequencyMode; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode> frequency_mode;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode : public ydk::Entity
{
    public:
        FrequencyMode();
        ~FrequencyMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        class PortMode; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode> port_mode; // presence node
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode : public ydk::Entity
{
    public:
        PortMode();
        ~PortMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option1; //type: uint32
        ydk::YLeaf option2; //type: uint32
        ydk::YLeaf option3; //type: uint32
        ydk::YLeaf option4; //type: uint32
        ydk::YLeaf option5; //type: uint32

}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode


class ActiveNodes::ActiveNode::SsrpGroup : public ydk::Entity
{
    public:
        SsrpGroup();
        ~SsrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Groups; //type: ActiveNodes::ActiveNode::SsrpGroup::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup::Groups> groups;
        
}; // ActiveNodes::ActiveNode::SsrpGroup


class ActiveNodes::ActiveNode::SsrpGroup::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: ActiveNodes::ActiveNode::SsrpGroup::Groups::Group

        ydk::YList group;
        
}; // ActiveNodes::ActiveNode::SsrpGroup::Groups


class ActiveNodes::ActiveNode::SsrpGroup::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf profile; //type: string

}; // ActiveNodes::ActiveNode::SsrpGroup::Groups::Group


class ActiveNodes::ActiveNode::LptsLocal : public ydk::Entity
{
    public:
        LptsLocal();
        ~LptsLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpolicerLocalTables; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables
        class DynamicFlowsTables; //type: ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables
        class IpolicerLocal; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables> dynamic_flows_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
        
}; // ActiveNodes::ActiveNode::LptsLocal


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables : public ydk::Entity
{
    public:
        IpolicerLocalTables();
        ~IpolicerLocalTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpolicerLocalTable; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable

        ydk::YList ipolicer_local_table;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable : public ydk::Entity
{
    public:
        IpolicerLocalTable();
        ~IpolicerLocalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: string
        class NpFlows; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows> np_flows;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows : public ydk::Entity
{
    public:
        NpFlows();
        ~NpFlows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpFlow; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow

        ydk::YList np_flow;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow : public ydk::Entity
{
    public:
        NpFlow();
        ~NpFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf np_rate; //type: uint32

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow


class ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables : public ydk::Entity
{
    public:
        DynamicFlowsTables();
        ~DynamicFlowsTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicFlowsTable; //type: ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable

        ydk::YList dynamic_flows_table;
        
}; // ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables


class ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable : public ydk::Entity
{
    public:
        DynamicFlowsTable();
        ~DynamicFlowsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_type; //type: LptsDynamicFlowConfig
        class FlowType; //type: ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType

        ydk::YList flow_type;
        
}; // ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable


class ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType : public ydk::Entity
{
    public:
        FlowType();
        ~FlowType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf max; //type: uint32

}; // ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal : public ydk::Entity
{
    public:
        IpolicerLocal();
        ~IpolicerLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Flows; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows> flows;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow

        ydk::YList flow;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf rate; //type: uint32
        class Precedences; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences : public ydk::Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList precedence; //type: list of  one of uint32, enumeration

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences

class PreconfiguredNodes : public ydk::Entity
{
    public:
        PreconfiguredNodes();
        ~PreconfiguredNodes();

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

        class PreconfiguredNode; //type: PreconfiguredNodes::PreconfiguredNode

        ydk::YList preconfigured_node;
        
}; // PreconfiguredNodes


class PreconfiguredNodes::PreconfiguredNode : public ydk::Entity
{
    public:
        PreconfiguredNode();
        ~PreconfiguredNode();

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

        ydk::YLeaf node_name; //type: string
        class WatchdogNodeThreshold; //type: PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold
        class Ltrace; //type: PreconfiguredNodes::PreconfiguredNode::Ltrace
        class ClockInterface; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface
        class LptsLocal; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold> watchdog_node_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace> ltrace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface> clock_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal> lpts_local;
        
}; // PreconfiguredNodes::PreconfiguredNode


class PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold : public ydk::Entity
{
    public:
        WatchdogNodeThreshold();
        ~WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiskThreshold; //type: PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::DiskThreshold
        class MemoryThreshold; //type: PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::DiskThreshold> disk_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold


class PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::DiskThreshold : public ydk::Entity
{
    public:
        DiskThreshold();
        ~DiskThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::DiskThreshold


class PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::WatchdogNodeThreshold::MemoryThreshold


class PreconfiguredNodes::PreconfiguredNode::Ltrace : public ydk::Entity
{
    public:
        Ltrace();
        ~Ltrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationParams; //type: PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams> allocation_params;
        
}; // PreconfiguredNodes::PreconfiguredNode::Ltrace


class PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams : public ydk::Entity
{
    public:
        AllocationParams();
        ~AllocationParams();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: InfraLtraceMode
        ydk::YLeaf scale_factor; //type: InfraLtraceScale

}; // PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams


class PreconfiguredNodes::PreconfiguredNode::ClockInterface : public ydk::Entity
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

        class Clocks; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks> clocks;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks : public ydk::Entity
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

        class Clock; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock

        ydk::YList clock_;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock : public ydk::Entity
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

        ydk::YLeaf clock_type; //type: FsyncClock
        ydk::YLeaf port; //type: uint32
        class FrequencySynchronization; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization
        class SyncController; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization> frequency_synchronization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController> sync_controller;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization : public ydk::Entity
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

        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf selection_input; //type: empty
        ydk::YLeaf time_of_day_priority; //type: uint32
        ydk::YLeaf ssm_disable; //type: empty
        class OutputQualityLevel; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel
        class InputQualityLevel; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel> output_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel> input_quality_level;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController : public ydk::Entity
{
    public:
        SyncController();
        ~SyncController();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TransportMode; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode> transport_mode;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode : public ydk::Entity
{
    public:
        TransportMode();
        ~TransportMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrequencyMode; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode> frequency_mode;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode : public ydk::Entity
{
    public:
        FrequencyMode();
        ~FrequencyMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        class PortMode; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode> port_mode; // presence node
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode : public ydk::Entity
{
    public:
        PortMode();
        ~PortMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option1; //type: uint32
        ydk::YLeaf option2; //type: uint32
        ydk::YLeaf option3; //type: uint32
        ydk::YLeaf option4; //type: uint32
        ydk::YLeaf option5; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::SyncController::TransportMode::FrequencyMode::PortMode


class PreconfiguredNodes::PreconfiguredNode::LptsLocal : public ydk::Entity
{
    public:
        LptsLocal();
        ~LptsLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpolicerLocalTables; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables
        class DynamicFlowsTables; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables
        class IpolicerLocal; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables> dynamic_flows_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables : public ydk::Entity
{
    public:
        IpolicerLocalTables();
        ~IpolicerLocalTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpolicerLocalTable; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable

        ydk::YList ipolicer_local_table;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable : public ydk::Entity
{
    public:
        IpolicerLocalTable();
        ~IpolicerLocalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: string
        class NpFlows; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows> np_flows;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows : public ydk::Entity
{
    public:
        NpFlows();
        ~NpFlows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpFlow; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow

        ydk::YList np_flow;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow : public ydk::Entity
{
    public:
        NpFlow();
        ~NpFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf np_rate; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables : public ydk::Entity
{
    public:
        DynamicFlowsTables();
        ~DynamicFlowsTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicFlowsTable; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable

        ydk::YList dynamic_flows_table;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable : public ydk::Entity
{
    public:
        DynamicFlowsTable();
        ~DynamicFlowsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_type; //type: LptsDynamicFlowConfig
        class FlowType; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType

        ydk::YList flow_type;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType : public ydk::Entity
{
    public:
        FlowType();
        ~FlowType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf max; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal : public ydk::Entity
{
    public:
        IpolicerLocal();
        ~IpolicerLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Flows; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows> flows;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow

        ydk::YList flow;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf rate; //type: uint32
        class Precedences; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences : public ydk::Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList precedence; //type: list of  one of uint32, enumeration

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


}
}

#endif /* _CISCO_IOS_XR_CONFIG_MDA_CFG_ */

