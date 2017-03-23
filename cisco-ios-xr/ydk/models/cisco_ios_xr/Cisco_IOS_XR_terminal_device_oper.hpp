#ifndef _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_
#define _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_terminal_device_oper {

class OpticalInterface : public Entity
{
    public:
        OpticalInterface();
        ~OpticalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



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


class OpticalInterface::ConfigStatus : public Entity
{
    public:
        ConfigStatus();
        ~ConfigStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PartialConfig; //type: OpticalInterface::ConfigStatus::PartialConfig
        class SliceTables; //type: OpticalInterface::ConfigStatus::SliceTables

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::PartialConfig> partial_config;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables> slice_tables;


}; // OpticalInterface::ConfigStatus


class OpticalInterface::ConfigStatus::PartialConfig : public Entity
{
    public:
        PartialConfig();
        ~PartialConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf partial_config; //type: uint8



}; // OpticalInterface::ConfigStatus::PartialConfig


class OpticalInterface::ConfigStatus::SliceTables : public Entity
{
    public:
        SliceTables();
        ~SliceTables();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SliceTable; //type: OpticalInterface::ConfigStatus::SliceTables::SliceTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables::SliceTable> > slice_table;


}; // OpticalInterface::ConfigStatus::SliceTables


class OpticalInterface::ConfigStatus::SliceTables::SliceTable : public Entity
{
    public:
        SliceTable();
        ~SliceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32

        class SliceStatusAttr; //type: OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr> slice_status_attr;


}; // OpticalInterface::ConfigStatus::SliceTables::SliceTable


class OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr : public Entity
{
    public:
        SliceStatusAttr();
        ~SliceStatusAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slice; //type: uint8
        YLeaf prov_status; //type: string
        YLeaf present_config; //type: string
        YLeaf present_timestamp; //type: string
        YLeaf past_config; //type: string
        YLeaf past_timestamp; //type: string
        YLeaf err_str; //type: string
        YLeaf err_timestamp; //type: string



}; // OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr


class OpticalInterface::OpticalChannelInterfaces : public Entity
{
    public:
        OpticalChannelInterfaces();
        ~OpticalChannelInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticalChannelInterface; //type: OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface> > optical_channel_interface;


}; // OpticalInterface::OpticalChannelInterfaces


class OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface : public Entity
{
    public:
        OpticalChannelInterface();
        ~OpticalChannelInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location; //type: string

        class OpticalChannelInterfaceAttr; //type: OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr> optical_channel_interface_attr;


}; // OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface


class OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr : public Entity
{
    public:
        OpticalChannelInterfaceAttr();
        ~OpticalChannelInterfaceAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf index_; //type: uint32
        YLeaf frequency; //type: uint64
        YLeaf power; //type: uint64
        YLeaf oper_mode; //type: uint32
        YLeaf line_port; //type: string



}; // OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr


class OpticalInterface::Graph : public Entity
{
    public:
        Graph();
        ~Graph();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdjListPath; //type: OpticalInterface::Graph::AdjListPath
        class GraphStructurePath; //type: OpticalInterface::Graph::GraphStructurePath

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::Graph::AdjListPath> adj_list_path;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::Graph::GraphStructurePath> graph_structure_path;


}; // OpticalInterface::Graph


class OpticalInterface::Graph::AdjListPath : public Entity
{
    public:
        AdjListPath();
        ~AdjListPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string



}; // OpticalInterface::Graph::AdjListPath


class OpticalInterface::Graph::GraphStructurePath : public Entity
{
    public:
        GraphStructurePath();
        ~GraphStructurePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string



}; // OpticalInterface::Graph::GraphStructurePath


class OpticalInterface::OperationalModes : public Entity
{
    public:
        OperationalModes();
        ~OperationalModes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OperationalMode; //type: OpticalInterface::OperationalModes::OperationalMode

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode> > operational_mode;


}; // OpticalInterface::OperationalModes


class OpticalInterface::OperationalModes::OperationalMode : public Entity
{
    public:
        OperationalMode();
        ~OperationalMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode_id; //type: int32

