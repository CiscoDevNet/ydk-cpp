#ifndef _CISCO_IOS_XR_FREQSYNC_OPER_1_
#define _CISCO_IOS_XR_FREQSYNC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_freqsync_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput : public ydk::Entity
{
    public:
        QualityLevelEffectiveInput();
        ~QualityLevelEffectiveInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncBagQlOption
        ydk::YLeaf option1_value; //type: FsyncBagQlO1Value
        ydk::YLeaf option2_generation1_value; //type: FsyncBagQlO2G1Value
        ydk::YLeaf option2_generation2_value; //type: FsyncBagQlO2G2Value

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput : public ydk::Entity
{
    public:
        QualityLevelEffectiveOutput();
        ~QualityLevelEffectiveOutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncBagQlOption
        ydk::YLeaf option1_value; //type: FsyncBagQlO1Value
        ydk::YLeaf option2_generation1_value; //type: FsyncBagQlO2G1Value
        ydk::YLeaf option2_generation2_value; //type: FsyncBagQlO2G2Value

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource : public ydk::Entity
{
    public:
        QualityLevelSelectedSource();
        ~QualityLevelSelectedSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncBagQlOption
        ydk::YLeaf option1_value; //type: FsyncBagQlO1Value
        ydk::YLeaf option2_generation1_value; //type: FsyncBagQlO2G1Value
        ydk::YLeaf option2_generation2_value; //type: FsyncBagQlO2G2Value

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint : public ydk::Entity
{
    public:
        SpaSelectionPoint();
        ~SpaSelectionPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection_point; //type: uint8
        ydk::YLeaf selection_point_description; //type: string

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint : public ydk::Entity
{
    public:
        NodeSelectionPoint();
        ~NodeSelectionPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection_point; //type: uint8
        ydk::YLeaf selection_point_description; //type: string

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointInputs : public ydk::Entity
{
    public:
        SelectionPointInputs();
        ~SelectionPointInputs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SelectionPointInput; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput

        ydk::YList selection_point_input;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput : public ydk::Entity
{
    public:
        SelectionPointInput();
        ~SelectionPointInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection_point; //type: uint32
        ydk::YLeaf stream_type; //type: FsyncStream
        ydk::YLeaf source_type; //type: FsyncSource
        ydk::YLeaf interface; //type: string
        ydk::YLeaf clock_port; //type: uint32
        ydk::YLeaf last_node; //type: string
        ydk::YLeaf last_selection_point; //type: uint32
        ydk::YLeaf output_id; //type: uint32
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        ydk::YLeaf selected; //type: boolean
        ydk::YLeaf output_id_xr; //type: uint8
        ydk::YLeaf platform_status; //type: FsyncBagStreamState
        ydk::YLeaf platform_failed_reason; //type: string
        class InputSelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint
        class Stream; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream
        class OriginalSource; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource
        class QualityLevel; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint> input_selection_point;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream> stream;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource> original_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel> quality_level;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint : public ydk::Entity
{
    public:
        InputSelectionPoint();
        ~InputSelectionPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection_point_type; //type: uint8
        ydk::YLeaf selection_point_description; //type: string
        ydk::YLeaf node; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream : public ydk::Entity
{
    public:
        Stream();
        ~Stream();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream_input; //type: FsyncBagStreamInput
        class SourceId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId
        class SelectionPointId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId> source_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId> selection_point_id;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId : public ydk::Entity
{
    public:
        SourceId();
        ~SourceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_class; //type: FsyncBagSourceClass
        ydk::YLeaf ethernet_interface; //type: string
        ydk::YLeaf sonet_interface; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId
        class InternalClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId> internal_clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId : public ydk::Entity
{
    public:
        ClockId();
        ~ClockId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId : public ydk::Entity
{
    public:
        InternalClockId();
        ~InternalClockId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId : public ydk::Entity
{
    public:
        GnssReceiverId();
        ~GnssReceiverId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId : public ydk::Entity
{
    public:
        SelectionPointId();
        ~SelectionPointId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf output_id; //type: uint8
        class SelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint> selection_point;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint : public ydk::Entity
{
    public:
        SelectionPoint();
        ~SelectionPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selection_point_type; //type: uint8
        ydk::YLeaf selection_point_description; //type: string
        ydk::YLeaf node; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource : public ydk::Entity
{
    public:
        OriginalSource();
        ~OriginalSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_class; //type: FsyncBagSourceClass
        ydk::YLeaf ethernet_interface; //type: string
        ydk::YLeaf sonet_interface; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId
        class InternalClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId> internal_clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId : public ydk::Entity
{
    public:
        ClockId();
        ~ClockId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId : public ydk::Entity
{
    public:
        InternalClockId();
        ~InternalClockId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId : public ydk::Entity
{
    public:
        GnssReceiverId();
        ~GnssReceiverId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel : public ydk::Entity
{
    public:
        QualityLevel();
        ~QualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncBagQlOption
        ydk::YLeaf option1_value; //type: FsyncBagQlO1Value
        ydk::YLeaf option2_generation1_value; //type: FsyncBagQlO2G1Value
        ydk::YLeaf option2_generation2_value; //type: FsyncBagQlO2G2Value

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_OPER_1_ */

