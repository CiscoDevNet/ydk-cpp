#ifndef _CISCO_IOS_XR_INFRA_OBJMGR_CFG_
#define _CISCO_IOS_XR_INFRA_OBJMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

class ObjectGroup : public ydk::Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

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

        class Port; //type: ObjectGroup::Port
        class Network; //type: ObjectGroup::Network

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network> network;
        
}; // ObjectGroup


class ObjectGroup::Port : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class UdfObjects; //type: ObjectGroup::Port::UdfObjects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects> udf_objects;
        
}; // ObjectGroup::Port


class ObjectGroup::Port::UdfObjects : public ydk::Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

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

        class UdfObject; //type: ObjectGroup::Port::UdfObjects::UdfObject

        ydk::YList udf_object;
        
}; // ObjectGroup::Port::UdfObjects


class ObjectGroup::Port::UdfObjects::UdfObject : public ydk::Entity
{
    public:
        UdfObject();
        ~UdfObject();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        class Operators; //type: ObjectGroup::Port::UdfObjects::UdfObject::Operators
        class NestedGroups; //type: ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups
        class PortRanges; //type: ObjectGroup::Port::UdfObjects::UdfObject::PortRanges

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::Operators> operators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups> nested_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::UdfObjects::UdfObject::PortRanges> port_ranges;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject


class ObjectGroup::Port::UdfObjects::UdfObject::Operators : public ydk::Entity
{
    public:
        Operators();
        ~Operators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Operator; //type: ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator

        ydk::YList operator_;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::Operators


class ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator : public ydk::Entity
{
    public:
        Operator();
        ~Operator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_type; //type: PortOperator
        ydk::YLeaf port; //type: one of uint32, enumeration

}; // ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator


class ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups : public ydk::Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NestedGroup; //type: ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup

        ydk::YList nested_group;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup : public ydk::Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nested_group_name; //type: string

}; // ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Port::UdfObjects::UdfObject::PortRanges : public ydk::Entity
{
    public:
        PortRanges();
        ~PortRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortRange; //type: ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange

        ydk::YList port_range;
        
}; // ObjectGroup::Port::UdfObjects::UdfObject::PortRanges


class ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange : public ydk::Entity
{
    public:
        PortRange();
        ~PortRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_port; //type: one of uint32, enumeration
        ydk::YLeaf end_port; //type: one of uint32, enumeration

}; // ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange


class ObjectGroup::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        class Ipv6; //type: ObjectGroup::Network::Ipv6
        class Ipv4; //type: ObjectGroup::Network::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4> ipv4;
        
}; // ObjectGroup::Network


class ObjectGroup::Network::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class UdfObjects; //type: ObjectGroup::Network::Ipv6::UdfObjects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects> udf_objects;
        
}; // ObjectGroup::Network::Ipv6


class ObjectGroup::Network::Ipv6::UdfObjects : public ydk::Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

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

        class UdfObject; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject

        ydk::YList udf_object;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject : public ydk::Entity
{
    public:
        UdfObject();
        ~UdfObject();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups
        class AddressRanges; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges
        class Addresses; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses
        class Hosts; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups> nested_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges> address_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts> hosts;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups : public ydk::Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NestedGroup; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup

        ydk::YList nested_group;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup : public ydk::Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nested_group_name; //type: string

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges : public ydk::Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressRange; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange

        ydk::YList address_range;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange : public ydk::Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf end_address; //type: string

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address

        ydk::YList address;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host

        ydk::YList host;
        
}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts


class ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_address; //type: string

}; // ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host


class ObjectGroup::Network::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class UdfObjects; //type: ObjectGroup::Network::Ipv4::UdfObjects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects> udf_objects;
        
}; // ObjectGroup::Network::Ipv4


class ObjectGroup::Network::Ipv4::UdfObjects : public ydk::Entity
{
    public:
        UdfObjects();
        ~UdfObjects();

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

        class UdfObject; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject

