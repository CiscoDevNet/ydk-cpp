#ifndef _CISCO_IOS_XR_INFRA_RSI_OPER_
#define _CISCO_IOS_XR_INFRA_RSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_rsi_oper {

class VrfGroup : public Entity
{
    public:
        VrfGroup();
        ~VrfGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: VrfGroup::Nodes

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes> nodes;
        
}; // VrfGroup


class VrfGroup::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: VrfGroup::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node> > node;
        
}; // VrfGroup::Nodes


class VrfGroup::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Groups; //type: VrfGroup::Nodes::Node::Groups

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups> groups;
        
}; // VrfGroup::Nodes::Node


class VrfGroup::Nodes::Node::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: VrfGroup::Nodes::Node::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups::Group> > group;
        
}; // VrfGroup::Nodes::Node::Groups


class VrfGroup::Nodes::Node::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf vr_fs; //type: uint32
        YLeaf forward_reference; //type: boolean
        class Vrf; //type: VrfGroup::Nodes::Node::Groups::Group::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups::Group::Vrf> > vrf;
        
}; // VrfGroup::Nodes::Node::Groups::Group


class VrfGroup::Nodes::Node::Groups::Group::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string

}; // VrfGroup::Nodes::Node::Groups::Group::Vrf

class Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class SrlgMaps; //type: Srlg::SrlgMaps
        class Nodes; //type: Srlg::Nodes
        class InterfaceSrlgNames; //type: Srlg::InterfaceSrlgNames

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames> interface_srlg_names;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgMaps> srlg_maps;
        
}; // Srlg


class Srlg::SrlgMaps : public Entity
{
    public:
        SrlgMaps();
        ~SrlgMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrlgMap; //type: Srlg::SrlgMaps::SrlgMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgMaps::SrlgMap> > srlg_map;
        
}; // Srlg::SrlgMaps


class Srlg::SrlgMaps::SrlgMap : public Entity
{
    public:
        SrlgMap();
        ~SrlgMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_name; //type: string
        YLeaf srlg_value; //type: uint32
        YLeaf srlg_name_xr; //type: string

}; // Srlg::SrlgMaps::SrlgMap


class Srlg::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Srlg::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node> > node;
        
}; // Srlg::Nodes


class Srlg::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class SrlgMaps; //type: Srlg::Nodes::Node::SrlgMaps
        class Groups; //type: Srlg::Nodes::Node::Groups
        class InheritNodes; //type: Srlg::Nodes::Node::InheritNodes
        class Interfaces; //type: Srlg::Nodes::Node::Interfaces
        class InterfaceDetails; //type: Srlg::Nodes::Node::InterfaceDetails
        class SrlgValues; //type: Srlg::Nodes::Node::SrlgValues
        class InterfaceSrlgNames; //type: Srlg::Nodes::Node::InterfaceSrlgNames

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes> inherit_nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails> interface_details;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames> interface_srlg_names;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgMaps> srlg_maps;
        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgValues> srlg_values;
        
}; // Srlg::Nodes::Node


class Srlg::Nodes::Node::SrlgMaps : public Entity
{
    public:
        SrlgMaps();
        ~SrlgMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrlgMap; //type: Srlg::Nodes::Node::SrlgMaps::SrlgMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgMaps::SrlgMap> > srlg_map;
        
}; // Srlg::Nodes::Node::SrlgMaps


class Srlg::Nodes::Node::SrlgMaps::SrlgMap : public Entity
{
    public:
        SrlgMap();
        ~SrlgMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_name; //type: string
        YLeaf srlg_value; //type: uint32
        YLeaf srlg_name_xr; //type: string

}; // Srlg::Nodes::Node::SrlgMaps::SrlgMap


class Srlg::Nodes::Node::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Srlg::Nodes::Node::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups::Group> > group;
        
}; // Srlg::Nodes::Node::Groups


class Srlg::Nodes::Node::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf group_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::Groups::Group::SrlgAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups::Group::SrlgAttribute> > srlg_attribute;
        
}; // Srlg::Nodes::Node::Groups::Group


class Srlg::Nodes::Node::Groups::Group::SrlgAttribute : public Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_value; //type: uint32
        YLeaf priority; //type: PriorityEnum
        YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::Groups::Group::SrlgAttribute


class Srlg::Nodes::Node::InheritNodes : public Entity
{
    public:
        InheritNodes();
        ~InheritNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InheritNode; //type: Srlg::Nodes::Node::InheritNodes::InheritNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes::InheritNode> > inherit_node;
        
}; // Srlg::Nodes::Node::InheritNodes


