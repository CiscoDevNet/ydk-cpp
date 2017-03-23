#ifndef _CISCO_IOS_XR_IFMGR_OPER_
#define _CISCO_IOS_XR_IFMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_oper {

class InterfaceDampening : public Entity
{
    public:
        InterfaceDampening();
        ~InterfaceDampening();

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



        class Interfaces; //type: InterfaceDampening::Interfaces
        class Nodes; //type: InterfaceDampening::Nodes

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes> nodes;


}; // InterfaceDampening


class InterfaceDampening::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: InterfaceDampening::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface> > interface;


}; // InterfaceDampening::Interfaces


class InterfaceDampening::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class IfDampening; //type: InterfaceDampening::Interfaces::Interface::IfDampening

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening> if_dampening;


}; // InterfaceDampening::Interfaces::Interface


class InterfaceDampening::Interfaces::Interface::IfDampening : public Entity
{
    public:
        IfDampening();
        ~IfDampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state_transition_count; //type: uint32
        YLeaf last_state_transition_time; //type: uint32
        YLeaf is_dampening_enabled; //type: boolean
        YLeaf half_life; //type: uint32
        YLeaf reuse_threshold; //type: uint32
        YLeaf suppress_threshold; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf restart_penalty; //type: uint32

        class InterfaceDampening_; //type: InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation> > capsulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_> interface_dampening;


}; // InterfaceDampening::Interfaces::Interface::IfDampening


class InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_ : public Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_


class InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation : public Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capsulation_number; //type: string

        class CapsulationDampening; //type: InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening> capsulation_dampening;


}; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation


class InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening : public Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening


class InterfaceDampening::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: InterfaceDampening::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node> > node;


}; // InterfaceDampening::Nodes


class InterfaceDampening::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class Show; //type: InterfaceDampening::Nodes::Node::Show

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show> show;


}; // InterfaceDampening::Nodes::Node


class InterfaceDampening::Nodes::Node::Show : public Entity
{
    public:
        Show();
        ~Show();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening> dampening;


}; // InterfaceDampening::Nodes::Node::Show


class InterfaceDampening::Nodes::Node::Show::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfHandles; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles
        class Interfaces; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles> if_handles;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces> interfaces;


}; // InterfaceDampening::Nodes::Node::Show::Dampening


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles : public Entity
{
    public:
        IfHandles();
        ~IfHandles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfHandle; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle> > if_handle;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle : public Entity
{
    public:
        IfHandle();
        ~IfHandle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle_name; //type: string
        YLeaf state_transition_count; //type: uint32
        YLeaf last_state_transition_time; //type: uint32
        YLeaf is_dampening_enabled; //type: boolean
        YLeaf half_life; //type: uint32
        YLeaf reuse_threshold; //type: uint32
        YLeaf suppress_threshold; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf restart_penalty; //type: uint32

        class InterfaceDampening_; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation> > capsulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_> interface_dampening;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_ : public Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation : public Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capsulation_number; //type: string

        class CapsulationDampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening> capsulation_dampening;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening : public Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface> > interface;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf state_transition_count; //type: uint32
        YLeaf last_state_transition_time; //type: uint32
        YLeaf is_dampening_enabled; //type: boolean
        YLeaf half_life; //type: uint32
        YLeaf reuse_threshold; //type: uint32
        YLeaf suppress_threshold; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf restart_penalty; //type: uint32

        class InterfaceDampening_; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation> > capsulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_> interface_dampening;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_ : public Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation : public Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capsulation_number; //type: string

        class CapsulationDampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening> capsulation_dampening;


}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening : public Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf penalty; //type: uint32
        YLeaf is_suppressed_enabled; //type: boolean
        YLeaf seconds_remaining; //type: uint32
        YLeaf flaps; //type: uint32
        YLeaf state; //type: ImStateEnumEnum



}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening

class InterfaceProperties : public Entity
{
    public:
        InterfaceProperties();
        ~InterfaceProperties();

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



        class DataNodes; //type: InterfaceProperties::DataNodes

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes> data_nodes;


}; // InterfaceProperties


class InterfaceProperties::DataNodes : public Entity
{
    public:
        DataNodes();
        ~DataNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DataNode; //type: InterfaceProperties::DataNodes::DataNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode> > data_node;


}; // InterfaceProperties::DataNodes


