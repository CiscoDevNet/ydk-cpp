#ifndef _CISCO_IOS_XR_INFRA_OBJMGR_CFG_
#define _CISCO_IOS_XR_INFRA_OBJMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

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

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network> network;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port> port;
        
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

        class UdfObjects; //type: ObjectGroup::Port::UdfObjects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects> udf_objects;
        
}; // ObjectGroup::Port


class ObjectGroup::Port::UdfObjects : public Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdfObject; //type: ObjectGroup::Port::UdfObjects::UdfObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject> > udf_object;
        
}; // ObjectGroup::Port::UdfObjects


class ObjectGroup::Port::UdfObjects::UdfObject : public Entity
{
    public:
        UdfObject();
        ~UdfObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        YLeaf description; //type: string
        class Operators; //type: ObjectGroup::Port::UdfObjects::UdfObject::Operators
        class NestedGroups; //type: ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups
        class PortRanges; //type: ObjectGroup::Port::UdfObjects::UdfObject::PortRanges

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups> nested_groups;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::Operators> operators;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::PortRanges> port_ranges;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject


class ObjectGroup::Port::UdfObjects::UdfObject::Operators : public Entity
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

        class Operator_; //type: ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_> > operator_;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::Operators


class ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_ : public Entity
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

}; // ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_


class ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups : public Entity
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

        class NestedGroup; //type: ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup : public Entity
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

}; // ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Port::UdfObjects::UdfObject::PortRanges : public Entity
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

        class PortRange; //type: ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange> > port_range;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::PortRanges


class ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange : public Entity
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

}; // ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange


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

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6> ipv6;
        
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

        class UdfObjects; //type: ObjectGroup::Network::Ipv6::UdfObjects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects> udf_objects;
        
}; // ObjectGroup::Network::Ipv6


class ObjectGroup::Network::Ipv6::UdfObjects : public Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdfObject; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject> > udf_object;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject : public Entity
{
    public:
        UdfObject();
        ~UdfObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        YLeaf description; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups
        class AddressRanges; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges
        class Addresses; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses
        class Hosts; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups> nested_groups;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups : public Entity
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

        class NestedGroup; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup : public Entity
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

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges : public Entity
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

        class AddressRange; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange> > address_range;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange : public Entity
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

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses : public Entity
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

        class Address; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address> > address;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address : public Entity
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

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts : public Entity
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

        class Host; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host> > host;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host : public Entity
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

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host


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

        class UdfObjects; //type: ObjectGroup::Network::Ipv4::UdfObjects

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects> udf_objects;
        
}; // ObjectGroup::Network::Ipv4


class ObjectGroup::Network::Ipv4::UdfObjects : public Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdfObject; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject> > udf_object;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject : public Entity
{
    public:
        UdfObject();
        ~UdfObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string
        YLeaf description; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups
        class AddressRanges; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges
        class Addresses; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses
        class Hosts; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts

        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups> nested_groups;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups : public Entity
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

        class NestedGroup; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup> > nested_group;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup : public Entity
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

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges : public Entity
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

        class AddressRange; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange> > address_range;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange : public Entity
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

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses : public Entity
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

        class Address; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address> > address;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address : public Entity
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

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts : public Entity
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

        class Host; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host> > host;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host : public Entity
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

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host

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

#endif /* _CISCO_IOS_XR_INFRA_OBJMGR_CFG_ */