        ydk::YList udf_object;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject : public ydk::Entity
{
    public:
        UdfObject();
        ~UdfObject();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        class NestedGroups; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups
        class AddressRanges; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges
        class Addresses; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses
        class Hosts; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups> nested_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges> address_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts> hosts;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups : public ydk::Entity
{
    public:
        NestedGroups();
        ~NestedGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NestedGroup; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup

        ydk::YList nested_group;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup : public ydk::Entity
{
    public:
        NestedGroup();
        ~NestedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nested_group_name; //type: string

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges : public ydk::Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressRange; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange

        ydk::YList address_range;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange : public ydk::Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf end_address; //type: string

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address

        ydk::YList address;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host

        ydk::YList host;
        
}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts


class ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_address; //type: string

}; // ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host

class EndPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf nicname;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf www;
        static const ydk::Enum::YLeaf host_name;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf sun_rpc;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf cmd;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "echo") return 7;
            if (name == "discard") return 9;
            if (name == "daytime") return 13;
            if (name == "chargen") return 19;
            if (name == "ftp-data") return 20;
            if (name == "ftp") return 21;
            if (name == "ssh") return 22;
            if (name == "telnet") return 23;
            if (name == "smtp") return 25;
            if (name == "time") return 37;
            if (name == "nicname") return 43;
            if (name == "tacacs") return 49;
            if (name == "domain") return 53;
            if (name == "gopher") return 70;
            if (name == "finger") return 79;
            if (name == "www") return 80;
            if (name == "host-name") return 101;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "sun-rpc") return 111;
            if (name == "ident") return 113;
            if (name == "nntp") return 119;
            if (name == "bgp") return 179;
            if (name == "irc") return 194;
            if (name == "pim-auto-rp") return 496;
            if (name == "exec") return 512;
            if (name == "login") return 513;
            if (name == "cmd") return 514;
            if (name == "lpd") return 515;
            if (name == "uucp") return 540;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "talk") return 517;
            if (name == "ldp") return 646;
            return -1;
        }
};

class PortOperator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf not_equal;
        static const ydk::Enum::YLeaf greater_than;
        static const ydk::Enum::YLeaf less_than;

        static int get_enum_value(const std::string & name) {
            if (name == "equal") return 0;
            if (name == "not-equal") return 1;
            if (name == "greater-than") return 2;
            if (name == "less-than") return 3;
            return -1;
        }
};

class Port : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf nicname;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf www;
        static const ydk::Enum::YLeaf host_name;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf sun_rpc;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf cmd;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "echo") return 7;
            if (name == "discard") return 9;
            if (name == "daytime") return 13;
            if (name == "chargen") return 19;
            if (name == "ftp-data") return 20;
            if (name == "ftp") return 21;
            if (name == "ssh") return 22;
            if (name == "telnet") return 23;
            if (name == "smtp") return 25;
            if (name == "time") return 37;
            if (name == "nicname") return 43;
            if (name == "tacacs") return 49;
            if (name == "domain") return 53;
            if (name == "gopher") return 70;
            if (name == "finger") return 79;
            if (name == "www") return 80;
            if (name == "host-name") return 101;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "sun-rpc") return 111;
            if (name == "ident") return 113;
            if (name == "nntp") return 119;
            if (name == "bgp") return 179;
            if (name == "irc") return 194;
            if (name == "pim-auto-rp") return 496;
            if (name == "exec") return 512;
            if (name == "login") return 513;
            if (name == "cmd") return 514;
            if (name == "lpd") return 515;
            if (name == "uucp") return 540;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "talk") return 517;
            if (name == "ldp") return 646;
            return -1;
        }
};

class StartPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf nicname;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf www;
        static const ydk::Enum::YLeaf host_name;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf sun_rpc;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf cmd;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "echo") return 7;
            if (name == "discard") return 9;
            if (name == "daytime") return 13;
            if (name == "chargen") return 19;
            if (name == "ftp-data") return 20;
            if (name == "ftp") return 21;
            if (name == "ssh") return 22;
            if (name == "telnet") return 23;
            if (name == "smtp") return 25;
            if (name == "time") return 37;
            if (name == "nicname") return 43;
            if (name == "tacacs") return 49;
            if (name == "domain") return 53;
            if (name == "gopher") return 70;
            if (name == "finger") return 79;
            if (name == "www") return 80;
            if (name == "host-name") return 101;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "sun-rpc") return 111;
            if (name == "ident") return 113;
            if (name == "nntp") return 119;
            if (name == "bgp") return 179;
            if (name == "irc") return 194;
            if (name == "pim-auto-rp") return 496;
            if (name == "exec") return 512;
            if (name == "login") return 513;
            if (name == "cmd") return 514;
            if (name == "lpd") return 515;
            if (name == "uucp") return 540;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "talk") return 517;
            if (name == "ldp") return 646;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_OBJMGR_CFG_ */

