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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode> > active_node;
        
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
        class ClockInterface; //type: ActiveNodes::ActiveNode::ClockInterface
        class Ltrace; //type: ActiveNodes::ActiveNode::Ltrace
        class LptsLocal; //type: ActiveNodes::ActiveNode::LptsLocal
        class SsrpGroup; //type: ActiveNodes::ActiveNode::SsrpGroup
        class CiscoIOSXRWatchdCfgWatchdogNodeThreshold; //type: ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold
        class CiscoIOSXRWdCfgWatchdogNodeThreshold; //type: ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface> clock_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace> ltrace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal> lpts_local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup> ssrp_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
        
}; // ActiveNodes::ActiveNode


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

        class Clock_; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_> > clock_;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

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
        ydk::YLeaf port; //type: int32
        class FrequencySynchronization; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization> frequency_synchronization;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization : public ydk::Entity
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
        class OutputQualityLevel; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel
        class InputQualityLevel; //type: ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel> output_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel> input_quality_level;
        
}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel


class ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;
        
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
        class Nps; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps : public ydk::Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Np; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np : public ydk::Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: int32
        ydk::YLeaf rate; //type: int32

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable> > dynamic_flows_table;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType> > flow_type;
        
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
        ydk::YLeaf max; //type: int32

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;
        
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
        ydk::YLeaf rate; //type: int32
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

        ydk::YLeafList precedence; //type: list of  one of enumeration, uint32

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup::Groups::Group> > group;
        
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


class ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold : public ydk::Entity
{
    public:
        CiscoIOSXRWatchdCfgWatchdogNodeThreshold();
        ~CiscoIOSXRWatchdCfgWatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemoryThreshold; //type: ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold


class ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold


class ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold : public ydk::Entity
{
    public:
        CiscoIOSXRWdCfgWatchdogNodeThreshold();
        ~CiscoIOSXRWdCfgWatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemoryThreshold; //type: ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold


class ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
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

}; // ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode> > preconfigured_node;
        
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
        class ClockInterface; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface
        class Ltrace; //type: PreconfiguredNodes::PreconfiguredNode::Ltrace
        class LptsLocal; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal
        class CiscoIOSXRWatchdCfgWatchdogNodeThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold
        class CiscoIOSXRWdCfgWatchdogNodeThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface> clock_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace> ltrace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal> lpts_local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode


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

        class Clock_; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_> > clock_;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

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
        ydk::YLeaf port; //type: int32
        class FrequencySynchronization; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization> frequency_synchronization;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization : public ydk::Entity
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
        class OutputQualityLevel; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel
        class InputQualityLevel; //type: PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel> output_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel> input_quality_level;
        
}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel


class PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;
        
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
        class Nps; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps : public ydk::Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Np; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np : public ydk::Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: int32
        ydk::YLeaf rate; //type: int32

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable> > dynamic_flows_table;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType> > flow_type;
        
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
        ydk::YLeaf max; //type: int32

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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;
        
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
        ydk::YLeaf rate; //type: int32
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

        ydk::YLeafList precedence; //type: list of  one of enumeration, uint32

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


class PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold : public ydk::Entity
{
    public:
        CiscoIOSXRWatchdCfgWatchdogNodeThreshold();
        ~CiscoIOSXRWatchdCfgWatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemoryThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold : public ydk::Entity
{
    public:
        CiscoIOSXRWdCfgWatchdogNodeThreshold();
        ~CiscoIOSXRWdCfgWatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemoryThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold : public ydk::Entity
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

}; // PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold


}
}

#endif /* _CISCO_IOS_XR_CONFIG_MDA_CFG_ */

