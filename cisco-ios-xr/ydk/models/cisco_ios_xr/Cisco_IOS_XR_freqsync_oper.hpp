#ifndef _CISCO_IOS_XR_FREQSYNC_OPER_
#define _CISCO_IOS_XR_FREQSYNC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {

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

        class GlobalNodes; //type: FrequencySynchronization::GlobalNodes
        class GlobalInterfaces; //type: FrequencySynchronization::GlobalInterfaces
        class Summary; //type: FrequencySynchronization::Summary
        class InterfaceDatas; //type: FrequencySynchronization::InterfaceDatas
        class Nodes; //type: FrequencySynchronization::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes> global_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces> global_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas> interface_datas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes> nodes;
        
}; // FrequencySynchronization


class FrequencySynchronization::GlobalNodes : public ydk::Entity
{
    public:
        GlobalNodes();
        ~GlobalNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GlobalNode; //type: FrequencySynchronization::GlobalNodes::GlobalNode

        ydk::YList global_node;
        
}; // FrequencySynchronization::GlobalNodes


class FrequencySynchronization::GlobalNodes::GlobalNode : public ydk::Entity
{
    public:
        GlobalNode();
        ~GlobalNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        class ClockInterfaceSelectionBackTraces; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces
        class ClockInterfaceSelectionForwardTraces; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces
        class TimeOfDayBackTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace
        class NtpSelectionForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace
        class PtpSelectionForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces> clock_interface_selection_back_traces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces> clock_interface_selection_forward_traces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace> time_of_day_back_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace> ntp_selection_forward_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace> ptp_selection_forward_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces : public ydk::Entity
{
    public:
        ClockInterfaceSelectionBackTraces();
        ~ClockInterfaceSelectionBackTraces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockInterfaceSelectionBackTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace

        ydk::YList clock_interface_selection_back_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace : public ydk::Entity
{
    public:
        ClockInterfaceSelectionBackTrace();
        ~ClockInterfaceSelectionBackTrace();

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
        ydk::YLeaf id; //type: uint32
        class SelectedSource; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource
        class SelectionPoint; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource> selected_source;
        ydk::YList selection_point;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces : public ydk::Entity
{
    public:
        ClockInterfaceSelectionForwardTraces();
        ~ClockInterfaceSelectionForwardTraces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockInterfaceSelectionForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace

        ydk::YList clock_interface_selection_forward_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace : public ydk::Entity
{
    public:
        ClockInterfaceSelectionForwardTrace();
        ~ClockInterfaceSelectionForwardTrace();

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
        class ForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace

        ydk::YList forward_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace : public ydk::Entity
{
    public:
        ForwardTrace();
        ~ForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTraceNode; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode> forward_trace_node;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode : public ydk::Entity
{
    public:
        ForwardTraceNode();
        ~ForwardTraceNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_type; //type: FsyncBagForwardtraceNode
        class SelectionPoint; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint
        class Source; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint> selection_point;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source> source;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId


class FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId


class FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace : public ydk::Entity
{
    public:
        TimeOfDayBackTrace();
        ~TimeOfDayBackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SelectedSource; //type: FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource
        class SelectionPoint; //type: FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource> selected_source;
        ydk::YList selection_point;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource


class FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId


class FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId


class FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace : public ydk::Entity
{
    public:
        NtpSelectionForwardTrace();
        ~NtpSelectionForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace

        ydk::YList forward_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace : public ydk::Entity
{
    public:
        ForwardTrace();
        ~ForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTraceNode; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode> forward_trace_node;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode : public ydk::Entity
{
    public:
        ForwardTraceNode();
        ~ForwardTraceNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_type; //type: FsyncBagForwardtraceNode
        class SelectionPoint; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint
        class Source; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint> selection_point;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source> source;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId


class FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace : public ydk::Entity
{
    public:
        PtpSelectionForwardTrace();
        ~PtpSelectionForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTrace; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace

        ydk::YList forward_trace;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace : public ydk::Entity
{
    public:
        ForwardTrace();
        ~ForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTraceNode; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode> forward_trace_node;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode : public ydk::Entity
{
    public:
        ForwardTraceNode();
        ~ForwardTraceNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_type; //type: FsyncBagForwardtraceNode
        class SelectionPoint; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint
        class Source; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint> selection_point;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source> source;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId


class FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId


class FrequencySynchronization::GlobalInterfaces : public ydk::Entity
{
    public:
        GlobalInterfaces();
        ~GlobalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GlobalInterface; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface

        ydk::YList global_interface;
        
}; // FrequencySynchronization::GlobalInterfaces


class FrequencySynchronization::GlobalInterfaces::GlobalInterface : public ydk::Entity
{
    public:
        GlobalInterface();
        ~GlobalInterface();

        bool has_data() const override;
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
        class InterfaceSelectionForwardTrace; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace
        class InterfaceSelectionBackTrace; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace> interface_selection_forward_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace> interface_selection_back_trace;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace : public ydk::Entity
{
    public:
        InterfaceSelectionForwardTrace();
        ~InterfaceSelectionForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTrace; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace

        ydk::YList forward_trace;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace : public ydk::Entity
{
    public:
        ForwardTrace();
        ~ForwardTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardTraceNode; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode> forward_trace_node;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode : public ydk::Entity
{
    public:
        ForwardTraceNode();
        ~ForwardTraceNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_type; //type: FsyncBagForwardtraceNode
        class SelectionPoint; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint
        class Source; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint> selection_point;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source> source;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace : public ydk::Entity
{
    public:
        InterfaceSelectionBackTrace();
        ~InterfaceSelectionBackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SelectedSource; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource
        class SelectionPoint; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource> selected_source;
        ydk::YList selection_point;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId


class FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint


class FrequencySynchronization::Summary : public ydk::Entity
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

        class FrequencySummary; //type: FrequencySynchronization::Summary::FrequencySummary
        class TimeOfDaySummary; //type: FrequencySynchronization::Summary::TimeOfDaySummary

        ydk::YList frequency_summary;
        ydk::YList time_of_day_summary;
        
}; // FrequencySynchronization::Summary


class FrequencySynchronization::Summary::FrequencySummary : public ydk::Entity
{
    public:
        FrequencySummary();
        ~FrequencySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf clock_count; //type: uint32
        ydk::YLeaf ethernet_count; //type: uint32
        ydk::YLeaf sonet_count; //type: uint32
        class Source; //type: FrequencySynchronization::Summary::FrequencySummary::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::FrequencySummary::Source> source;
        
}; // FrequencySynchronization::Summary::FrequencySummary


class FrequencySynchronization::Summary::FrequencySummary::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_class; //type: FsyncBagSourceClass
        ydk::YLeaf ethernet_interface; //type: string
        ydk::YLeaf sonet_interface; //type: string
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Summary::FrequencySummary::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::FrequencySummary::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Summary::FrequencySummary::Source


class FrequencySynchronization::Summary::FrequencySummary::Source::ClockId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Summary::FrequencySummary::Source::ClockId


class FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId


class FrequencySynchronization::Summary::TimeOfDaySummary : public ydk::Entity
{
    public:
        TimeOfDaySummary();
        ~TimeOfDaySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_count; //type: uint32
        class Source; //type: FrequencySynchronization::Summary::TimeOfDaySummary::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::TimeOfDaySummary::Source> source;
        
}; // FrequencySynchronization::Summary::TimeOfDaySummary


class FrequencySynchronization::Summary::TimeOfDaySummary::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_class; //type: FsyncBagSourceClass
        ydk::YLeaf ethernet_interface; //type: string
        ydk::YLeaf sonet_interface; //type: string
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Summary::TimeOfDaySummary::Source


class FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId


class FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId


class FrequencySynchronization::InterfaceDatas : public ydk::Entity
{
    public:
        InterfaceDatas();
        ~InterfaceDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InterfaceData; //type: FrequencySynchronization::InterfaceDatas::InterfaceData

        ydk::YList interface_data;
        
}; // FrequencySynchronization::InterfaceDatas


class FrequencySynchronization::InterfaceDatas::InterfaceData : public ydk::Entity
{
    public:
        InterfaceData();
        ~InterfaceData();

        bool has_data() const override;
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf ssm_enabled; //type: boolean
        ydk::YLeaf squelched; //type: boolean
        ydk::YLeaf selection_input; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        ydk::YLeaf damping_state; //type: FsyncBagDampingState
        ydk::YLeaf damping_time; //type: uint32
        ydk::YLeaf wait_to_restore_time; //type: uint16
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        class Source; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::Source
        class SelectedSource; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource
        class QualityLevelReceived; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived
        class QualityLevelDamped; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped
        class QualityLevelEffectiveInput; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput
        class QualityLevelEffectiveOutput; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput
        class QualityLevelSelectedSource; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource
        class EthernetPeerInformation; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation
        class EsmcStatistics; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics
        class SpaSelectionPoint; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource> selected_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived> quality_level_received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped> quality_level_damped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput> quality_level_effective_input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput> quality_level_effective_output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource> quality_level_selected_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation> ethernet_peer_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics> esmc_statistics;
        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        
}; // FrequencySynchronization::InterfaceDatas::InterfaceData


class FrequencySynchronization::InterfaceDatas::InterfaceData::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::InterfaceDatas::InterfaceData::Source


class FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId


class FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId


class FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource


class FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId


class FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId


class FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived : public ydk::Entity
{
    public:
        QualityLevelReceived();
        ~QualityLevelReceived();

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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived


class FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped : public ydk::Entity
{
    public:
        QualityLevelDamped();
        ~QualityLevelDamped();

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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped


class FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput


class FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput


class FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource


class FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation : public ydk::Entity
{
    public:
        EthernetPeerInformation();
        ~EthernetPeerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_state; //type: FsyncBagEsmcPeerState
        ydk::YLeaf peer_up_count; //type: uint16
        ydk::YLeaf peer_timeout_count; //type: uint16
        class PeerStateTime; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime
        class LastSsm; //type: FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime> peer_state_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm> last_ssm;
        
}; // FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation


class FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime : public ydk::Entity
{
    public:
        PeerStateTime();
        ~PeerStateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime


class FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm : public ydk::Entity
{
    public:
        LastSsm();
        ~LastSsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm


class FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics : public ydk::Entity
{
    public:
        EsmcStatistics();
        ~EsmcStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf esmc_events_sent; //type: uint16
        ydk::YLeaf esmc_events_received; //type: uint16
        ydk::YLeaf esmc_infos_sent; //type: uint32
        ydk::YLeaf esmc_infos_received; //type: uint32
        ydk::YLeaf esmc_dn_us_sent; //type: uint32
        ydk::YLeaf esmc_dn_us_received; //type: uint32
        ydk::YLeaf esmc_malformed_received; //type: uint16
        ydk::YLeaf esmc_received_error; //type: uint16

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics


class FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint


class FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint


class FrequencySynchronization::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: FrequencySynchronization::Nodes::Node

        ydk::YList node;
        
}; // FrequencySynchronization::Nodes


class FrequencySynchronization::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node; //type: string
        class NtpData; //type: FrequencySynchronization::Nodes::Node::NtpData
        class SelectionPointDatas; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas
        class ConfigurationErrors; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors
        class PtpData; //type: FrequencySynchronization::Nodes::Node::PtpData
        class SsmSummary; //type: FrequencySynchronization::Nodes::Node::SsmSummary
        class DetailedClockDatas; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas
        class ClockDatas; //type: FrequencySynchronization::Nodes::Node::ClockDatas
        class SelectionPointInputs; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::NtpData> ntp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointDatas> selection_point_datas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors> configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::PtpData> ptp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SsmSummary> ssm_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas> detailed_clock_datas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas> clock_datas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs> selection_point_inputs;
        
}; // FrequencySynchronization::Nodes::Node


class FrequencySynchronization::Nodes::Node::NtpData : public ydk::Entity
{
    public:
        NtpData();
        ~NtpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: FsyncBagSourceState
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        ydk::YLeaf frequency_priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        class QualityLevelEffectiveInput; //type: FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput
        class SpaSelectionPoint; //type: FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput> quality_level_effective_input;
        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        
}; // FrequencySynchronization::Nodes::Node::NtpData


class FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput


class FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint


class FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointDatas : public ydk::Entity
{
    public:
        SelectionPointDatas();
        ~SelectionPointDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SelectionPointData; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData

        ydk::YList selection_point_data;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData : public ydk::Entity
{
    public:
        SelectionPointData();
        ~SelectionPointData();

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
        ydk::YLeaf selection_point_type; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf inputs; //type: uint32
        ydk::YLeaf inputs_selected; //type: uint32
        ydk::YLeaf time_of_day_selection; //type: boolean
        class Output; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output
        class LastProgrammed; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed
        class LastSelection; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed> last_programmed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection> last_selection;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_clock_ouput; //type: boolean
        ydk::YLeaf local_line_output; //type: boolean
        ydk::YLeaf local_time_of_day_output; //type: boolean
        class SpaSelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint
        class ChassisSelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint
        class RouterSelectionPoint; //type: FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint

        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        ydk::YList chassis_selection_point;
        ydk::YList router_selection_point;
        
}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint : public ydk::Entity
{
    public:
        ChassisSelectionPoint();
        ~ChassisSelectionPoint();

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

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint : public ydk::Entity
{
    public:
        RouterSelectionPoint();
        ~RouterSelectionPoint();

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

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed : public ydk::Entity
{
    public:
        LastProgrammed();
        ~LastProgrammed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed


class FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection : public ydk::Entity
{
    public:
        LastSelection();
        ~LastSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection


class FrequencySynchronization::Nodes::Node::ConfigurationErrors : public ydk::Entity
{
    public:
        ConfigurationErrors();
        ~ConfigurationErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorSource; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource

        ydk::YList error_source;
        
}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource : public ydk::Entity
{
    public:
        ErrorSource();
        ~ErrorSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_error; //type: boolean
        ydk::YLeaf input_min_error; //type: boolean
        ydk::YLeaf input_exact_error; //type: boolean
        ydk::YLeaf input_max_error; //type: boolean
        ydk::YLeaf ouput_min_error; //type: boolean
        ydk::YLeaf output_exact_error; //type: boolean
        ydk::YLeaf output_max_error; //type: boolean
        ydk::YLeaf input_output_mismatch; //type: boolean
        class Source; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source
        class InputMinQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl
        class InputExactQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl
        class InputMaxQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl
        class OutputMinQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl
        class OutputExactQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl
        class OutputMaxQl; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl> input_min_ql;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl> input_exact_ql;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl> input_max_ql;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl> output_min_ql;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl> output_exact_ql;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl> output_max_ql;
        
}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl : public ydk::Entity
{
    public:
        InputMinQl();
        ~InputMinQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl : public ydk::Entity
{
    public:
        InputExactQl();
        ~InputExactQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl : public ydk::Entity
{
    public:
        InputMaxQl();
        ~InputMaxQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl : public ydk::Entity
{
    public:
        OutputMinQl();
        ~OutputMinQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl : public ydk::Entity
{
    public:
        OutputExactQl();
        ~OutputExactQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl


class FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl : public ydk::Entity
{
    public:
        OutputMaxQl();
        ~OutputMaxQl();

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

}; // FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl


class FrequencySynchronization::Nodes::Node::PtpData : public ydk::Entity
{
    public:
        PtpData();
        ~PtpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: FsyncBagSourceState
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        ydk::YLeaf frequency_priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        class QualityLevelEffectiveInput; //type: FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput
        class SpaSelectionPoint; //type: FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput> quality_level_effective_input;
        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        
}; // FrequencySynchronization::Nodes::Node::PtpData


class FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput


class FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint


class FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint


class FrequencySynchronization::Nodes::Node::SsmSummary : public ydk::Entity
{
    public:
        SsmSummary();
        ~SsmSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_sources; //type: uint32
        ydk::YLeaf ethernet_sources_select; //type: uint32
        ydk::YLeaf ethernet_sources_enabled; //type: uint32
        ydk::YLeaf sonet_sources; //type: uint32
        ydk::YLeaf sonet_sources_select; //type: uint32
        ydk::YLeaf sonet_sources_enabled; //type: uint32
        ydk::YLeaf events_sent; //type: uint32
        ydk::YLeaf events_received; //type: uint32
        ydk::YLeaf infos_sent; //type: uint32
        ydk::YLeaf infos_received; //type: uint32
        ydk::YLeaf dn_us_sent; //type: uint32
        ydk::YLeaf dn_us_received; //type: uint32

}; // FrequencySynchronization::Nodes::Node::SsmSummary


class FrequencySynchronization::Nodes::Node::DetailedClockDatas : public ydk::Entity
{
    public:
        DetailedClockDatas();
        ~DetailedClockDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailedClockData; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData

        ydk::YList detailed_clock_data;
        
}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData : public ydk::Entity
{
    public:
        DetailedClockData();
        ~DetailedClockData();

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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf state; //type: FsyncBagSourceState
        ydk::YLeaf down_reason; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        ydk::YLeaf ssm_support; //type: boolean
        ydk::YLeaf ssm_enabled; //type: boolean
        ydk::YLeaf loopback; //type: boolean
        ydk::YLeaf selection_input; //type: boolean
        ydk::YLeaf squelched; //type: boolean
        ydk::YLeaf damping_state; //type: FsyncBagDampingState
        ydk::YLeaf damping_time; //type: uint32
        ydk::YLeaf input_disabled; //type: boolean
        ydk::YLeaf output_disabled; //type: boolean
        ydk::YLeaf wait_to_restore_time; //type: uint16
        ydk::YLeaf clock_type_xr; //type: FsyncBagClockIntfClass
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        class Source; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source
        class SelectedSource; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource
        class QualityLevelReceived; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived
        class QualityLevelDamped; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped
        class QualityLevelEffectiveInput; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput
        class QualityLevelEffectiveOutput; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput
        class QualityLevelSelectedSource; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource
        class SpaSelectionPoint; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource> selected_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived> quality_level_received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped> quality_level_damped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput> quality_level_effective_input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput> quality_level_effective_output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource> quality_level_selected_source;
        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        
}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived : public ydk::Entity
{
    public:
        QualityLevelReceived();
        ~QualityLevelReceived();

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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped : public ydk::Entity
{
    public:
        QualityLevelDamped();
        ~QualityLevelDamped();

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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint


class FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint


class FrequencySynchronization::Nodes::Node::ClockDatas : public ydk::Entity
{
    public:
        ClockDatas();
        ~ClockDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockData; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData

        ydk::YList clock_data;
        
}; // FrequencySynchronization::Nodes::Node::ClockDatas


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData : public ydk::Entity
{
    public:
        ClockData();
        ~ClockData();

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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf state; //type: FsyncBagSourceState
        ydk::YLeaf down_reason; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf time_of_day_priority; //type: uint8
        ydk::YLeaf ssm_support; //type: boolean
        ydk::YLeaf ssm_enabled; //type: boolean
        ydk::YLeaf loopback; //type: boolean
        ydk::YLeaf selection_input; //type: boolean
        ydk::YLeaf squelched; //type: boolean
        ydk::YLeaf damping_state; //type: FsyncBagDampingState
        ydk::YLeaf damping_time; //type: uint32
        ydk::YLeaf input_disabled; //type: boolean
        ydk::YLeaf output_disabled; //type: boolean
        ydk::YLeaf wait_to_restore_time; //type: uint16
        ydk::YLeaf clock_type_xr; //type: FsyncBagClockIntfClass
        ydk::YLeaf supports_frequency; //type: boolean
        ydk::YLeaf supports_time_of_day; //type: boolean
        class Source; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source
        class SelectedSource; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource
        class QualityLevelReceived; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived
        class QualityLevelDamped; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped
        class QualityLevelEffectiveInput; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput
        class QualityLevelEffectiveOutput; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput
        class QualityLevelSelectedSource; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource
        class SpaSelectionPoint; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint
        class NodeSelectionPoint; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource> selected_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived> quality_level_received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped> quality_level_damped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput> quality_level_effective_input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput> quality_level_effective_output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource> quality_level_selected_source;
        ydk::YList spa_selection_point;
        ydk::YList node_selection_point;
        
}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource : public ydk::Entity
{
    public:
        SelectedSource();
        ~SelectedSource();

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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId> clock_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId> gnss_receiver_id;
        
}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId : public ydk::Entity
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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived : public ydk::Entity
{
    public:
        QualityLevelReceived();
        ~QualityLevelReceived();

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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived


class FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped : public ydk::Entity
{
    public:
        QualityLevelDamped();
        ~QualityLevelDamped();

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

}; // FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped


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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId> clock_id;
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
        ydk::YLeaf node; //type: string
        ydk::YLeaf ptp_node; //type: string
        ydk::YLeaf satellite_access_interface; //type: string
        ydk::YLeaf ntp_node; //type: string
        class ClockId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId
        class GnssReceiverId; //type: FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_freqsync_oper::FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId> clock_id;
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

class FsyncBagDampingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf damping_state_down;
        static const ydk::Enum::YLeaf damping_state_coming_up;
        static const ydk::Enum::YLeaf damping_state_up;
        static const ydk::Enum::YLeaf damping_state_going_down;

};

class FsyncBagStreamState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stream_invalid;
        static const ydk::Enum::YLeaf stream_unqualified;
        static const ydk::Enum::YLeaf stream_available;
        static const ydk::Enum::YLeaf stream_available_acquiring;
        static const ydk::Enum::YLeaf stream_locked;
        static const ydk::Enum::YLeaf stream_holdover;
        static const ydk::Enum::YLeaf stream_freerun;
        static const ydk::Enum::YLeaf stream_failed;
        static const ydk::Enum::YLeaf stream_unmonitored;
        static const ydk::Enum::YLeaf stream_error;

};

class FsyncBagEsmcPeerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_down;
        static const ydk::Enum::YLeaf peer_up;
        static const ydk::Enum::YLeaf peer_timed_out;
        static const ydk::Enum::YLeaf peer_unknown;

};

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

};

class FsyncBagStreamInput : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_input;
        static const ydk::Enum::YLeaf source_input;
        static const ydk::Enum::YLeaf selection_point_input;

};

class FsyncBagQlO2G2Value : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option2_generation2_invalid;
        static const ydk::Enum::YLeaf option2_generation2_do_not_use;
        static const ydk::Enum::YLeaf option2_generation2_failed;
        static const ydk::Enum::YLeaf option2_generation2_none;
        static const ydk::Enum::YLeaf option2_generation2prs;
        static const ydk::Enum::YLeaf option2_generation2stu;
        static const ydk::Enum::YLeaf option2_generation2_stratum2;
        static const ydk::Enum::YLeaf option2_generation2_stratum3;
        static const ydk::Enum::YLeaf option2_generation2tnc;
        static const ydk::Enum::YLeaf option2_generation2_stratum3e;
        static const ydk::Enum::YLeaf option2_generation2smc;
        static const ydk::Enum::YLeaf option2_generation2_stratum4;

};

class FsyncBagQlOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_quality_level_option;
        static const ydk::Enum::YLeaf option1;
        static const ydk::Enum::YLeaf option2_generation1;
        static const ydk::Enum::YLeaf option2_generation2;
        static const ydk::Enum::YLeaf invalid_quality_level_option;

};

class FsyncBagSourceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source_state_unknown;
        static const ydk::Enum::YLeaf source_state_up;
        static const ydk::Enum::YLeaf source_state_down;
        static const ydk::Enum::YLeaf source_state_unavailable;

};

class FsyncBagForwardtraceNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forward_trace_node_selection_point;
        static const ydk::Enum::YLeaf forward_trace_node_source;

};

class FsyncStream : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf selection_point;

};

class FsyncBagClockIntfClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clock_class_bitst1;
        static const ydk::Enum::YLeaf clock_class_bitse1;
        static const ydk::Enum::YLeaf clock_class_bits2m;
        static const ydk::Enum::YLeaf clock_class_bits6m;
        static const ydk::Enum::YLeaf clock_class_bits64k;
        static const ydk::Enum::YLeaf clock_class_dti;
        static const ydk::Enum::YLeaf clock_class_gps;
        static const ydk::Enum::YLeaf clock_class_chassis_sync;
        static const ydk::Enum::YLeaf clock_class_bitsj1;
        static const ydk::Enum::YLeaf clock_class_unknown;

};

class FsyncBagQlO1Value : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option1_invalid;
        static const ydk::Enum::YLeaf option1_do_not_use;
        static const ydk::Enum::YLeaf option1_failed;
        static const ydk::Enum::YLeaf option1_none;
        static const ydk::Enum::YLeaf option1prc;
        static const ydk::Enum::YLeaf option1ssu_a;
        static const ydk::Enum::YLeaf option1ssu_b;
        static const ydk::Enum::YLeaf option1sec;

};

class FsyncBagSourceClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_source;
        static const ydk::Enum::YLeaf ethernet_interface_source;
        static const ydk::Enum::YLeaf sonet_interface_source;
        static const ydk::Enum::YLeaf clock_interface_source;
        static const ydk::Enum::YLeaf internal_clock_source;
        static const ydk::Enum::YLeaf ptp_source;
        static const ydk::Enum::YLeaf satellite_access_interface_source;
        static const ydk::Enum::YLeaf ntp_source;
        static const ydk::Enum::YLeaf gnss_receiver;

};

class FsyncBagQlO2G1Value : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option2_generation1_invalid;
        static const ydk::Enum::YLeaf option2_generation1_do_not_use;
        static const ydk::Enum::YLeaf option2_generation1_failed;
        static const ydk::Enum::YLeaf option2_generation1_none;
        static const ydk::Enum::YLeaf option2_generation1prs;
        static const ydk::Enum::YLeaf option2_generation1stu;
        static const ydk::Enum::YLeaf option2_generation1_stratum2;
        static const ydk::Enum::YLeaf option2_generation1_stratum3;
        static const ydk::Enum::YLeaf option2_generation1smc;
        static const ydk::Enum::YLeaf option2_generation1_stratum4;

};

class FsyncSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf clock_;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf satellite_access;
        static const ydk::Enum::YLeaf ntp;

};


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_OPER_ */

