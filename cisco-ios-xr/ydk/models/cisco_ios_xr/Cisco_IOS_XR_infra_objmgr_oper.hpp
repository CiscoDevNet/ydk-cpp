#ifndef _CISCO_IOS_XR_INFRA_OBJMGR_OPER_
#define _CISCO_IOS_XR_INFRA_OBJMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_objmgr_oper {

class ObjectGroup : public Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

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

        class Port; //type: ObjectGroup::Port
        class Network; //type: ObjectGroup::Network

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network> network;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port> port;
        
}; // ObjectGroup


class ObjectGroup::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Objects; //type: ObjectGroup::Port::Objects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects> objects;
        
}; // ObjectGroup::Port


class ObjectGroup::Port::Objects : public Entity
{
    public:
        Objects();
        ~Objects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Object; //type: ObjectGroup::Port::Objects::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object> > object;
        
}; // ObjectGroup::Port::Objects


class ObjectGroup::Port::Objects::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        class NestedGroups; //type: ObjectGroup::Port::Objects::Object::NestedGroups
        class Operators; //type: ObjectGroup::Port::Objects::Object::Operators
        class PortRanges; //type: ObjectGroup::Port::Objects::Object::PortRanges
        class ParentGroups; //type: ObjectGroup::Port::Objects::Object::ParentGroups

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::NestedGroups> nested_groups;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::Operators> operators;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::ParentGroups> parent_groups;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::PortRanges> port_ranges;
        
}; // ObjectGroup::Port::Objects::Object


class ObjectGroup::Port::Objects::Object::NestedGroups : public Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NestedGroup; //type: ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Port::Objects::Object::NestedGroups


class ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup : public Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nested_group_name; //type: string
        YLeaf nested_group_name_xr; //type: string

}; // ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup


class ObjectGroup::Port::Objects::Object::Operators : public Entity
{
    public:
        Operators();
        ~Operators();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Operator_; //type: ObjectGroup::Port::Objects::Object::Operators::Operator_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::Operators::Operator_> > operator_;
        
}; // ObjectGroup::Port::Objects::Object::Operators


class ObjectGroup::Port::Objects::Object::Operators::Operator_ : public Entity
{
    public:
        Operator_();
        ~Operator_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_type; //type: PortOperatorEnum
        YLeaf port; //type: one of uint32, enumeration
        YLeaf operator_type_xr; //type: uint32
        YLeaf port_xr; //type: uint32

}; // ObjectGroup::Port::Objects::Object::Operators::Operator_


class ObjectGroup::Port::Objects::Object::PortRanges : public Entity
{
    public:
        PortRanges();
        ~PortRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PortRange; //type: ObjectGroup::Port::Objects::Object::PortRanges::PortRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::PortRanges::PortRange> > port_range;
        
}; // ObjectGroup::Port::Objects::Object::PortRanges


class ObjectGroup::Port::Objects::Object::PortRanges::PortRange : public Entity
{
    public:
        PortRange();
        ~PortRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_port; //type: one of uint32, enumeration
        YLeaf end_port; //type: one of uint32, enumeration
        YLeaf start_port_xr; //type: uint32
        YLeaf end_port_xr; //type: uint32

}; // ObjectGroup::Port::Objects::Object::PortRanges::PortRange


class ObjectGroup::Port::Objects::Object::ParentGroups : public Entity
{
    public:
        ParentGroups();
        ~ParentGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ParentGroup; //type: ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup> > parent_group;
        
}; // ObjectGroup::Port::Objects::Object::ParentGroups


class ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup : public Entity
{
    public:
        ParentGroup();
        ~ParentGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parent_group_name; //type: string
        YLeaf parent_name; //type: string

}; // ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup


class ObjectGroup::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6; //type: ObjectGroup::Network::Ipv6
        class Ipv4; //type: ObjectGroup::Network::Ipv4

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6> ipv6;
        
}; // ObjectGroup::Network


class ObjectGroup::Network::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Objects; //type: ObjectGroup::Network::Ipv6::Objects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects> objects;
        
}; // ObjectGroup::Network::Ipv6


class ObjectGroup::Network::Ipv6::Objects : public Entity
{
    public:
        Objects();
        ~Objects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Object; //type: ObjectGroup::Network::Ipv6::Objects::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object> > object;
        
}; // ObjectGroup::Network::Ipv6::Objects


class ObjectGroup::Network::Ipv6::Objects::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups
        class Addresses; //type: ObjectGroup::Network::Ipv6::Objects::Object::Addresses
        class AddressRanges; //type: ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges
        class ParentGroups; //type: ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups
        class Hosts; //type: ObjectGroup::Network::Ipv6::Objects::Object::Hosts

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups> nested_groups;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups> parent_groups;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object


class ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups : public Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NestedGroup; //type: ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups


class ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup : public Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nested_group_name; //type: string
        YLeaf nested_group_name_xr; //type: string

}; // ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv6::Objects::Object::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address> > address;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object::Addresses


class ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix_xr; //type: string
        YLeaf prefix_length_xr; //type: uint32

}; // ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address


class ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges : public Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressRange; //type: ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange> > address_range;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges


class ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange : public Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf end_address; //type: string
        YLeaf start_address_xr; //type: string
        YLeaf end_address_xr; //type: string

}; // ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups : public Entity
{
    public:
        ParentGroups();
        ~ParentGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ParentGroup; //type: ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup> > parent_group;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups


class ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup : public Entity
{
    public:
        ParentGroup();
        ~ParentGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parent_group_name; //type: string
        YLeaf parent_name; //type: string

}; // ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup


class ObjectGroup::Network::Ipv6::Objects::Object::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host> > host;
        
}; // ObjectGroup::Network::Ipv6::Objects::Object::Hosts


class ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_address; //type: string
        YLeaf host_address_xr; //type: string

}; // ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host


class ObjectGroup::Network::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Objects; //type: ObjectGroup::Network::Ipv4::Objects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects> objects;
        
}; // ObjectGroup::Network::Ipv4


class ObjectGroup::Network::Ipv4::Objects : public Entity
{
    public:
        Objects();
        ~Objects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Object; //type: ObjectGroup::Network::Ipv4::Objects::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object> > object;
        
}; // ObjectGroup::Network::Ipv4::Objects


class ObjectGroup::Network::Ipv4::Objects::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups
        class Addresses; //type: ObjectGroup::Network::Ipv4::Objects::Object::Addresses
        class AddressRanges; //type: ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges
        class ParentGroups; //type: ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups
        class Hosts; //type: ObjectGroup::Network::Ipv4::Objects::Object::Hosts

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups> nested_groups;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups> parent_groups;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object


class ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups : public Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NestedGroup; //type: ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups


class ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup : public Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nested_group_name; //type: string
        YLeaf nested_group_name_xr; //type: string

}; // ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv4::Objects::Object::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address> > address;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object::Addresses


class ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix_xr; //type: string
        YLeaf prefix_length_xr; //type: uint32

}; // ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address


class ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges : public Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressRange; //type: ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange> > address_range;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges


class ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange : public Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf end_address; //type: string
        YLeaf start_address_xr; //type: string
        YLeaf end_address_xr; //type: string

}; // ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups : public Entity
{
    public:
        ParentGroups();
        ~ParentGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ParentGroup; //type: ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup> > parent_group;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups


class ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup : public Entity
{
    public:
        ParentGroup();
        ~ParentGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parent_group_name; //type: string
        YLeaf parent_name; //type: string

}; // ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup


class ObjectGroup::Network::Ipv4::Objects::Object::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host> > host;
        
}; // ObjectGroup::Network::Ipv4::Objects::Object::Hosts


class ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_address; //type: string
        YLeaf host_address_xr; //type: string

}; // ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host

class EndPortEnum : public Enum
{
    public:
        static const Enum::YLeaf echo;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf chargen;
        static const Enum::YLeaf ftp_data;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf time;
        static const Enum::YLeaf nicname;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf www;
        static const Enum::YLeaf host_name;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf sun_rpc;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf login;
        static const Enum::YLeaf cmd;
        static const Enum::YLeaf lpd;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf klogin;
        static const Enum::YLeaf kshell;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf ldp;

};

class PortOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf equal;
        static const Enum::YLeaf not_equal;
        static const Enum::YLeaf greater_than;
        static const Enum::YLeaf less_than;

};

class PortEnum : public Enum
{
    public:
        static const Enum::YLeaf echo;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf chargen;
        static const Enum::YLeaf ftp_data;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf time;
        static const Enum::YLeaf nicname;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf www;
        static const Enum::YLeaf host_name;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf sun_rpc;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf login;
        static const Enum::YLeaf cmd;
        static const Enum::YLeaf lpd;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf klogin;
        static const Enum::YLeaf kshell;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf ldp;

};

class StartPortEnum : public Enum
{
    public:
        static const Enum::YLeaf echo;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf chargen;
        static const Enum::YLeaf ftp_data;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf time;
        static const Enum::YLeaf nicname;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf www;
        static const Enum::YLeaf host_name;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf sun_rpc;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf login;
        static const Enum::YLeaf cmd;
        static const Enum::YLeaf lpd;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf klogin;
        static const Enum::YLeaf kshell;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf ldp;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_OBJMGR_OPER_ */

