#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_link_oam_oper {

class EtherLinkOam : public ydk::Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

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

        class DiscoveryInfoInterfaces; //type: EtherLinkOam::DiscoveryInfoInterfaces
        class InterfaceStateInterfaces; //type: EtherLinkOam::InterfaceStateInterfaces
        class RunningConfigInterfaces; //type: EtherLinkOam::RunningConfigInterfaces
        class Nodes; //type: EtherLinkOam::Nodes
        class EventLogEntryInterfaces; //type: EtherLinkOam::EventLogEntryInterfaces
        class StatsInterfaces; //type: EtherLinkOam::StatsInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::DiscoveryInfoInterfaces> discovery_info_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces> event_log_entry_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces> interface_state_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::RunningConfigInterfaces> running_config_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::StatsInterfaces> stats_interfaces;
        
}; // EtherLinkOam


class EtherLinkOam::DiscoveryInfoInterfaces : public ydk::Entity
{
    public:
        DiscoveryInfoInterfaces();
        ~DiscoveryInfoInterfaces();

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

        class DiscoveryInfoInterface; //type: EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface> > discovery_info_interface;
        
}; // EtherLinkOam::DiscoveryInfoInterfaces


class EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface : public ydk::Entity
{
    public:
        DiscoveryInfoInterface();
        ~DiscoveryInfoInterface();

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

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf operational_status; //type: OperationalState
        ydk::YLeaf loopback_mode; //type: LoopbackStatus
        ydk::YLeaf local_mode; //type: Mode
        ydk::YLeaf miswired; //type: boolean
        ydk::YLeaf local_mwd_key; //type: uint32
        ydk::YLeaf local_function_unidirectional; //type: boolean
        ydk::YLeaf local_function_loopback; //type: boolean
        ydk::YLeaf local_function_event; //type: boolean
        ydk::YLeaf local_functionvariable; //type: boolean
        ydk::YLeaf local_revision; //type: uint32
        ydk::YLeaf local_mtu; //type: uint32
        ydk::YLeaf local_operational; //type: boolean
        ydk::YLeaf local_evaluating; //type: boolean
        ydk::YLeaf remote_mode; //type: Mode
        ydk::YLeaf remote_unidirectional; //type: boolean
        ydk::YLeaf remote_loopback; //type: boolean
        ydk::YLeaf remote_event; //type: boolean
        ydk::YLeaf remote_variable; //type: boolean
        ydk::YLeaf remote_mtu; //type: uint32
        ydk::YLeaf remote_mac_address; //type: string
        ydk::YLeaf remote_vendor_oui; //type: string
        ydk::YLeaf remote_revision; //type: uint16
        ydk::YLeaf remote_vendor_info; //type: uint32
        ydk::YLeaf remote_mwd_key; //type: uint32
        ydk::YLeaf operational_status_valid; //type: boolean
        ydk::YLeaf loopback_mode_valid; //type: boolean
        ydk::YLeaf local_mode_valid; //type: boolean
        ydk::YLeaf miswired_valid; //type: boolean
        ydk::YLeaf local_mwd_key_valid; //type: boolean
        ydk::YLeaf local_function_unidirectional_valid; //type: boolean
        ydk::YLeaf local_function_loopback_valid; //type: boolean
        ydk::YLeaf local_function_event_valid; //type: boolean
        ydk::YLeaf local_functionvariable_valid; //type: boolean
        ydk::YLeaf local_revisionvalid; //type: boolean
        ydk::YLeaf local_mtu_valid; //type: boolean
        ydk::YLeaf remote_mode_valid; //type: boolean
        ydk::YLeaf remote_unidirectional_valid; //type: boolean
        ydk::YLeaf remote_loopback_valid; //type: boolean
        ydk::YLeaf remote_event_valid; //type: boolean
        ydk::YLeaf remote_variable_valid; //type: boolean
        ydk::YLeaf remote_mtu_valid; //type: boolean
        ydk::YLeaf remote_mac_address_valid; //type: boolean
        ydk::YLeaf remote_vendor_oui_valid; //type: boolean
        ydk::YLeaf remote_revisionvalid; //type: boolean
        ydk::YLeaf remote_vendor_info_valid; //type: boolean
        ydk::YLeaf remote_mwd_key_valid; //type: boolean
        ydk::YLeaf received_at_risk_notification_timestamp; //type: uint64
        ydk::YLeaf received_at_risk_notification_time_remaining; //type: uint16

}; // EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface


class EtherLinkOam::EventLogEntryInterfaces : public ydk::Entity
{
    public:
        EventLogEntryInterfaces();
        ~EventLogEntryInterfaces();

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

        class EventLogEntryInterface; //type: EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface> > event_log_entry_interface;
        
}; // EtherLinkOam::EventLogEntryInterfaces


class EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface : public ydk::Entity
{
    public:
        EventLogEntryInterface();
        ~EventLogEntryInterface();

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

        ydk::YLeaf member_interface; //type: string
        class EventLogEntryIndexes; //type: EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes> event_log_entry_indexes;
        
}; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface


class EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes : public ydk::Entity
{
    public:
        EventLogEntryIndexes();
        ~EventLogEntryIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventLogEntryIndex; //type: EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex> > event_log_entry_index;
        
}; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes


class EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex : public ydk::Entity
{
    public:
        EventLogEntryIndex();
        ~EventLogEntryIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_log_entry_index; //type: string
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf handle; //type: string
        ydk::YLeaf oui; //type: string
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf type; //type: Log
        ydk::YLeaf location; //type: LogLocation
        ydk::YLeaf event_total; //type: uint32
        ydk::YLeaf action_taken; //type: Action
        ydk::YLeaf window; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf local_high_threshold; //type: uint64
        ydk::YLeaf value_; //type: uint64
        ydk::YLeaf running_total; //type: uint64
        ydk::YLeaf window_config_units; //type: uint64
        ydk::YLeaf window_units; //type: uint8
        ydk::YLeaf threshold_config_units; //type: uint64
        ydk::YLeaf threshold_units; //type: uint8
        ydk::YLeaf local_high_threshold_config_units; //type: uint64
        ydk::YLeaf value_config_units; //type: uint64

}; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex


class EtherLinkOam::InterfaceStateInterfaces : public ydk::Entity
{
    public:
        InterfaceStateInterfaces();
        ~InterfaceStateInterfaces();

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

        class InterfaceStateInterface; //type: EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface> > interface_state_interface;
        
}; // EtherLinkOam::InterfaceStateInterfaces


class EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface : public ydk::Entity
{
    public:
        InterfaceStateInterface();
        ~InterfaceStateInterface();

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

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf protocol_code; //type: ProtocolState
        ydk::YLeaf rx_fault; //type: boolean
        ydk::YLeaf local_mwd_key; //type: uint32
        ydk::YLeaf remote_mwd_key_present; //type: boolean
        ydk::YLeaf remote_mwd_key; //type: uint32
        class Errors; //type: EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors
        class EfdTriggers; //type: EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers> efd_triggers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors> errors;
        
}; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface


class EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers : public ydk::Entity
{
    public:
        EfdTriggers();
        ~EfdTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_fault_received; //type: boolean
        ydk::YLeaf discovery_timed_out; //type: boolean
        ydk::YLeaf capabilities_conflict; //type: boolean
        ydk::YLeaf wiring_conflict; //type: boolean
        ydk::YLeaf session_down; //type: boolean

}; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers


class EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfi_reason; //type: string
        ydk::YLeaf pfi_error_code; //type: uint32
        ydk::YLeaf platform_reason; //type: string
        ydk::YLeaf platform_error_code; //type: uint32
        ydk::YLeaf spio_reason; //type: string
        ydk::YLeaf spio_error_code; //type: uint32
        ydk::YLeaf epi_reason; //type: string
        ydk::YLeaf epi_error_code; //type: uint32
        ydk::YLeaf caps_add_reason; //type: string
        ydk::YLeaf caps_add_error_code; //type: uint32

}; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors


class EtherLinkOam::Nodes : public ydk::Entity
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

        class Node; //type: EtherLinkOam::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes::Node> > node;
        
}; // EtherLinkOam::Nodes


class EtherLinkOam::Nodes::Node : public ydk::Entity
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
        class Summary; //type: EtherLinkOam::Nodes::Node::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes::Node::Summary> summary;
        
}; // EtherLinkOam::Nodes::Node


class EtherLinkOam::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf interfaces; //type: uint32
        ydk::YLeaf port_down; //type: uint32
        ydk::YLeaf passive_wait; //type: uint32
        ydk::YLeaf active_send; //type: uint32
        ydk::YLeaf evaluating; //type: uint32
        ydk::YLeaf local_accept; //type: uint32
        ydk::YLeaf local_reject; //type: uint32
        ydk::YLeaf remote_reject; //type: uint32
        ydk::YLeaf operational; //type: uint32
        ydk::YLeaf loopback_mode; //type: uint32
        ydk::YLeaf miswired_connections; //type: uint32
        ydk::YLeaf events; //type: uint64
        ydk::YLeaf local_events; //type: uint64
        ydk::YLeaf local_symbol_period; //type: uint64
        ydk::YLeaf local_frame; //type: uint64
        ydk::YLeaf local_frame_period; //type: uint64
        ydk::YLeaf local_frame_seconds; //type: uint64
        ydk::YLeaf remote_events; //type: uint64
        ydk::YLeaf remote_symbol_period; //type: uint64
        ydk::YLeaf remote_frame; //type: uint64
        ydk::YLeaf remote_frame_period; //type: uint64
        ydk::YLeaf remote_frame_seconds; //type: uint64

}; // EtherLinkOam::Nodes::Node::Summary


class EtherLinkOam::RunningConfigInterfaces : public ydk::Entity
{
    public:
        RunningConfigInterfaces();
        ~RunningConfigInterfaces();

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

        class RunningConfigInterface; //type: EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface> > running_config_interface;
        
}; // EtherLinkOam::RunningConfigInterfaces


class EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface : public ydk::Entity
{
    public:
        RunningConfigInterface();
        ~RunningConfigInterface();

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

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf fast_hello_interval_enabled; //type: boolean
        ydk::YLeaf link_monitor_enabled; //type: boolean
        ydk::YLeaf remote_loopback_enabled; //type: boolean
        ydk::YLeaf mib_retrieval_enabled; //type: boolean
        ydk::YLeaf udlf_enabled; //type: boolean
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf connection_timeout; //type: uint8
        ydk::YLeaf symbol_period_window; //type: uint32
        ydk::YLeaf symbol_period_window_units; //type: uint8
        ydk::YLeaf symbol_period_window_multiplier; //type: uint8
        ydk::YLeaf symbol_period_threshold_low; //type: uint64
        ydk::YLeaf symbol_period_threshold_high; //type: uint64
        ydk::YLeaf symbol_period_threshold_units; //type: uint8
        ydk::YLeaf symbol_period_threshold_low_multiplier; //type: uint8
        ydk::YLeaf symbol_period_threshold_high_multiplier; //type: uint8
        ydk::YLeaf frame_window; //type: uint32
        ydk::YLeaf frame_threshold_low; //type: uint64
        ydk::YLeaf frame_threshold_high; //type: uint64
        ydk::YLeaf frame_threshold_low_multiplier; //type: uint8
        ydk::YLeaf frame_threshold_high_multiplier; //type: uint8
        ydk::YLeaf frame_period_window; //type: uint32
        ydk::YLeaf frame_period_window_units; //type: uint8
        ydk::YLeaf frame_period_window_multiplier; //type: uint8
        ydk::YLeaf frame_period_threshold_low; //type: uint64
        ydk::YLeaf frame_period_threshold_high; //type: uint64
        ydk::YLeaf frame_period_threshold_units; //type: uint8
        ydk::YLeaf frame_period_threshold_low_multiplier; //type: uint8
        ydk::YLeaf frame_period_threshold_high_multiplier; //type: uint8
        ydk::YLeaf frame_seconds_window; //type: uint32
        ydk::YLeaf frame_seconds_threshold_low; //type: uint64
        ydk::YLeaf frame_seconds_threshold_high; //type: uint64
        ydk::YLeaf high_threshold_action; //type: Action
        ydk::YLeaf link_fault_action; //type: Action
        ydk::YLeaf dying_gasp_action; //type: Action
        ydk::YLeaf critical_event_action; //type: Action
        ydk::YLeaf discovery_timeout_action; //type: Action
        ydk::YLeaf capabilities_conflict_action; //type: Action
        ydk::YLeaf wiring_conflict_action; //type: Action
        ydk::YLeaf session_up_action; //type: Action
        ydk::YLeaf session_down_action; //type: Action
        ydk::YLeaf remote_loopback_action; //type: Action
        ydk::YLeaf require_remote_mode; //type: Mode
        ydk::YLeaf require_remote_mib_retrieval; //type: boolean
        ydk::YLeaf require_loopback; //type: boolean
        ydk::YLeaf require_link_monitoring; //type: boolean
        ydk::YLeaf fast_hello_interval_enabled_overridden; //type: boolean
        ydk::YLeaf link_monitoring_enabled_overridden; //type: boolean
        ydk::YLeaf remote_loopback_enabled_overridden; //type: boolean
        ydk::YLeaf mib_retrieval_enabled_overridden; //type: boolean
        ydk::YLeaf udlf_enabled_overridden; //type: boolean
        ydk::YLeaf mode_overridden; //type: boolean
        ydk::YLeaf connection_timeout_overridden; //type: boolean
        ydk::YLeaf symbol_period_window_overridden; //type: boolean
        ydk::YLeaf symbol_period_threshold_low_overridden; //type: boolean
        ydk::YLeaf symbol_period_threshold_high_overridden; //type: boolean
        ydk::YLeaf frame_window_overridden; //type: boolean
        ydk::YLeaf frame_threshold_low_overridden; //type: boolean
        ydk::YLeaf frame_threshold_high_overridden; //type: boolean
        ydk::YLeaf frame_period_window_overridden; //type: boolean
        ydk::YLeaf frame_period_threshold_low_overridden; //type: boolean
        ydk::YLeaf frame_period_threshold_high_overridden; //type: boolean
        ydk::YLeaf frame_seconds_window_overridden; //type: boolean
        ydk::YLeaf frame_seconds_threshold_low_overridden; //type: boolean
        ydk::YLeaf frame_seconds_threshold_high_overridden; //type: boolean
        ydk::YLeaf high_threshold_action_overridden; //type: boolean
        ydk::YLeaf link_fault_action_overridden; //type: boolean
        ydk::YLeaf dying_gasp_action_overridden; //type: boolean
        ydk::YLeaf critical_event_action_overridden; //type: boolean
        ydk::YLeaf discovery_timeout_action_overridden; //type: boolean
        ydk::YLeaf capabilities_conflict_action_overridden; //type: boolean
        ydk::YLeaf wiring_conflict_action_overridden; //type: boolean
        ydk::YLeaf session_down_action_overridden; //type: boolean
        ydk::YLeaf session_up_action_overridden; //type: boolean
        ydk::YLeaf remote_loopback_action_overridden; //type: boolean
        ydk::YLeaf require_mode_overridden; //type: boolean
        ydk::YLeaf require_mib_retrieval_overridden; //type: boolean
        ydk::YLeaf require_loopback_overridden; //type: boolean
        ydk::YLeaf require_link_monitoring_overridden; //type: boolean

}; // EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface


class EtherLinkOam::StatsInterfaces : public ydk::Entity
{
    public:
        StatsInterfaces();
        ~StatsInterfaces();

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