class Srlg::Nodes::Node::InheritNodes::InheritNode : public Entity
{
    public:
        InheritNode();
        ~InheritNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit_node_name; //type: string
        YLeaf node_name; //type: string
        YLeaf node_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute> > srlg_attribute;
        
}; // Srlg::Nodes::Node::InheritNodes::InheritNode


class Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute : public Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_value; //type: uint32
        YLeaf priority; //type: PriorityEnum
        YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute


class Srlg::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Srlg::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Interfaces::Interface> > interface;
        
}; // Srlg::Nodes::Node::Interfaces


class Srlg::Nodes::Node::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf value_count; //type: uint32
        YLeaf registrations; //type: uint32
        YLeafList srlg_value; //type: list of  uint32

}; // Srlg::Nodes::Node::Interfaces::Interface


class Srlg::Nodes::Node::InterfaceDetails : public Entity
{
    public:
        InterfaceDetails();
        ~InterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceDetail; //type: Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail> > interface_detail;
        
}; // Srlg::Nodes::Node::InterfaceDetails


class Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail : public Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf groups; //type: uint32
        YLeaf nodes; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute> > srlg_attribute;
        
}; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail


class Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute : public Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_value; //type: uint32
        YLeaf priority; //type: PriorityEnum
        YLeaf source; //type: SourceEnum
        YLeaf source_name; //type: string
        YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute


class Srlg::Nodes::Node::SrlgValues : public Entity
{
    public:
        SrlgValues();
        ~SrlgValues();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrlgValue; //type: Srlg::Nodes::Node::SrlgValues::SrlgValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgValues::SrlgValue> > srlg_value;
        
}; // Srlg::Nodes::Node::SrlgValues


class Srlg::Nodes::Node::SrlgValues::SrlgValue : public Entity
{
    public:
        SrlgValue();
        ~SrlgValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeafList interface_name; //type: list of  string

}; // Srlg::Nodes::Node::SrlgValues::SrlgValue


class Srlg::Nodes::Node::InterfaceSrlgNames : public Entity
{
    public:
        InterfaceSrlgNames();
        ~InterfaceSrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceSrlgName; //type: Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;
        
}; // Srlg::Nodes::Node::InterfaceSrlgNames


class Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName : public Entity
{
    public:
        InterfaceSrlgName();
        ~InterfaceSrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_name; //type: string
        YLeaf srlg_name_xr; //type: string
        YLeaf srlg_value; //type: uint32
        class Interfaces; //type: Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;
        
}; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName


class Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList interface_name; //type: list of  string

}; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces


class Srlg::InterfaceSrlgNames : public Entity
{
    public:
        InterfaceSrlgNames();
        ~InterfaceSrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceSrlgName; //type: Srlg::InterfaceSrlgNames::InterfaceSrlgName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;
        
}; // Srlg::InterfaceSrlgNames


class Srlg::InterfaceSrlgNames::InterfaceSrlgName : public Entity
{
    public:
        InterfaceSrlgName();
        ~InterfaceSrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_name; //type: string
        YLeaf srlg_name_xr; //type: string
        YLeaf srlg_value; //type: uint32
        class Interfaces; //type: Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;
        
}; // Srlg::InterfaceSrlgNames::InterfaceSrlgName


class Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList interface_name; //type: list of  string

}; // Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces

class SelectiveVrfDownload : public Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class State; //type: SelectiveVrfDownload::State

        std::shared_ptr<Cisco_IOS_XR_infra_rsi_oper::SelectiveVrfDownload::State> state;
        
}; // SelectiveVrfDownload


class SelectiveVrfDownload::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_svd_enabled; //type: boolean
        YLeaf is_svd_enabled_cfg; //type: boolean

}; // SelectiveVrfDownload::State

class PriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;
        static const Enum::YLeaf very_low;

};

class SourceEnum : public Enum
{
    public:
        static const Enum::YLeaf configured;
        static const Enum::YLeaf from_group;
        static const Enum::YLeaf inherited;
        static const Enum::YLeaf from_optical;
        static const Enum::YLeaf configured_and_notified;
        static const Enum::YLeaf from_group_and_notified;
        static const Enum::YLeaf inherited_and_notified;
        static const Enum::YLeaf from_optical_and_notified;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RSI_OPER_ */

