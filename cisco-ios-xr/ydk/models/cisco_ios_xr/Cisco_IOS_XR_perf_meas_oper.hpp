#ifndef _CISCO_IOS_XR_PERF_MEAS_OPER_
#define _CISCO_IOS_XR_PERF_MEAS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_perf_meas_oper {

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

        class Nodes; //type: PerformanceMeasurement::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes> nodes;
        
}; // PerformanceMeasurement


class PerformanceMeasurement::Nodes : public ydk::Entity
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

        class Node; //type: PerformanceMeasurement::Nodes::Node

        ydk::YList node;
        
}; // PerformanceMeasurement::Nodes


class PerformanceMeasurement::Nodes::Node : public ydk::Entity
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
        class Summary; //type: PerformanceMeasurement::Nodes::Node::Summary
        class Interfaces; //type: PerformanceMeasurement::Nodes::Node::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces> interfaces;
        
}; // PerformanceMeasurement::Nodes::Node


class PerformanceMeasurement::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf total_interfaces; //type: uint32
        class DelaySummary; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary> delay_summary;
        
}; // PerformanceMeasurement::Nodes::Node::Summary


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary : public ydk::Entity
{
    public:
        DelaySummary();
        ~DelaySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceDelaySummary; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary
        class DelayGlobalCounters; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary> interface_delay_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters> delay_global_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary : public ydk::Entity
{
    public:
        InterfaceDelaySummary();
        ~InterfaceDelaySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_delay_sessions; //type: uint32
        class DelayProfile; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile
        class DelayTransportCounters; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile> delay_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters> delay_transport_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile : public ydk::Entity
{
    public:
        DelayProfile();
        ~DelayProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_interval; //type: uint32
        ydk::YLeaf burst_interval; //type: uint32
        ydk::YLeaf burst_count; //type: uint32
        ydk::YLeaf delay_measurement_mode; //type: PmDelayMode
        ydk::YLeaf periodic_advertisement_enabled; //type: boolean
        ydk::YLeaf periodic_advertisement_interval; //type: uint32
        ydk::YLeaf effective_periodic_advertisement_interval; //type: uint32
        ydk::YLeaf periodic_advertisement_threshold; //type: uint32
        ydk::YLeaf periodic_advertisement_minimum_change; //type: uint32
        ydk::YLeaf accelerated_advertisement_threshold; //type: uint32
        ydk::YLeaf accelerated_advertisement_minimum_change; //type: uint32
        ydk::YLeaf accelerated_advertisement_enabled; //type: boolean

}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters : public ydk::Entity
{
    public:
        DelayTransportCounters();
        ~DelayTransportCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GenericCounters; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters
        class ExclusiveCounters; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters> generic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters> exclusive_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_packets_sent; //type: uint64
        ydk::YLeaf query_packet_sent_errors; //type: uint64
        ydk::YLeaf query_packet_sent_error_no_ip_address; //type: uint64
        ydk::YLeaf query_packets_received; //type: uint64
        ydk::YLeaf received_packet_error_negative_delay; //type: uint64
        ydk::YLeaf received_packet_error_delay_exceeds_threshold; //type: uint64
        ydk::YLeaf received_packet_error_missing_tx_timestamp; //type: uint64
        ydk::YLeaf received_packet_error_missing_rx_timestamp; //type: uint64
        ydk::YLeaf received_packet_error_probe_full; //type: uint64
        ydk::YLeaf received_packet_error_probe_not_started; //type: uint64
        ydk::YLeaf received_packet_control_code_error; //type: uint64
        ydk::YLeaf received_packet_control_code_notification; //type: uint64
        ydk::YLeaf probes_started; //type: uint64
        ydk::YLeaf probes_complete; //type: uint64
        ydk::YLeaf probes_incomplete; //type: uint64
        ydk::YLeaf advertisement; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters : public ydk::Entity
{
    public:
        ExclusiveCounters();
        ~ExclusiveCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PmTransport
        class InterfaceExclusiveCounters; //type: PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters> interface_exclusive_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters : public ydk::Entity
{
    public:
        InterfaceExclusiveCounters();
        ~InterfaceExclusiveCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_packet_sent_error_interface_down; //type: uint64
        ydk::YLeaf query_packet_sent_error_no_mpls_caps; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters


class PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters : public ydk::Entity
{
    public:
        DelayGlobalCounters();
        ~DelayGlobalCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_packets_sent; //type: uint64
        ydk::YLeaf query_packets_received; //type: uint64
        ydk::YLeaf received_packet_error_invalid_session_id; //type: uint64
        ydk::YLeaf received_packet_error_no_session; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters


class PerformanceMeasurement::Nodes::Node::Interfaces : public ydk::Entity
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

        class InterfaceDetails; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails
        class InterfaceDelay; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails> interface_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay> interface_delay;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails : public ydk::Entity
{
    public:
        InterfaceDetails();
        ~InterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceDetail; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail

        ydk::YList interface_detail;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail : public ydk::Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf interface_state; //type: boolean
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_v6_address; //type: string
        ydk::YLeaf source_mac_address; //type: string
        ydk::YLeaf primary_vlan_tag; //type: uint16
        ydk::YLeaf secondary_vlan_tag; //type: uint16
        class DelayMeasurementSession; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession

        ydk::YList delay_measurement_session;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession : public ydk::Entity
{
    public:
        DelayMeasurementSession();
        ~DelayMeasurementSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf transport_type; //type: PmTransport
        ydk::YLeaf measurement_type; //type: PmMeasurement
        ydk::YLeaf periodic_advertisement_interval_in_sec; //type: uint32
        class CurrentProbe; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe
        class SessionCounters; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters
        class LastAdvertisementInformation; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation
        class NextAdvertisementInformation; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation
        class LastNotificationControlCode; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode
        class LastErrorControlCode; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode
        class ProbeHistory; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe> current_probe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters> session_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation> last_advertisement_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation> next_advertisement_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode> last_notification_control_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode> last_error_control_code;
        ydk::YList probe_history;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe : public ydk::Entity
{
    public:
        CurrentProbe();
        ~CurrentProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_start_time_stamp; //type: uint64
        ydk::YLeaf next_probe_start_time_remaining_in_millisec; //type: uint32
        ydk::YLeaf next_packet_sent_time_remaining_in_millisec; //type: uint32
        ydk::YLeaf number_of_packets_sent; //type: uint32
        ydk::YLeaf number_of_packets_received; //type: uint32
        ydk::YLeaf probe_not_running_reason; //type: PmProbeNotRunningReason
        class ProbeResults; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults> probe_results;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults : public ydk::Entity
{
    public:
        ProbeResults();
        ~ProbeResults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters : public ydk::Entity
{
    public:
        SessionCounters();
        ~SessionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GenericCounters; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters
        class ExclusiveCounters; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters> generic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters> exclusive_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_packets_sent; //type: uint64
        ydk::YLeaf query_packet_sent_errors; //type: uint64
        ydk::YLeaf query_packet_sent_error_no_ip_address; //type: uint64
        ydk::YLeaf query_packets_received; //type: uint64
        ydk::YLeaf received_packet_error_negative_delay; //type: uint64
        ydk::YLeaf received_packet_error_delay_exceeds_threshold; //type: uint64
        ydk::YLeaf received_packet_error_missing_tx_timestamp; //type: uint64
        ydk::YLeaf received_packet_error_missing_rx_timestamp; //type: uint64
        ydk::YLeaf received_packet_error_probe_full; //type: uint64
        ydk::YLeaf received_packet_error_probe_not_started; //type: uint64
        ydk::YLeaf received_packet_control_code_error; //type: uint64
        ydk::YLeaf received_packet_control_code_notification; //type: uint64
        ydk::YLeaf probes_started; //type: uint64
        ydk::YLeaf probes_complete; //type: uint64
        ydk::YLeaf probes_incomplete; //type: uint64
        ydk::YLeaf advertisement; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters : public ydk::Entity
{
    public:
        ExclusiveCounters();
        ~ExclusiveCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PmTransport
        class InterfaceExclusiveCounters; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters> interface_exclusive_counters;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters : public ydk::Entity
{
    public:
        InterfaceExclusiveCounters();
        ~InterfaceExclusiveCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_packet_sent_error_interface_down; //type: uint64
        ydk::YLeaf query_packet_sent_error_no_mpls_caps; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation : public ydk::Entity
{
    public:
        LastAdvertisementInformation();
        ~LastAdvertisementInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_advertisement; //type: uint64
        ydk::YLeaf advertisement_reason; //type: PmAdvertReason
        class AdvertisedValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues> advertised_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues : public ydk::Entity
{
    public:
        AdvertisedValues();
        ~AdvertisedValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation : public ydk::Entity
{
    public:
        NextAdvertisementInformation();
        ~NextAdvertisementInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertisement_interval_probes_remaining; //type: uint32
        ydk::YLeaf rolling_average; //type: uint32
        class AdvertisementIntervalValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues> advertisement_interval_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues : public ydk::Entity
{
    public:
        AdvertisementIntervalValues();
        ~AdvertisementIntervalValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode : public ydk::Entity
{
    public:
        LastNotificationControlCode();
        ~LastNotificationControlCode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_code; //type: uint8
        ydk::YLeaf timestamp; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode : public ydk::Entity
{
    public:
        LastErrorControlCode();
        ~LastErrorControlCode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_code; //type: uint8
        ydk::YLeaf timestamp; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory : public ydk::Entity
{
    public:
        ProbeHistory();
        ~ProbeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf measurement_value; //type: uint64
        ydk::YLeaf query_timestamp; //type: uint64

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay : public ydk::Entity
{
    public:
        InterfaceDelay();
        ~InterfaceDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceLastAggregations; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations
        class InterfaceProbeHistories; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories
        class InterfaceAggregatedHistories; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories
        class InterfaceLastProbes; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes
        class InterfaceLastAdvertisements; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations> interface_last_aggregations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories> interface_probe_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories> interface_aggregated_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes> interface_last_probes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements> interface_last_advertisements;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations : public ydk::Entity
{
    public:
        InterfaceLastAggregations();
        ~InterfaceLastAggregations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceLastAggregation; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation

        ydk::YList interface_last_aggregation;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation : public ydk::Entity
{
    public:
        InterfaceLastAggregation();
        ~InterfaceLastAggregation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LastAggregation; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation> last_aggregation;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation : public ydk::Entity
{
    public:
        LastAggregation();
        ~LastAggregation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregation_timestamp; //type: uint64
        ydk::YLeaf aggregation_action; //type: PmAdvertReason
        class AggregatedProbeValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues> aggregated_probe_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues : public ydk::Entity
{
    public:
        AggregatedProbeValues();
        ~AggregatedProbeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories : public ydk::Entity
{
    public:
        InterfaceProbeHistories();
        ~InterfaceProbeHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceProbeHistory; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory

        ydk::YList interface_probe_history;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory : public ydk::Entity
{
    public:
        InterfaceProbeHistory();
        ~InterfaceProbeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_handle; //type: uint32
        class History; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History

        ydk::YList history;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_start_timestamp; //type: uint64
        ydk::YLeaf packets_sent; //type: uint32
        ydk::YLeaf packets_received; //type: uint32
        class ProbeValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues> probe_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues : public ydk::Entity
{
    public:
        ProbeValues();
        ~ProbeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories : public ydk::Entity
{
    public:
        InterfaceAggregatedHistories();
        ~InterfaceAggregatedHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAggregatedHistory; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory

        ydk::YList interface_aggregated_history;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory : public ydk::Entity
{
    public:
        InterfaceAggregatedHistory();
        ~InterfaceAggregatedHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_handle; //type: uint32
        class History; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History

        ydk::YList history;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregation_timestamp; //type: uint64
        ydk::YLeaf aggregation_action; //type: PmAdvertReason
        class AggregatedProbeValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues> aggregated_probe_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues : public ydk::Entity
{
    public:
        AggregatedProbeValues();
        ~AggregatedProbeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes : public ydk::Entity
{
    public:
        InterfaceLastProbes();
        ~InterfaceLastProbes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceLastProbe; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe

        ydk::YList interface_last_probe;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe : public ydk::Entity
{
    public:
        InterfaceLastProbe();
        ~InterfaceLastProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LastProbe; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe> last_probe;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe : public ydk::Entity
{
    public:
        LastProbe();
        ~LastProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_start_timestamp; //type: uint64
        ydk::YLeaf packets_sent; //type: uint32
        ydk::YLeaf packets_received; //type: uint32
        class ProbeValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues> probe_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues : public ydk::Entity
{
    public:
        ProbeValues();
        ~ProbeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements : public ydk::Entity
{
    public:
        InterfaceLastAdvertisements();
        ~InterfaceLastAdvertisements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceLastAdvertisement; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement

        ydk::YList interface_last_advertisement;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement : public ydk::Entity
{
    public:
        InterfaceLastAdvertisement();
        ~InterfaceLastAdvertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class LastAdvertisement; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement> last_advertisement;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement : public ydk::Entity
{
    public:
        LastAdvertisement();
        ~LastAdvertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_advertisement; //type: uint64
        ydk::YLeaf advertisement_reason; //type: PmAdvertReason
        class AdvertisedValues; //type: PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues> advertised_values;
        
}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement


class PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues : public ydk::Entity
{
    public:
        AdvertisedValues();
        ~AdvertisedValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf variance; //type: uint32

}; // PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues

class PerformanceMeasurementResponder : public ydk::Entity
{
    public:
        PerformanceMeasurementResponder();
        ~PerformanceMeasurementResponder();

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

        class Nodes; //type: PerformanceMeasurementResponder::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurementResponder::Nodes> nodes;
        
}; // PerformanceMeasurementResponder


class PerformanceMeasurementResponder::Nodes : public ydk::Entity
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

        class Node; //type: PerformanceMeasurementResponder::Nodes::Node

        ydk::YList node;
        
}; // PerformanceMeasurementResponder::Nodes


class PerformanceMeasurementResponder::Nodes::Node : public ydk::Entity
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
        class Summary; //type: PerformanceMeasurementResponder::Nodes::Node::Summary
        class Interfaces; //type: PerformanceMeasurementResponder::Nodes::Node::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurementResponder::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurementResponder::Nodes::Node::Interfaces> interfaces;
        
}; // PerformanceMeasurementResponder::Nodes::Node


class PerformanceMeasurementResponder::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf total_interfaces; //type: uint32
        ydk::YLeaf packet_rate; //type: uint32
        ydk::YLeaf packet_rate_high_water_mark; //type: uint32
        class ResponderCounters; //type: PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters> responder_counters;
        
}; // PerformanceMeasurementResponder::Nodes::Node::Summary


class PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters : public ydk::Entity
{
    public:
        ResponderCounters();
        ~ResponderCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reply_packet_sent; //type: uint64
        ydk::YLeaf reply_packet_sent_error; //type: uint64
        ydk::YLeaf query_packet_received; //type: uint64
        ydk::YLeaf received_packet_error_urotlv_not_present; //type: uint64
        ydk::YLeaf received_packet_error_invalid_source_port_number; //type: uint64
        ydk::YLeaf received_packet_error_no_source_address; //type: uint64
        ydk::YLeaf received_packet_error_no_return_path; //type: uint64
        ydk::YLeaf received_packet_error_invalid_querier_control_code; //type: uint64
        ydk::YLeaf received_packet_error_unsupported_timestamp_format; //type: uint64
        ydk::YLeaf received_packet_error_timestamp_not_available; //type: uint64
        ydk::YLeaf received_packet_error_unsupported_mandatory_tlv; //type: uint64
        ydk::YLeaf received_packet_error_invalid_packet; //type: uint64

}; // PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters


class PerformanceMeasurementResponder::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // PerformanceMeasurementResponder::Nodes::Node::Interfaces


class PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_v6_address; //type: string
        ydk::YLeaf packet_rate; //type: uint32
        ydk::YLeaf packet_rate_high_water_mark; //type: uint32
        ydk::YLeaf cleanup_time_remaining; //type: uint32
        class InterfaceCounters; //type: PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_perf_meas_oper::PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters> interface_counters;
        
}; // PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface


class PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters : public ydk::Entity
{
    public:
        InterfaceCounters();
        ~InterfaceCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reply_packet_sent; //type: uint64
        ydk::YLeaf reply_packet_sent_error; //type: uint64
        ydk::YLeaf query_packet_received; //type: uint64
        ydk::YLeaf received_packet_error_urotlv_not_present; //type: uint64
        ydk::YLeaf received_packet_error_invalid_source_port_number; //type: uint64
        ydk::YLeaf received_packet_error_no_source_address; //type: uint64
        ydk::YLeaf received_packet_error_no_return_path; //type: uint64
        ydk::YLeaf received_packet_error_invalid_querier_control_code; //type: uint64
        ydk::YLeaf received_packet_error_unsupported_timestamp_format; //type: uint64
        ydk::YLeaf received_packet_error_timestamp_not_available; //type: uint64
        ydk::YLeaf received_packet_error_unsupported_mandatory_tlv; //type: uint64
        ydk::YLeaf received_packet_error_invalid_packet; //type: uint64

}; // PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters

class PmMeasurement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf delay_measurement_type;

        static int get_enum_value(const std::string & name) {
            if (name == "delay-measurement-type") return 0;
            return -1;
        }
};

class PmAdvertReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf periodic_timer_expired_no_advertisements;
        static const ydk::Enum::YLeaf periodic_advertisement_threshold_average;
        static const ydk::Enum::YLeaf periodic_advertisement_threshold_minimum;
        static const ydk::Enum::YLeaf periodic_advertisement_threshold_maximum;
        static const ydk::Enum::YLeaf periodic_advertisement_threshold_variance;
        static const ydk::Enum::YLeaf accelerated_advertisement_threshold_minimum;
        static const ydk::Enum::YLeaf accelerated_advertisement_upper_bound_minimum;
        static const ydk::Enum::YLeaf advertisement_enabled;
        static const ydk::Enum::YLeaf advertisement_disabled;
        static const ydk::Enum::YLeaf session_unconfigured;
        static const ydk::Enum::YLeaf clear_cli_command;
        static const ydk::Enum::YLeaf advertise_delay_config;
        static const ydk::Enum::YLeaf advertise_delay_unconfig;
        static const ydk::Enum::YLeaf received_control_code_error;
        static const ydk::Enum::YLeaf link_is_down;

        static int get_enum_value(const std::string & name) {
            if (name == "periodic-timer-expired-no-advertisements") return 0;
            if (name == "periodic-advertisement-threshold-average") return 1;
            if (name == "periodic-advertisement-threshold-minimum") return 2;
            if (name == "periodic-advertisement-threshold-maximum") return 3;
            if (name == "periodic-advertisement-threshold-variance") return 4;
            if (name == "accelerated-advertisement-threshold-minimum") return 5;
            if (name == "accelerated-advertisement-upper-bound-minimum") return 6;
            if (name == "advertisement-enabled") return 7;
            if (name == "advertisement-disabled") return 8;
            if (name == "session-unconfigured") return 9;
            if (name == "clear-cli-command") return 10;
            if (name == "advertise-delay-config") return 11;
            if (name == "advertise-delay-unconfig") return 12;
            if (name == "received-control-code-error") return 13;
            if (name == "link-is-down") return 14;
            return -1;
        }
};

class PmProbeNotRunningReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf probe_is_running;
        static const ydk::Enum::YLeaf platform_not_supported;
        static const ydk::Enum::YLeaf nonv1_active_node;
        static const ydk::Enum::YLeaf control_code_error;
        static const ydk::Enum::YLeaf interface_admin_down;
        static const ydk::Enum::YLeaf interface_down;
        static const ydk::Enum::YLeaf mpls_capability_not_present;
        static const ydk::Enum::YLeaf interface_not_present;
        static const ydk::Enum::YLeaf ip_address_not_configured;

        static int get_enum_value(const std::string & name) {
            if (name == "probe-is-running") return 0;
            if (name == "platform-not-supported") return 1;
            if (name == "nonv1-active-node") return 2;
            if (name == "control-code-error") return 3;
            if (name == "interface-admin-down") return 4;
            if (name == "interface-down") return 5;
            if (name == "mpls-capability-not-present") return 6;
            if (name == "interface-not-present") return 7;
            if (name == "ip-address-not-configured") return 8;
            return -1;
        }
};

class PmDelayMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf delay_mode_one_way;
        static const ydk::Enum::YLeaf delay_mode_two_way;

        static int get_enum_value(const std::string & name) {
            if (name == "delay-mode-one-way") return 0;
            if (name == "delay-mode-two-way") return 1;
            return -1;
        }
};

class PmTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_transport_type;
        static const ydk::Enum::YLeaf rsvpte_transport_type;
        static const ydk::Enum::YLeaf sr_policy_transport_type;

        static int get_enum_value(const std::string & name) {
            if (name == "interface-transport-type") return 0;
            if (name == "rsvpte-transport-type") return 1;
            if (name == "sr-policy-transport-type") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PERF_MEAS_OPER_ */

