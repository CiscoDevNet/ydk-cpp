#ifndef _CISCO_IOS_XR_RPTIMING_DTI_OPER_
#define _CISCO_IOS_XR_RPTIMING_DTI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rptiming_dti_oper {

class DtiController : public ydk::Entity
{
    public:
        DtiController();
        ~DtiController();

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

        class Nodes; //type: DtiController::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_dti_oper::DtiController::Nodes> nodes;
        
}; // DtiController


class DtiController::Nodes : public ydk::Entity
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

        class Node; //type: DtiController::Nodes::Node

        ydk::YList node;
        
}; // DtiController::Nodes


class DtiController::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        class Client; //type: DtiController::Nodes::Node::Client
        class Port; //type: DtiController::Nodes::Node::Port
        class TimeOfDay; //type: DtiController::Nodes::Node::TimeOfDay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_dti_oper::DtiController::Nodes::Node::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_dti_oper::DtiController::Nodes::Node::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_dti_oper::DtiController::Nodes::Node::TimeOfDay> time_of_day;
        
}; // DtiController::Nodes::Node


class DtiController::Nodes::Node::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_comparator_enable; //type: string
        ydk::YLeaf register_write_enable; //type: string
        ydk::YLeaf revertive_mode_enable; //type: string
        ydk::YLeaf port_mode_select; //type: string
        ydk::YLeaf force_freerun; //type: string
        ydk::YLeaf reference_select_port; //type: string
        ydk::YLeaf timestamp_sync_detected; //type: string
        ydk::YLeaf reference10mhz_detected; //type: string
        ydk::YLeaf active_input_port; //type: string
        ydk::YLeaf client_state; //type: string

}; // DtiController::Nodes::Node::Client


class DtiController::Nodes::Node::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1_fr_err_rate_greater5_per; //type: string
        ydk::YLeaf port1_fr_err_rate_greater2_per; //type: string
        ydk::YLeaf port1_dti_signal_detected; //type: string
        ydk::YLeaf port1_server_timing_source; //type: string
        ydk::YLeaf port1_server_type; //type: string
        ydk::YLeaf port1_server_clock_type; //type: string
        ydk::YLeaf port1_server_state; //type: string
        ydk::YLeaf port1_client_perf_stable; //type: string
        ydk::YLeaf port1_cable_advance_valid; //type: string
        ydk::YLeaf port2_fr_err_rate_greater5_per; //type: string
        ydk::YLeaf port2_fr_err_rate_greater2_per; //type: string
        ydk::YLeaf port2_dti_signal_detected; //type: string
        ydk::YLeaf port2_server_timing_source; //type: string
        ydk::YLeaf port2_server_type; //type: string
        ydk::YLeaf port2_server_clock_type; //type: string
        ydk::YLeaf port2_server_state; //type: string
        ydk::YLeaf port2_client_perf_stable; //type: string
        ydk::YLeaf port2_cable_advance_valid; //type: string

}; // DtiController::Nodes::Node::Port


class DtiController::Nodes::Node::TimeOfDay : public ydk::Entity
{
    public:
        TimeOfDay();
        ~TimeOfDay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1_tod_message_mode; //type: string
        ydk::YLeaf port1_tod_state; //type: string
        ydk::YLeaf port1_tod_time_setting_mode; //type: string
        ydk::YLeaf port1_gps_seconds; //type: uint32
        ydk::YLeaf port1_leap_seconds; //type: uint8
        ydk::YLeaf port1_calendar_time_valid; //type: string
        ydk::YLeaf port1_modified_julian_date; //type: string
        ydk::YLeaf port1_date; //type: string
        ydk::YLeaf port1_time; //type: string
        ydk::YLeaf port1_time_zone_offset; //type: string
        ydk::YLeaf port1_leap_second_indicator; //type: uint8
        ydk::YLeaf port2_tod_message_mode; //type: string
        ydk::YLeaf port2_tod_state; //type: string
        ydk::YLeaf port2_tod_time_setting_mode; //type: string
        ydk::YLeaf port2_gps_seconds; //type: uint32
        ydk::YLeaf port2_leap_seconds; //type: uint8
        ydk::YLeaf port2_calendar_time_valid; //type: string
        ydk::YLeaf port2_modified_julian_date; //type: string
        ydk::YLeaf port2_date; //type: string
        ydk::YLeaf port2_time; //type: string
        ydk::YLeaf port2_time_zone_offset; //type: string
        ydk::YLeaf port2_leap_second_indicator; //type: uint8

}; // DtiController::Nodes::Node::TimeOfDay


}
}

#endif /* _CISCO_IOS_XR_RPTIMING_DTI_OPER_ */

