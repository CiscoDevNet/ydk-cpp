#ifndef _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_
#define _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_terminal_device_oper {

class OpticalInterface : public ydk::Entity
{
    public:
        OpticalInterface();
        ~OpticalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class ConfigStatus; //type: OpticalInterface::ConfigStatus
        class OpticalChannelInterfaces; //type: OpticalInterface::OpticalChannelInterfaces
        class Graph; //type: OpticalInterface::Graph
        class OperationalModes; //type: OpticalInterface::OperationalModes
        class OpticalLogicalInterfaces; //type: OpticalInterface::OpticalLogicalInterfaces

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus> config_status;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::Graph> graph;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OperationalModes> operational_modes;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalChannelInterfaces> optical_channel_interfaces;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces> optical_logical_interfaces;
        
}; // OpticalInterface


class OpticalInterface::ConfigStatus : public ydk::Entity
{
    public:
        ConfigStatus();
        ~ConfigStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PartialConfig; //type: OpticalInterface::ConfigStatus::PartialConfig
        class SliceTables; //type: OpticalInterface::ConfigStatus::SliceTables

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::PartialConfig> partial_config;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables> slice_tables;
        
}; // OpticalInterface::ConfigStatus


class OpticalInterface::ConfigStatus::PartialConfig : public ydk::Entity
{
    public:
        PartialConfig();
        ~PartialConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partial_config; //type: uint8

}; // OpticalInterface::ConfigStatus::PartialConfig


class OpticalInterface::ConfigStatus::SliceTables : public ydk::Entity
{
    public:
        SliceTables();
        ~SliceTables();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceTable; //type: OpticalInterface::ConfigStatus::SliceTables::SliceTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables::SliceTable> > slice_table;
        
}; // OpticalInterface::ConfigStatus::SliceTables


class OpticalInterface::ConfigStatus::SliceTables::SliceTable : public ydk::Entity
{
    public:
        SliceTable();
        ~SliceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        class SliceStatusAttr; //type: OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr> slice_status_attr;
        
}; // OpticalInterface::ConfigStatus::SliceTables::SliceTable


class OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr : public ydk::Entity
{
    public:
        SliceStatusAttr();
        ~SliceStatusAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice; //type: uint8
        ydk::YLeaf prov_status; //type: string
        ydk::YLeaf present_config; //type: string
        ydk::YLeaf present_timestamp; //type: string
        ydk::YLeaf past_config; //type: string
        ydk::YLeaf past_timestamp; //type: string
        ydk::YLeaf err_str; //type: string
        ydk::YLeaf err_timestamp; //type: string

}; // OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr


class OpticalInterface::OpticalChannelInterfaces : public ydk::Entity
{
    public:
        OpticalChannelInterfaces();
        ~OpticalChannelInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticalChannelInterface; //type: OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface> > optical_channel_interface;
        
}; // OpticalInterface::OpticalChannelInterfaces


class OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface : public ydk::Entity
{
    public:
        OpticalChannelInterface();
        ~OpticalChannelInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        class OpticalChannelInterfaceAttr; //type: OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr> optical_channel_interface_attr;
        
}; // OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface


class OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr : public ydk::Entity
{
    public:
        OpticalChannelInterfaceAttr();
        ~OpticalChannelInterfaceAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf frequency; //type: uint64
        ydk::YLeaf power; //type: uint64
        ydk::YLeaf oper_mode; //type: uint32
        ydk::YLeaf line_port; //type: string

}; // OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr


class OpticalInterface::Graph : public ydk::Entity
{
    public:
        Graph();
        ~Graph();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjListPath; //type: OpticalInterface::Graph::AdjListPath
        class GraphStructurePath; //type: OpticalInterface::Graph::GraphStructurePath

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::Graph::AdjListPath> adj_list_path;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::Graph::GraphStructurePath> graph_structure_path;
        
}; // OpticalInterface::Graph


class OpticalInterface::Graph::AdjListPath : public ydk::Entity
{
    public:
        AdjListPath();
        ~AdjListPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string

}; // OpticalInterface::Graph::AdjListPath


class OpticalInterface::Graph::GraphStructurePath : public ydk::Entity
{
    public:
        GraphStructurePath();
        ~GraphStructurePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string

}; // OpticalInterface::Graph::GraphStructurePath


class OpticalInterface::OperationalModes : public ydk::Entity
{
    public:
        OperationalModes();
        ~OperationalModes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperationalMode; //type: OpticalInterface::OperationalModes::OperationalMode

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode> > operational_mode;
        
}; // OpticalInterface::OperationalModes


class OpticalInterface::OperationalModes::OperationalMode : public ydk::Entity
{
    public:
        OperationalMode();
        ~OperationalMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode_id; //type: int32
        class OperationalModeAttributes; //type: OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes> operational_mode_attributes;
        
}; // OpticalInterface::OperationalModes::OperationalMode


class OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes : public ydk::Entity
{
    public:
        OperationalModeAttributes();
        ~OperationalModeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_id; //type: string

}; // OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes


class OpticalInterface::OpticalLogicalInterfaces : public ydk::Entity
{
    public:
        OpticalLogicalInterfaces();
        ~OpticalLogicalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticalLogicalInterface; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface> > optical_logical_interface;
        
}; // OpticalInterface::OpticalLogicalInterfaces


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface : public ydk::Entity
{
    public:
        OpticalLogicalInterface();
        ~OpticalLogicalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        class OpticalLogicalInterfaceAttr; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr
        class OpticalLogicalInterfaceLogicalChannelAssignments; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr> optical_logical_interface_attr;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments> optical_logical_interface_logical_channel_assignments;
        
}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr : public ydk::Entity
{
    public:
        OpticalLogicalInterfaceAttr();
        ~OpticalLogicalInterfaceAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logical_channel_index; //type: uint32
        ydk::YLeaf logical_channel_ifname; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf trib_rate_class; //type: TribRateClass
        ydk::YLeaf trib_protocol; //type: TribProtocol
        ydk::YLeaf protocol_type; //type: LogicalProtocol
        ydk::YLeaf admin_state; //type: uint32
        ydk::YLeaf loopback_mode; //type: uint32
        ydk::YLeaf ingress_client_port; //type: string
        ydk::YLeaf ingress_physical_channel; //type: uint32
        ydk::YLeaf tti_transmit; //type: string
        ydk::YLeaf tti_expected; //type: string

}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments : public ydk::Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignments();
        ~OpticalLogicalInterfaceLogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticalLogicalInterfaceLogicalChannelAssignment; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment> > optical_logical_interface_logical_channel_assignment;
        
}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment : public ydk::Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignment();
        ~OpticalLogicalInterfaceLogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        class OpticalLogicalInterfaceLogicalChannelAssignmentAttr; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr> optical_logical_interface_logical_channel_assignment_attr;
        
}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr : public ydk::Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignmentAttr();
        ~OpticalLogicalInterfaceLogicalChannelAssignmentAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf is_logical_link; //type: boolean
        ydk::YLeaf logical_channel; //type: uint32
        ydk::YLeaf optical_channel; //type: string
        ydk::YLeaf allocation; //type: uint32
        ydk::YLeaf assignment_type; //type: uint32

}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr

class TribRateClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trib_rate_unknown;
        static const ydk::Enum::YLeaf trib_rate1g;
        static const ydk::Enum::YLeaf trib_rate25g;
        static const ydk::Enum::YLeaf trib_rate10g;
        static const ydk::Enum::YLeaf trib_rate40g;
        static const ydk::Enum::YLeaf trib_rate100g;

};

class LogicalProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf proto_type_unknown;
        static const ydk::Enum::YLeaf proto_type_ethernet;
        static const ydk::Enum::YLeaf proto_type_otn;

};

class TribProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trib_proto_type_unknown;
        static const ydk::Enum::YLeaf trib_proto_type1ge;
        static const ydk::Enum::YLeaf trib_proto_type_oc48;
        static const ydk::Enum::YLeaf trib_proto_type_stm16;
        static const ydk::Enum::YLeaf trib_proto_type10gelan;
        static const ydk::Enum::YLeaf trib_proto_type10gewan;
        static const ydk::Enum::YLeaf trib_proto_type_oc192;
        static const ydk::Enum::YLeaf trib_proto_type_stm64;
        static const ydk::Enum::YLeaf trib_proto_type_otu2;
        static const ydk::Enum::YLeaf trib_proto_type_otu2e;
        static const ydk::Enum::YLeaf trib_proto_type_otu1e;
        static const ydk::Enum::YLeaf trib_proto_type_odu2;
        static const ydk::Enum::YLeaf trib_proto_type_odu2e;
        static const ydk::Enum::YLeaf trib_proto_type40ge;
        static const ydk::Enum::YLeaf trib_proto_type_oc768;
        static const ydk::Enum::YLeaf trib_proto_type_stm256;
        static const ydk::Enum::YLeaf trib_proto_type_otu3;
        static const ydk::Enum::YLeaf trib_proto_type_odu3;
        static const ydk::Enum::YLeaf trib_proto_type100ge;
        static const ydk::Enum::YLeaf trib_proto_type100g_mlg;
        static const ydk::Enum::YLeaf trib_proto_type_otu4;
        static const ydk::Enum::YLeaf trib_proto_type_otu_cn;
        static const ydk::Enum::YLeaf trib_proto_type_odu4;

};


}
}

#endif /* _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_ */