        class StatsInterface; //type: EtherLinkOam::StatsInterfaces::StatsInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::StatsInterfaces::StatsInterface> > stats_interface;
        
}; // EtherLinkOam::StatsInterfaces


class EtherLinkOam::StatsInterfaces::StatsInterface : public ydk::Entity
{
    public:
        StatsInterface();
        ~StatsInterface();

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

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf information_tx; //type: uint32
        ydk::YLeaf information_rx; //type: uint32
        ydk::YLeaf unique_event_notification_tx; //type: uint32
        ydk::YLeaf unique_event_notification_rx; //type: uint32
        ydk::YLeaf duplicate_event_notification_tx; //type: uint32
        ydk::YLeaf duplicate_event_notification_rx; //type: uint32
        ydk::YLeaf loopback_control_tx; //type: uint32
        ydk::YLeaf loopback_control_rx; //type: uint32
        ydk::YLeaf variable_request_tx; //type: uint32
        ydk::YLeaf variable_request_rx; //type: uint32
        ydk::YLeaf variable_response_tx; //type: uint32
        ydk::YLeaf variable_response_rx; //type: uint32
        ydk::YLeaf org_specific_tx; //type: uint32
        ydk::YLeaf org_specific_rx; //type: uint32
        ydk::YLeaf unsupported_codes_tx; //type: uint32
        ydk::YLeaf unsupported_codes_rx; //type: uint32
        ydk::YLeaf frames_lost_due_to_oam; //type: uint32
        ydk::YLeaf fixed_frames_rx; //type: uint32
        ydk::YLeaf local_error_symbol_period_records; //type: uint32
        ydk::YLeaf local_error_frame_records; //type: uint32
        ydk::YLeaf local_error_frame_period_records; //type: uint32
        ydk::YLeaf local_error_frame_second_records; //type: uint32
        ydk::YLeaf remote_error_symbol_period_records; //type: uint32
        ydk::YLeaf remote_error_frame_records; //type: uint32
        ydk::YLeaf remote_error_frame_period_records; //type: uint32
        ydk::YLeaf remote_error_frame_second_records; //type: uint32

}; // EtherLinkOam::StatsInterfaces::StatsInterface

class OperationalState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf link_fault;
        static const ydk::Enum::YLeaf passive_wait;
        static const ydk::Enum::YLeaf active_send_local;
        static const ydk::Enum::YLeaf send_local_and_remote;
        static const ydk::Enum::YLeaf send_local_and_remote_ok;
        static const ydk::Enum::YLeaf peering_locally_rejected;
        static const ydk::Enum::YLeaf peering_remotely_rejected;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf operational_half_duplex;

};

class LogLocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log_location_local;
        static const ydk::Enum::YLeaf log_location_remote;

};

class Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_action;
        static const ydk::Enum::YLeaf disable_interface;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf efd;

};

class ProtocolState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protocol_state_inactive;
        static const ydk::Enum::YLeaf protocol_state_fault;
        static const ydk::Enum::YLeaf protocol_state_active_send_local;
        static const ydk::Enum::YLeaf protocol_state_passive_wait;
        static const ydk::Enum::YLeaf protocol_state_send_local_remote;
        static const ydk::Enum::YLeaf protocol_state_send_local_remote_ok;
        static const ydk::Enum::YLeaf protocol_state_send_any;

};

class Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf dont_care;

};

class Log : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log_type_symbol_event;
        static const ydk::Enum::YLeaf log_type_period_event;
        static const ydk::Enum::YLeaf log_type_frame_event;
        static const ydk::Enum::YLeaf log_type_secs_event;
        static const ydk::Enum::YLeaf log_type_link_fault;
        static const ydk::Enum::YLeaf log_type_dying_gasp;
        static const ydk::Enum::YLeaf log_type_critical_event;

};

class LoopbackStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf initiating;
        static const ydk::Enum::YLeaf master_loopback;
        static const ydk::Enum::YLeaf terminating;
        static const ydk::Enum::YLeaf local_loopback;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_ */