class InterfaceProperties::DataNodes::DataNode : public Entity
{
    public:
        DataNode();
        ~DataNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_node_name; //type: string

        class Locationviews; //type: InterfaceProperties::DataNodes::DataNode::Locationviews
        class PqNodeLocations; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations
        class SystemView; //type: InterfaceProperties::DataNodes::DataNode::SystemView

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews> locationviews;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations> pq_node_locations;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView> system_view;


}; // InterfaceProperties::DataNodes::DataNode


class InterfaceProperties::DataNodes::DataNode::Locationviews : public Entity
{
    public:
        Locationviews();
        ~Locationviews();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Locationview; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview> > locationview;


}; // InterfaceProperties::DataNodes::DataNode::Locationviews


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview : public Entity
{
    public:
        Locationview();
        ~Locationview();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf locationview_name; //type: string

        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces> interfaces;


}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface> > interface;


}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf parent_interface; //type: string
        YLeaf type; //type: string
        YLeaf state; //type: ImStateEnumEnum
        YLeaf actual_state; //type: ImStateEnumEnum
        YLeaf line_state; //type: ImStateEnumEnum
        YLeaf actual_line_state; //type: ImStateEnumEnum
        YLeaf encapsulation; //type: string
        YLeaf encapsulation_type_string; //type: string
        YLeaf mtu; //type: uint32
        YLeaf sub_interface_mtu_overhead; //type: uint32
        YLeaf l2_transport; //type: boolean
        YLeaf bandwidth; //type: uint32



}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations : public Entity
{
    public:
        PqNodeLocations();
        ~PqNodeLocations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PqNodeLocation; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation> > pq_node_location;


}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation : public Entity
{
    public:
        PqNodeLocation();
        ~PqNodeLocation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pq_node_name; //type: string

        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces> interfaces;


}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface> > interface;


}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf parent_interface; //type: string
        YLeaf type; //type: string
        YLeaf state; //type: ImStateEnumEnum
        YLeaf actual_state; //type: ImStateEnumEnum
        YLeaf line_state; //type: ImStateEnumEnum
        YLeaf actual_line_state; //type: ImStateEnumEnum
        YLeaf encapsulation; //type: string
        YLeaf encapsulation_type_string; //type: string
        YLeaf mtu; //type: uint32
        YLeaf sub_interface_mtu_overhead; //type: uint32
        YLeaf l2_transport; //type: boolean
        YLeaf bandwidth; //type: uint32



}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface


class InterfaceProperties::DataNodes::DataNode::SystemView : public Entity
{
    public:
        SystemView();
        ~SystemView();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces> interfaces;


}; // InterfaceProperties::DataNodes::DataNode::SystemView


class InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface> > interface;


}; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces


class InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf parent_interface; //type: string
        YLeaf type; //type: string
        YLeaf state; //type: ImStateEnumEnum
        YLeaf actual_state; //type: ImStateEnumEnum
        YLeaf line_state; //type: ImStateEnumEnum
        YLeaf actual_line_state; //type: ImStateEnumEnum
        YLeaf encapsulation; //type: string
        YLeaf encapsulation_type_string; //type: string
        YLeaf mtu; //type: uint32
        YLeaf sub_interface_mtu_overhead; //type: uint32
        YLeaf l2_transport; //type: boolean
        YLeaf bandwidth; //type: uint32



}; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf im_state_not_ready;
        static const Enum::YLeaf im_state_admin_down;
        static const Enum::YLeaf im_state_down;
        static const Enum::YLeaf im_state_up;
        static const Enum::YLeaf im_state_shutdown;
        static const Enum::YLeaf im_state_err_disable;
        static const Enum::YLeaf im_state_down_immediate;
        static const Enum::YLeaf im_state_down_immediate_admin;
        static const Enum::YLeaf im_state_down_graceful;
        static const Enum::YLeaf im_state_begin_shutdown;
        static const Enum::YLeaf im_state_end_shutdown;
        static const Enum::YLeaf im_state_begin_error_disable;
        static const Enum::YLeaf im_state_end_error_disable;
        static const Enum::YLeaf im_state_begin_down_graceful;
        static const Enum::YLeaf im_state_reset;
        static const Enum::YLeaf im_state_operational;
        static const Enum::YLeaf im_state_not_operational;
        static const Enum::YLeaf im_state_unknown;
        static const Enum::YLeaf im_state_last;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_OPER_ */

