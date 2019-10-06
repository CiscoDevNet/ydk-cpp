#ifndef _CISCO_IOS_XR_IFMGR_OPER_
#define _CISCO_IOS_XR_IFMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_oper {

class InterfaceDampening : public ydk::Entity
{
    public:
        InterfaceDampening();
        ~InterfaceDampening();

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

        class Interfaces; //type: InterfaceDampening::Interfaces
        class Nodes; //type: InterfaceDampening::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes> nodes;
        
}; // InterfaceDampening


class InterfaceDampening::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: InterfaceDampening::Interfaces::Interface

        ydk::YList interface;
        
}; // InterfaceDampening::Interfaces


class InterfaceDampening::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class IfDampening; //type: InterfaceDampening::Interfaces::Interface::IfDampening

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening> if_dampening;
        
}; // InterfaceDampening::Interfaces::Interface


class InterfaceDampening::Interfaces::Interface::IfDampening : public ydk::Entity
{
    public:
        IfDampening();
        ~IfDampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_transition_count; //type: uint32
        ydk::YLeaf last_state_transition_time; //type: uint32
        ydk::YLeaf is_dampening_enabled; //type: boolean
        ydk::YLeaf half_life; //type: uint32
        ydk::YLeaf reuse_threshold; //type: uint32
        ydk::YLeaf suppress_threshold; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf restart_penalty; //type: uint32
        class InterfaceDampening_; //type: InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_> interface_dampening;
        ydk::YList capsulation;
        
}; // InterfaceDampening::Interfaces::Interface::IfDampening


class InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_ : public ydk::Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_


class InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation : public ydk::Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capsulation_number; //type: string
        class CapsulationDampening; //type: InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening> capsulation_dampening;
        
}; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation


class InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening : public ydk::Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening


class InterfaceDampening::Nodes : public ydk::Entity
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

        class Node; //type: InterfaceDampening::Nodes::Node

        ydk::YList node;
        
}; // InterfaceDampening::Nodes


class InterfaceDampening::Nodes::Node : public ydk::Entity
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
        class Show; //type: InterfaceDampening::Nodes::Node::Show

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show> show;
        
}; // InterfaceDampening::Nodes::Node


class InterfaceDampening::Nodes::Node::Show : public ydk::Entity
{
    public:
        Show();
        ~Show();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening> dampening;
        
}; // InterfaceDampening::Nodes::Node::Show


class InterfaceDampening::Nodes::Node::Show::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfHandles; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles
        class Interfaces; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles> if_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces> interfaces;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles : public ydk::Entity
{
    public:
        IfHandles();
        ~IfHandles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfHandle; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle

        ydk::YList if_handle;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle : public ydk::Entity
{
    public:
        IfHandle();
        ~IfHandle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle_name; //type: string
        ydk::YLeaf state_transition_count; //type: uint32
        ydk::YLeaf last_state_transition_time; //type: uint32
        ydk::YLeaf is_dampening_enabled; //type: boolean
        ydk::YLeaf half_life; //type: uint32
        ydk::YLeaf reuse_threshold; //type: uint32
        ydk::YLeaf suppress_threshold; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf restart_penalty; //type: uint32
        class InterfaceDampening_; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_> interface_dampening;
        ydk::YList capsulation;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_ : public ydk::Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation : public ydk::Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capsulation_number; //type: string
        class CapsulationDampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening> capsulation_dampening;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation


class InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening : public ydk::Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces : public ydk::Entity
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

        class Interface; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface

        ydk::YList interface;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf state_transition_count; //type: uint32
        ydk::YLeaf last_state_transition_time; //type: uint32
        ydk::YLeaf is_dampening_enabled; //type: boolean
        ydk::YLeaf half_life; //type: uint32
        ydk::YLeaf reuse_threshold; //type: uint32
        ydk::YLeaf suppress_threshold; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf restart_penalty; //type: uint32
        class InterfaceDampening_; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_
        class Capsulation; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_> interface_dampening;
        ydk::YList capsulation;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_ : public ydk::Entity
{
    public:
        InterfaceDampening_();
        ~InterfaceDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation : public ydk::Entity
{
    public:
        Capsulation();
        ~Capsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capsulation_number; //type: string
        class CapsulationDampening; //type: InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening> capsulation_dampening;
        
}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation


class InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening : public ydk::Entity
{
    public:
        CapsulationDampening();
        ~CapsulationDampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf flaps; //type: uint32
        ydk::YLeaf state; //type: ImStateEnum

}; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening

class InterfaceProperties : public ydk::Entity
{
    public:
        InterfaceProperties();
        ~InterfaceProperties();

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

        class DataNodes; //type: InterfaceProperties::DataNodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes> data_nodes;
        
}; // InterfaceProperties


class InterfaceProperties::DataNodes : public ydk::Entity
{
    public:
        DataNodes();
        ~DataNodes();

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

        class DataNode; //type: InterfaceProperties::DataNodes::DataNode

        ydk::YList data_node;
        
}; // InterfaceProperties::DataNodes


class InterfaceProperties::DataNodes::DataNode : public ydk::Entity
{
    public:
        DataNode();
        ~DataNode();

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

        ydk::YLeaf data_node_name; //type: string
        class Locationviews; //type: InterfaceProperties::DataNodes::DataNode::Locationviews
        class PqNodeLocations; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations
        class SystemView; //type: InterfaceProperties::DataNodes::DataNode::SystemView

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews> locationviews;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations> pq_node_locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView> system_view;
        
}; // InterfaceProperties::DataNodes::DataNode


class InterfaceProperties::DataNodes::DataNode::Locationviews : public ydk::Entity
{
    public:
        Locationviews();
        ~Locationviews();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Locationview; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview

        ydk::YList locationview;
        
}; // InterfaceProperties::DataNodes::DataNode::Locationviews


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview : public ydk::Entity
{
    public:
        Locationview();
        ~Locationview();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locationview_name; //type: string
        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces> interfaces;
        
}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces : public ydk::Entity
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

        class Interface; //type: InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface

        ydk::YList interface;
        
}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces


class InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf actual_state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf actual_line_state; //type: ImStateEnum
        ydk::YLeaf encapsulation; //type: string
        ydk::YLeaf encapsulation_type_string; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sub_interface_mtu_overhead; //type: uint32
        ydk::YLeaf l2_transport; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations : public ydk::Entity
{
    public:
        PqNodeLocations();
        ~PqNodeLocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PqNodeLocation; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation

        ydk::YList pq_node_location;
        
}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation : public ydk::Entity
{
    public:
        PqNodeLocation();
        ~PqNodeLocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pq_node_name; //type: string
        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces> interfaces;
        
}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces : public ydk::Entity
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

        class Interface; //type: InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface

        ydk::YList interface;
        
}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces


class InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf actual_state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf actual_line_state; //type: ImStateEnum
        ydk::YLeaf encapsulation; //type: string
        ydk::YLeaf encapsulation_type_string; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sub_interface_mtu_overhead; //type: uint32
        ydk::YLeaf l2_transport; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface


class InterfaceProperties::DataNodes::DataNode::SystemView : public ydk::Entity
{
    public:
        SystemView();
        ~SystemView();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces> interfaces;
        
}; // InterfaceProperties::DataNodes::DataNode::SystemView


class InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces : public ydk::Entity
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

        class Interface; //type: InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface

        ydk::YList interface;
        
}; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces


class InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf actual_state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf actual_line_state; //type: ImStateEnum
        ydk::YLeaf encapsulation; //type: string
        ydk::YLeaf encapsulation_type_string; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sub_interface_mtu_overhead; //type: uint32
        ydk::YLeaf l2_transport; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface

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

        static int get_enum_value(const std::string & name) {
            if (name == "im-state-not-ready") return 0;
            if (name == "im-state-admin-down") return 1;
            if (name == "im-state-down") return 2;
            if (name == "im-state-up") return 3;
            if (name == "im-state-shutdown") return 4;
            if (name == "im-state-err-disable") return 5;
            if (name == "im-state-down-immediate") return 6;
            if (name == "im-state-down-immediate-admin") return 7;
            if (name == "im-state-down-graceful") return 8;
            if (name == "im-state-begin-shutdown") return 9;
            if (name == "im-state-end-shutdown") return 10;
            if (name == "im-state-begin-error-disable") return 11;
            if (name == "im-state-end-error-disable") return 12;
            if (name == "im-state-begin-down-graceful") return 13;
            if (name == "im-state-reset") return 14;
            if (name == "im-state-operational") return 15;
            if (name == "im-state-not-operational") return 16;
            if (name == "im-state-unknown") return 17;
            if (name == "im-state-last") return 18;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_OPER_ */

