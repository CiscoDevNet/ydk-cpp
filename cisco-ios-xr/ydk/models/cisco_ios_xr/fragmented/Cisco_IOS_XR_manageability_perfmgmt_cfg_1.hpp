#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts : public ydk::Entity
{
    public:
        InputPeakPkts();
        ~InputPeakPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate : public ydk::Entity
{
    public:
        InputPeakRate();
        ~InputPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate : public ydk::Entity
{
    public:
        OutputDataRate();
        ~OutputDataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate : public ydk::Entity
{
    public:
        OutputPacketRate();
        ~OutputPacketRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts : public ydk::Entity
{
    public:
        OutputPeakPkts();
        ~OutputPeakPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate : public ydk::Entity
{
    public:
        OutputPeakRate();
        ~OutputPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate


class PerfMgmt::Threshold::GenericCounterInterface : public ydk::Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

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

        class GenericCounterInterfaceTemplates; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates> generic_counter_interface_templates;
        
}; // PerfMgmt::Threshold::GenericCounterInterface


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates : public ydk::Entity
{
    public:
        GenericCounterInterfaceTemplates();
        ~GenericCounterInterfaceTemplates();

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

        class GenericCounterInterfaceTemplate; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate> > generic_counter_interface_template;
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate : public ydk::Entity
{
    public:
        GenericCounterInterfaceTemplate();
        ~GenericCounterInterfaceTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf vrf_group; //type: string
        class InOctets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets
        class InUcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts
        class OutUcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts
        class OutBroadcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts
        class OutMulticastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts
        class InputOverrun; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun
        class OutOctets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets
        class OutputUnderrun; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun
        class InputTotalErrors; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors
        class OutputTotalDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops
        class InputCrc; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc
        class InBroadcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts
        class InMulticastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts
        class OutPackets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets
        class OutputTotalErrors; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors
        class InPackets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets
        class InputUnknownProto; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto
        class InputQueueDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops
        class InputTotalDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops
        class InputFrame; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts> in_broadcast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts> in_multicast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets> in_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets> in_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts> in_ucast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc> input_crc; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame> input_frame; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun> input_overrun; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto> input_unknown_proto; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts> out_broadcast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts> out_multicast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets> out_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets> out_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts> out_ucast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun> output_underrun; // presence node
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts : public ydk::Entity
{
    public:
        InBroadcastPkts();
        ~InBroadcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts : public ydk::Entity
{
    public:
        InMulticastPkts();
        ~InMulticastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets : public ydk::Entity
{
    public:
        InOctets();
        ~InOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets : public ydk::Entity
{
    public:
        InPackets();
        ~InPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts : public ydk::Entity
{
    public:
        InUcastPkts();
        ~InUcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc : public ydk::Entity
{
    public:
        InputCrc();
        ~InputCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame : public ydk::Entity
{
    public:
        InputFrame();
        ~InputFrame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun : public ydk::Entity
{
    public:
        InputOverrun();
        ~InputOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops : public ydk::Entity
{
    public:
        InputQueueDrops();
        ~InputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops : public ydk::Entity
{
    public:
        InputTotalDrops();
        ~InputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors : public ydk::Entity
{
    public:
        InputTotalErrors();
        ~InputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto : public ydk::Entity
{
    public:
        InputUnknownProto();
        ~InputUnknownProto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts : public ydk::Entity
{
    public:
        OutBroadcastPkts();
        ~OutBroadcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts : public ydk::Entity
{
    public:
        OutMulticastPkts();
        ~OutMulticastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets : public ydk::Entity
{
    public:
        OutPackets();
        ~OutPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts : public ydk::Entity
{
    public:
        OutUcastPkts();
        ~OutUcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops : public ydk::Entity
{
    public:
        OutputTotalDrops();
        ~OutputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors : public ydk::Entity
{
    public:
        OutputTotalErrors();
        ~OutputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun : public ydk::Entity
{
    public:
        OutputUnderrun();
        ~OutputUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun


class PerfMgmt::Threshold::LdpMpls : public ydk::Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

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

        class LdpMplsTemplates; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates> ldp_mpls_templates;
        
}; // PerfMgmt::Threshold::LdpMpls


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates : public ydk::Entity
{
    public:
        LdpMplsTemplates();
        ~LdpMplsTemplates();

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

        class LdpMplsTemplate; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate> > ldp_mpls_template;
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate : public ydk::Entity
{
    public:
        LdpMplsTemplate();
        ~LdpMplsTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class AddressWithdrawMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd
        class LabelWithdrawMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd
        class AddressWithdrawMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent
        class LabelWithdrawMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent
        class NotificationMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd
        class TotalMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd
        class NotificationMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent
        class TotalMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent
        class LabelReleaseMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd
        class InitMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd
        class LabelReleaseMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent
        class InitMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent
        class LabelMappingMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd
        class KeepaliveMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd
        class LabelMappingMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent
        class KeepaliveMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent
        class AddressMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd
        class AddressMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd> address_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent> address_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd> address_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent> address_withdraw_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd> init_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent> init_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd> keepalive_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent> keepalive_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd> label_mapping_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent> label_mapping_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd> label_release_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent> label_release_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd> label_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent> label_withdraw_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd> notification_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent> notification_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd> total_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent> total_msgs_sent; // presence node
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd : public ydk::Entity
{
    public:
        AddressMsgsRcvd();
        ~AddressMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent : public ydk::Entity
{
    public:
        AddressMsgsSent();
        ~AddressMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd : public ydk::Entity
{
    public:
        AddressWithdrawMsgsRcvd();
        ~AddressWithdrawMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent : public ydk::Entity
{
    public:
        AddressWithdrawMsgsSent();
        ~AddressWithdrawMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd : public ydk::Entity
{
    public:
        InitMsgsRcvd();
        ~InitMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent : public ydk::Entity
{
    public:
        InitMsgsSent();
        ~InitMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd : public ydk::Entity
{
    public:
        KeepaliveMsgsRcvd();
        ~KeepaliveMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent : public ydk::Entity
{
    public:
        KeepaliveMsgsSent();
        ~KeepaliveMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd : public ydk::Entity
{
    public:
        LabelMappingMsgsRcvd();
        ~LabelMappingMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent : public ydk::Entity
{
    public:
        LabelMappingMsgsSent();
        ~LabelMappingMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd : public ydk::Entity
{
    public:
        LabelReleaseMsgsRcvd();
        ~LabelReleaseMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent : public ydk::Entity
{
    public:
        LabelReleaseMsgsSent();
        ~LabelReleaseMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd : public ydk::Entity
{
    public:
        LabelWithdrawMsgsRcvd();
        ~LabelWithdrawMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent : public ydk::Entity
{
    public:
        LabelWithdrawMsgsSent();
        ~LabelWithdrawMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd : public ydk::Entity
{
    public:
        NotificationMsgsRcvd();
        ~NotificationMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent : public ydk::Entity
{
    public:
        NotificationMsgsSent();
        ~NotificationMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd : public ydk::Entity
{
    public:
        TotalMsgsRcvd();
        ~TotalMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent : public ydk::Entity
{
    public:
        TotalMsgsSent();
        ~TotalMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent


class PerfMgmt::Threshold::MemoryNode : public ydk::Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

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

        class MemoryNodeTemplates; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates> memory_node_templates;
        
}; // PerfMgmt::Threshold::MemoryNode


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates : public ydk::Entity
{
    public:
        MemoryNodeTemplates();
        ~MemoryNodeTemplates();

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

        class MemoryNodeTemplate; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate> > memory_node_template;
        
}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate : public ydk::Entity
{
    public:
        MemoryNodeTemplate();
        ~MemoryNodeTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class PeakMemory; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory
        class CurrMemory; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory> curr_memory; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory> peak_memory; // presence node
        
}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory : public ydk::Entity
{
    public:
        CurrMemory();
        ~CurrMemory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory : public ydk::Entity
{
    public:
        PeakMemory();
        ~PeakMemory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory


class PerfMgmt::Threshold::Ospfv2Protocol : public ydk::Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

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

        class Ospfv2ProtocolTemplates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates> ospfv2_protocol_templates;
        
}; // PerfMgmt::Threshold::Ospfv2Protocol


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates : public ydk::Entity
{
    public:
        Ospfv2ProtocolTemplates();
        ~Ospfv2ProtocolTemplates();

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

        class Ospfv2ProtocolTemplate; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate> > ospfv2_protocol_template;
        
}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate : public ydk::Entity
{
    public:
        Ospfv2ProtocolTemplate();
        ~Ospfv2ProtocolTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class ChecksumErrors; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors
        class InputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa
        class OutputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa
        class InputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa
        class InputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates
        class OutputDbDs; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs
        class OutputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa
        class InputDbDs; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs
        class InputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa
        class OutputPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets
        class InputPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets
        class OutputHelloPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets
        class InputHelloPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets
        class OutputLsRequests; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests
        class OutputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa
        class OutputLsaAcks; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks
        class InputLsaAcks; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks
        class OutputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates
        class OutputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa
        class InputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa
        class InputLsRequests; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors> checksum_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs> input_db_ds; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets> input_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets> output_packets; // presence node
        
}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors : public ydk::Entity
{
    public:
        ChecksumErrors();
        ~ChecksumErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs : public ydk::Entity
{
    public:
        InputDbDs();
        ~InputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa : public ydk::Entity
{
    public:
        InputDbDsLsa();
        ~InputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets : public ydk::Entity
{
    public:
        InputHelloPackets();
        ~InputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests : public ydk::Entity
{
    public:
        InputLsRequests();
        ~InputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa : public ydk::Entity
{
    public:
        InputLsRequestsLsa();
        ~InputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks : public ydk::Entity
{
    public:
        InputLsaAcks();
        ~InputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa : public ydk::Entity
{
    public:
        InputLsaAcksLsa();
        ~InputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates : public ydk::Entity
{
    public:
        InputLsaUpdates();
        ~InputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa : public ydk::Entity
{
    public:
        InputLsaUpdatesLsa();
        ~InputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets : public ydk::Entity
{
    public:
        InputPackets();
        ~InputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs : public ydk::Entity
{
    public:
        OutputDbDs();
        ~OutputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa : public ydk::Entity
{
    public:
        OutputDbDsLsa();
        ~OutputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets : public ydk::Entity
{
    public:
        OutputHelloPackets();
        ~OutputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests : public ydk::Entity
{
    public:
        OutputLsRequests();
        ~OutputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa : public ydk::Entity
{
    public:
        OutputLsRequestsLsa();
        ~OutputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks : public ydk::Entity
{
    public:
        OutputLsaAcks();
        ~OutputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa : public ydk::Entity
{
    public:
        OutputLsaAcksLsa();
        ~OutputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates : public ydk::Entity
{
    public:
        OutputLsaUpdates();
        ~OutputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa : public ydk::Entity
{
    public:
        OutputLsaUpdatesLsa();
        ~OutputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets : public ydk::Entity
{
    public:
        OutputPackets();
        ~OutputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets


class PerfMgmt::Threshold::Ospfv3Protocol : public ydk::Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

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

        class Ospfv3ProtocolTemplates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates> ospfv3_protocol_templates;
        
}; // PerfMgmt::Threshold::Ospfv3Protocol


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates : public ydk::Entity
{
    public:
        Ospfv3ProtocolTemplates();
        ~Ospfv3ProtocolTemplates();

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

        class Ospfv3ProtocolTemplate; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate> > ospfv3_protocol_template;
        
}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate : public ydk::Entity
{
    public:
        Ospfv3ProtocolTemplate();
        ~Ospfv3ProtocolTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class InputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa
        class OutputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa
        class InputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa
        class InputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates
        class OutputDbDs; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs
        class OutputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa
        class InputDbDs; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs
        class InputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa
        class OutputPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets
        class InputPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets
        class OutputHelloPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets
        class InputHelloPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets
        class OutputLsRequests; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests
        class OutputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa
        class OutputLsaAcks; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks
        class InputLsaAcks; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks
        class OutputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates
        class OutputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa
        class InputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa
        class InputLsRequests; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs> input_db_ds; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets> input_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets> output_packets; // presence node
        
}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs : public ydk::Entity
{
    public:
        InputDbDs();
        ~InputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa : public ydk::Entity
{
    public:
        InputDbDsLsa();
        ~InputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets : public ydk::Entity
{
    public:
        InputHelloPackets();
        ~InputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests : public ydk::Entity
{
    public:
        InputLsRequests();
        ~InputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa : public ydk::Entity
{
    public:
        InputLsRequestsLsa();
        ~InputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks : public ydk::Entity
{
    public:
        InputLsaAcks();
        ~InputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa : public ydk::Entity
{
    public:
        InputLsaAcksLsa();
        ~InputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates : public ydk::Entity
{
    public:
        InputLsaUpdates();
        ~InputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa : public ydk::Entity
{
    public:
        InputLsaUpdatesLsa();
        ~InputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets : public ydk::Entity
{
    public:
        InputPackets();
        ~InputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs : public ydk::Entity
{
    public:
        OutputDbDs();
        ~OutputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa : public ydk::Entity
{
    public:
        OutputDbDsLsa();
        ~OutputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets : public ydk::Entity
{
    public:
        OutputHelloPackets();
        ~OutputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests : public ydk::Entity
{
    public:
        OutputLsRequests();
        ~OutputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa : public ydk::Entity
{
    public:
        OutputLsRequestsLsa();
        ~OutputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks : public ydk::Entity
{
    public:
        OutputLsaAcks();
        ~OutputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa : public ydk::Entity
{
    public:
        OutputLsaAcksLsa();
        ~OutputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates : public ydk::Entity
{
    public:
        OutputLsaUpdates();
        ~OutputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa : public ydk::Entity
{
    public:
        OutputLsaUpdatesLsa();
        ~OutputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets : public ydk::Entity
{
    public:
        OutputPackets();
        ~OutputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets


class PerfMgmt::Threshold::ProcessNode : public ydk::Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

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

        class ProcessNodeTemplates; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates> process_node_templates;
        
}; // PerfMgmt::Threshold::ProcessNode


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates : public ydk::Entity
{
    public:
        ProcessNodeTemplates();
        ~ProcessNodeTemplates();

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

        class ProcessNodeTemplate; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate> > process_node_template;
        
}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate : public ydk::Entity
{
    public:
        ProcessNodeTemplate();
        ~ProcessNodeTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class AverageCpuUsed; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed
        class PeakMemory; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory
        class NoThreads; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads> no_threads; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory> peak_memory; // presence node
        
}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed : public ydk::Entity
{
    public:
        AverageCpuUsed();
        ~AverageCpuUsed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads : public ydk::Entity
{
    public:
        NoThreads();
        ~NoThreads();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory : public ydk::Entity
{
    public:
        PeakMemory();
        ~PeakMemory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_ */