        class OperationalModeAttributes; //type: OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes> operational_mode_attributes;


}; // OpticalInterface::OperationalModes::OperationalMode


class OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes : public Entity
{
    public:
        OperationalModeAttributes();
        ~OperationalModeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf description; //type: string
        YLeaf vendor_id; //type: string



}; // OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes


class OpticalInterface::OpticalLogicalInterfaces : public Entity
{
    public:
        OpticalLogicalInterfaces();
        ~OpticalLogicalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticalLogicalInterface; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface> > optical_logical_interface;


}; // OpticalInterface::OpticalLogicalInterfaces


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface : public Entity
{
    public:
        OpticalLogicalInterface();
        ~OpticalLogicalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32

        class OpticalLogicalInterfaceAttr; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr
        class OpticalLogicalInterfaceLogicalChannelAssignments; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr> optical_logical_interface_attr;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments> optical_logical_interface_logical_channel_assignments;


}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr : public Entity
{
    public:
        OpticalLogicalInterfaceAttr();
        ~OpticalLogicalInterfaceAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logical_channel_index; //type: uint32
        YLeaf logical_channel_ifname; //type: string
        YLeaf type; //type: string
        YLeaf trib_rate_class; //type: TribRateClassEnum
        YLeaf trib_protocol; //type: TribProtocolEnum
        YLeaf protocol_type; //type: LogicalProtocolEnum
        YLeaf admin_state; //type: uint32
        YLeaf loopback_mode; //type: uint32
        YLeaf ingress_client_port; //type: string
        YLeaf ingress_physical_channel; //type: uint32
        YLeaf tti_transmit; //type: string
        YLeaf tti_expected; //type: string



}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments : public Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignments();
        ~OpticalLogicalInterfaceLogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticalLogicalInterfaceLogicalChannelAssignment; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment> > optical_logical_interface_logical_channel_assignment;


}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment : public Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignment();
        ~OpticalLogicalInterfaceLogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32

        class OpticalLogicalInterfaceLogicalChannelAssignmentAttr; //type: OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr

        std::shared_ptr<Cisco_IOS_XR_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr> optical_logical_interface_logical_channel_assignment_attr;


}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment


class OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr : public Entity
{
    public:
        OpticalLogicalInterfaceLogicalChannelAssignmentAttr();
        ~OpticalLogicalInterfaceLogicalChannelAssignmentAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf name; //type: string
        YLeaf is_logical_link; //type: boolean
        YLeaf logical_channel; //type: uint32
        YLeaf optical_channel; //type: string
        YLeaf allocation; //type: uint32
        YLeaf assignment_type; //type: uint32



}; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr

class LogicalProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf proto_type_unknown;
        static const Enum::YLeaf proto_type_ethernet;
        static const Enum::YLeaf proto_type_otn;

};

class TribProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf trib_proto_type_unknown;
        static const Enum::YLeaf trib_proto_type1ge;
        static const Enum::YLeaf trib_proto_type_oc48;
        static const Enum::YLeaf trib_proto_type_stm16;
        static const Enum::YLeaf trib_proto_type10gelan;
        static const Enum::YLeaf trib_proto_type10gewan;
        static const Enum::YLeaf trib_proto_type_oc192;
        static const Enum::YLeaf trib_proto_type_stm64;
        static const Enum::YLeaf trib_proto_type_otu2;
        static const Enum::YLeaf trib_proto_type_otu2e;
        static const Enum::YLeaf trib_proto_type_otu1e;
        static const Enum::YLeaf trib_proto_type_odu2;
        static const Enum::YLeaf trib_proto_type_odu2e;
        static const Enum::YLeaf trib_proto_type40ge;
        static const Enum::YLeaf trib_proto_type_oc768;
        static const Enum::YLeaf trib_proto_type_stm256;
        static const Enum::YLeaf trib_proto_type_otu3;
        static const Enum::YLeaf trib_proto_type_odu3;
        static const Enum::YLeaf trib_proto_type100ge;
        static const Enum::YLeaf trib_proto_type100g_mlg;
        static const Enum::YLeaf trib_proto_type_otu4;
        static const Enum::YLeaf trib_proto_type_otu_cn;
        static const Enum::YLeaf trib_proto_type_odu4;

};

class TribRateClassEnum : public Enum
{
    public:
        static const Enum::YLeaf trib_rate_unknown;
        static const Enum::YLeaf trib_rate1g;
        static const Enum::YLeaf trib_rate25g;
        static const Enum::YLeaf trib_rate10g;
        static const Enum::YLeaf trib_rate40g;
        static const Enum::YLeaf trib_rate100g;

};


}
}

#endif /* _CISCO_IOS_XR_TERMINAL_DEVICE_OPER_ */

