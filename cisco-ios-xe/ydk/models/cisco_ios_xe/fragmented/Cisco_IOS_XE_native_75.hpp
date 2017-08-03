#ifndef _CISCO_IOS_XE_NATIVE_75_
#define _CISCO_IOS_XE_NATIVE_75_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_74.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::RouteMap::RouteMapSeq::Match::Tag::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag_names; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Tag::List


class Native::RouteTag : public ydk::Entity
{
    public:
        RouteTag();
        ~RouteTag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::RouteTag::List
        class Notation; //type: Native::RouteTag::Notation

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::Notation> notation;
        
}; // Native::RouteTag


class Native::RouteTag::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtName; //type: Native::RouteTag::List::RtName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName> > rt_name;
        
}; // Native::RouteTag::List


class Native::RouteTag::List::RtName : public ydk::Entity
{
    public:
        RtName();
        ~RtName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_name; //type: string
        class Deny; //type: Native::RouteTag::List::RtName::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Permit
        class Seq; //type: Native::RouteTag::List::RtName::Seq

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit> permit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq> seq;
        
}; // Native::RouteTag::List::RtName


class Native::RouteTag::List::RtName::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::RouteTag::List::RtName::Deny::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Deny


class Native::RouteTag::List::RtName::Deny::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Deny::Ipv4


class Native::RouteTag::List::RtName::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::RouteTag::List::RtName::Permit::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Permit


class Native::RouteTag::List::RtName::Permit::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Permit::Ipv4


class Native::RouteTag::List::RtName::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqNum; //type: Native::RouteTag::List::RtName::Seq::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum> > seq_num;
        
}; // Native::RouteTag::List::RtName::Seq


class Native::RouteTag::List::RtName::Seq::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_num; //type: uint32
        class Deny; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Permit> permit;
        
}; // Native::RouteTag::List::RtName::Seq::SeqNum


class Native::RouteTag::List::RtName::Seq::SeqNum::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Deny


class Native::RouteTag::List::RtName::Seq::SeqNum::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Permit


class Native::RouteTag::Notation : public ydk::Entity
{
    public:
        Notation();
        ~Notation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dotted_decimal; //type: empty

}; // Native::RouteTag::Notation


class Native::TableMap : public ydk::Entity
{
    public:
        TableMap();
        ~TableMap();

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
        ydk::YLeaf default_; //type: one of enumeration, uint8
        class Map; //type: Native::TableMap::Map

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TableMap::Map> > map;
                class Default_;

}; // Native::TableMap


class Native::TableMap::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: uint8
        ydk::YLeaf to; //type: uint8

}; // Native::TableMap::Map


class Native::Sdm : public ydk::Entity
{
    public:
        Sdm();
        ~Sdm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefer; //type: Native::Sdm::Prefer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Sdm::Prefer> prefer; // presence node
        
}; // Native::Sdm


class Native::Sdm::Prefer : public ydk::Entity
{
    public:
        Prefer();
        ~Prefer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        ydk::YLeaf qos; //type: empty

}; // Native::Sdm::Prefer


class Native::Mls : public ydk::Entity
{
    public:
        Mls();
        ~Mls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Mls


class Native::ObjectGroup : public ydk::Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Network; //type: Native::ObjectGroup::Network
        class Security; //type: Native::ObjectGroup::Security
        class Service; //type: Native::ObjectGroup::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network> > network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security> > security;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service> > service;
        
}; // Native::ObjectGroup


class Native::ObjectGroup::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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
        class ObjModeConfigNetworkGroup; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup> obj_mode_config_network_group;
        
}; // Native::ObjectGroup::Network


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup : public ydk::Entity
{
    public:
        ObjModeConfigNetworkGroup();
        ~ObjModeConfigNetworkGroup();

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
        ydk::YLeaf group_object; //type: string
        ydk::YLeaf host; //type: one of union, string
        class Network_Address; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address
        class Range; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address> > network_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range> range;
        
}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address : public ydk::Entity
{
    public:
        Network_Address();
        ~Network_Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr_min; //type: string
        ydk::YLeaf ip_addr_max; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range


class Native::ObjectGroup::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

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
        class SecurityGroup; //type: Native::ObjectGroup::Security::SecurityGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup> security_group;
        
}; // Native::ObjectGroup::Security


class Native::ObjectGroup::Security::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

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
        ydk::YLeaf group_object; //type: string
        class SecurityGroup_; //type: Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_> security_group;
        
}; // Native::ObjectGroup::Security::SecurityGroup


class Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_ : public ydk::Entity
{
    public:
        SecurityGroup_();
        ~SecurityGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_


class Native::ObjectGroup::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

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
        ydk::YLeaf description; //type: string
        ydk::YLeaf group_object; //type: string
        ydk::YLeaf protocal_number; //type: uint8
        ydk::YLeaf ahp; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf esp; //type: empty
        ydk::YLeaf gre; //type: empty
        ydk::YLeaf igmp; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf ipinip; //type: empty
        ydk::YLeaf nos; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf pcp; //type: empty
        ydk::YLeaf pim; //type: empty
        class Icmp; //type: Native::ObjectGroup::Service::Icmp
        class Tcp; //type: Native::ObjectGroup::Service::Tcp
        class TcpUdp; //type: Native::ObjectGroup::Service::TcpUdp
        class Udp; //type: Native::ObjectGroup::Service::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Icmp> icmp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Tcp> tcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::TcpUdp> tcp_udp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Udp> udp; // presence node
        
}; // Native::ObjectGroup::Service


class Native::ObjectGroup::Service::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number; //type: uint8
        ydk::YLeaf alternate_address; //type: empty
        ydk::YLeaf conversion_error; //type: empty
        ydk::YLeaf echo; //type: empty
        ydk::YLeaf echo_reply; //type: empty
        ydk::YLeaf information_reply; //type: empty
        ydk::YLeaf information_request; //type: empty
        ydk::YLeaf mask_reply; //type: empty
        ydk::YLeaf mask_request; //type: empty
        ydk::YLeaf mobile_redirect; //type: empty
        ydk::YLeaf parameter_problem; //type: empty
        ydk::YLeaf redirect; //type: empty
        ydk::YLeaf router_advertisement; //type: empty
        ydk::YLeaf router_solicitation; //type: empty
        ydk::YLeaf source_quench; //type: empty
        ydk::YLeaf time_exceeded; //type: empty
        ydk::YLeaf timestamp_reply; //type: empty
        ydk::YLeaf timestamp_request; //type: empty
        ydk::YLeaf traceroute; //type: empty
        ydk::YLeaf unreachable; //type: empty

}; // Native::ObjectGroup::Service::Icmp


class Native::ObjectGroup::Service::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcpPortList; //type: Native::ObjectGroup::Service::Tcp::TcpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Tcp::TcpPortList> > tcp_port_list;
        
}; // Native::ObjectGroup::Service::Tcp


class Native::ObjectGroup::Service::Tcp::TcpPortList : public ydk::Entity
{
    public:
        TcpPortList();
        ~TcpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_port; //type: one of enumeration, uint16
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_tcp_port; //type: one of enumeration, uint16
        class Operator_;

}; // Native::ObjectGroup::Service::Tcp::TcpPortList


class Native::ObjectGroup::Service::TcpUdp : public ydk::Entity
{
    public:
        TcpUdp();
        ~TcpUdp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::TcpUdp::UdpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::TcpUdp::UdpPortList> > udp_port_list;
        
}; // Native::ObjectGroup::Service::TcpUdp


class Native::ObjectGroup::Service::TcpUdp::UdpPortList : public ydk::Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_port; //type: one of enumeration, uint16
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_udp_port; //type: one of enumeration, uint16
        class Operator_;

}; // Native::ObjectGroup::Service::TcpUdp::UdpPortList


class Native::ObjectGroup::Service::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::Udp::UdpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Udp::UdpPortList> > udp_port_list;
        
}; // Native::ObjectGroup::Service::Udp


class Native::ObjectGroup::Service::Udp::UdpPortList : public ydk::Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_port; //type: one of enumeration, uint16
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_udp_port; //type: one of enumeration, uint16
        class Operator_;

}; // Native::ObjectGroup::Service::Udp::UdpPortList


class Native::PseudowireClass : public ydk::Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

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
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf control_word; //type: empty
        ydk::YLeaf interworking; //type: Interworking
        ydk::YLeaf sequencing; //type: Sequencing
        class Ip; //type: Native::PseudowireClass::Ip
        class LoadBalance; //type: Native::PseudowireClass::LoadBalance
        class Monitor; //type: Native::PseudowireClass::Monitor
        class PreferredPath; //type: Native::PseudowireClass::PreferredPath
        class ProtocolMpls; //type: Native::PseudowireClass::ProtocolMpls
        class ProtocolL2Tpv2; //type: Native::PseudowireClass::ProtocolL2Tpv2
        class ProtocolL2Tpv3; //type: Native::PseudowireClass::ProtocolL2Tpv3
        class Status; //type: Native::PseudowireClass::Status
        class Switching; //type: Native::PseudowireClass::Switching

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv2> protocol_l2tpv2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv3> protocol_l2tpv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolMpls> protocol_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status> status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Switching> switching;
                class Encapsulation;
        class Interworking;
        class Sequencing;

}; // Native::PseudowireClass


class Native::PseudowireClass::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf ttl; //type: uint8
        class Dfbit; //type: Native::PseudowireClass::Ip::Dfbit
        class Local; //type: Native::PseudowireClass::Ip::Local
        class Pmtu; //type: Native::PseudowireClass::Ip::Pmtu
        class Tos; //type: Native::PseudowireClass::Ip::Tos

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Dfbit> dfbit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Pmtu> pmtu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Tos> tos;
                class Protocol;

}; // Native::PseudowireClass::Ip


class Native::PseudowireClass::Ip::Dfbit : public ydk::Entity
{
    public:
        Dfbit();
        ~Dfbit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set; //type: empty

}; // Native::PseudowireClass::Ip::Dfbit


class Native::PseudowireClass::Ip::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Ip::Local::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface> interface;
        
}; // Native::PseudowireClass::Ip::Local


class Native::PseudowireClass::Ip::Local::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Ip::Local::Interface


class Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface


class Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface


class Native::PseudowireClass::Ip::Local::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::PseudowireClass::Ip::Local::Interface::LispSubinterface


class Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::Ip::Pmtu : public ydk::Entity
{
    public:
        Pmtu();
        ~Pmtu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::PseudowireClass::Ip::Pmtu


class Native::PseudowireClass::Ip::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reflect; //type: empty
        ydk::YLeaf value_; //type: uint8

}; // Native::PseudowireClass::Ip::Tos


class Native::PseudowireClass::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::PseudowireClass::LoadBalance::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance::Flow> flow; // presence node
        
}; // Native::PseudowireClass::LoadBalance


class Native::PseudowireClass::LoadBalance::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: Ethernet
        class Ethernet;

}; // Native::PseudowireClass::LoadBalance::Flow


class Native::PseudowireClass::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::PseudowireClass::Monitor::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer> peer;
        
}; // Native::PseudowireClass::Monitor


class Native::PseudowireClass::Monitor::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bfd; //type: Native::PseudowireClass::Monitor::Peer::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd> bfd; // presence node
        
}; // Native::PseudowireClass::Monitor::Peer


class Native::PseudowireClass::Monitor::Peer::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local> local;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd


class Native::PseudowireClass::Monitor::Peer::Bfd::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface> interface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::PreferredPath::Interface
        class PeerContainer; //type: Native::PseudowireClass::PreferredPath::PeerContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::PeerContainer> peer_container;
        
}; // Native::PseudowireClass::PreferredPath


class Native::PseudowireClass::PreferredPath::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint64
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::Interface


class Native::PseudowireClass::PreferredPath::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::PeerContainer


class Native::PseudowireClass::ProtocolMpls : public ydk::Entity
{
    public:
        ProtocolMpls();
        ~ProtocolMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolMpls


class Native::PseudowireClass::ProtocolL2Tpv2 : public ydk::Entity
{
    public:
        ProtocolL2Tpv2();
        ~ProtocolL2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolL2Tpv2


class Native::PseudowireClass::ProtocolL2Tpv3 : public ydk::Entity
{
    public:
        ProtocolL2Tpv3();
        ~ProtocolL2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::PseudowireClass::ProtocolL2Tpv3


class Native::PseudowireClass::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: empty
        class AdminDown; //type: Native::PseudowireClass::Status::AdminDown
        class ControlPlane; //type: Native::PseudowireClass::Status::ControlPlane
        class Peer; //type: Native::PseudowireClass::Status::Peer
        class Redundancy; //type: Native::PseudowireClass::Status::Redundancy

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::AdminDown> admin_down;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::ControlPlane> control_plane;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Redundancy> redundancy;
        
}; // Native::PseudowireClass::Status


class Native::PseudowireClass::Status::AdminDown : public ydk::Entity
{
    public:
        AdminDown();
        ~AdminDown();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnect; //type: empty

}; // Native::PseudowireClass::Status::AdminDown


class Native::PseudowireClass::Status::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_watch; //type: empty

}; // Native::PseudowireClass::Status::ControlPlane


class Native::PseudowireClass::Status::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Native::PseudowireClass::Status::Peer::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer::Topology> topology;
        
}; // Native::PseudowireClass::Status::Peer


class Native::PseudowireClass::Status::Peer::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_homed; //type: empty

}; // Native::PseudowireClass::Status::Peer::Topology


class Native::PseudowireClass::Status::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master; //type: empty

}; // Native::PseudowireClass::Status::Redundancy


class Native::PseudowireClass::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv; //type: empty

}; // Native::PseudowireClass::Switching


class Native::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: Native::ControlPlane::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlane::ServicePolicy> service_policy;
        
}; // Native::ControlPlane


class Native::ControlPlane::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::ControlPlane::ServicePolicy


class Native::ControlPlaneHost : public ydk::Entity
{
    public:
        ControlPlaneHost();
        ~ControlPlaneHost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControlPlane; //type: Native::ControlPlaneHost::ControlPlane

        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane> control_plane;
        
}; // Native::ControlPlaneHost


class Native::ControlPlaneHost::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Native::ControlPlaneHost::ControlPlane::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host> host; // presence node
        
}; // Native::ControlPlaneHost::ControlPlane


class Native::ControlPlaneHost::ControlPlane::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManagementInterface; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface> > management_interface;
        
}; // Native::ControlPlaneHost::ControlPlane::Host


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface : public ydk::Entity
{
    public:
        ManagementInterface();
        ~ManagementInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Allow; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow

        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow> allow;
        
}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beep; //type: empty
        ydk::YLeaf ftp; //type: empty
        ydk::YLeaf http; //type: empty
        ydk::YLeaf https; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf ssh; //type: empty
        ydk::YLeaf telnet; //type: empty
        ydk::YLeaf tftp; //type: empty
        ydk::YLeaf tl1; //type: empty

}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow


class Native::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CalendarValid; //type: Native::Clock_::CalendarValid
        class SummerTime; //type: Native::Clock_::SummerTime
        class Timezone; //type: Native::Clock_::Timezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock_::CalendarValid> calendar_valid; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock_::SummerTime> summer_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock_::Timezone> timezone;
        
}; // Native::Clock_


class Native::Clock_::CalendarValid : public ydk::Entity
{
    public:
        CalendarValid();
        ~CalendarValid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Clock_::CalendarValid


class Native::Clock_::SummerTime : public ydk::Entity
{
    public:
        SummerTime();
        ~SummerTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zone; //type: string
        ydk::YLeaf date; //type: empty
        ydk::YLeaf start_day; //type: uint8
        ydk::YLeaf start_month; //type: MonthType
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf date_end_day; //type: uint8
        ydk::YLeaf date_end_month; //type: MonthType
        ydk::YLeaf date_end_year; //type: uint32
        ydk::YLeaf date_end_time; //type: string
        ydk::YLeaf offset; //type: uint16
        ydk::YLeaf recurring; //type: empty
        ydk::YLeaf recurring_start; //type: one of enumeration, uint8
        ydk::YLeaf recurring_start_day; //type: WeekdayType
        ydk::YLeaf recurring_start_month; //type: MonthType
        ydk::YLeaf recurring_start_time; //type: string
        ydk::YLeaf recurring_end; //type: one of enumeration, uint8
        ydk::YLeaf recurring_end_day; //type: WeekdayType
        ydk::YLeaf recurring_end_month; //type: MonthType
        ydk::YLeaf recurring_end_time; //type: string
        ydk::YLeaf recurring_offset; //type: uint16
        class RecurringStart;
        class RecurringEnd;

}; // Native::Clock_::SummerTime


class Native::Clock_::Timezone : public ydk::Entity
{
    public:
        Timezone();
        ~Timezone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zone; //type: string
        ydk::YLeaf offset; //type: Offset
        ydk::YLeaf hours; //type: int8
        ydk::YLeaf minutes; //type: int8
        class Offset;

}; // Native::Clock_::Timezone


class Native::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarm; //type: one of enumeration, uint8
        ydk::YLeaf facility; //type: Facility
        ydk::YLeaf hostip; //type: one of union, string
        ydk::YLeaf snmp_authfail; //type: empty
        ydk::YLeaf buginf; //type: empty
        ydk::YLeaf userinfo; //type: empty
        class Discriminator; //type: Native::Logging::Discriminator
        class Persistent; //type: Native::Logging::Persistent
        class MonitorConf; //type: Native::Logging::MonitorConf
        class Monitor; //type: Native::Logging::Monitor
        class Buffered; //type: Native::Logging::Buffered
        class ConsoleConf; //type: Native::Logging::ConsoleConf
        class Console; //type: Native::Logging::Console
        class Event; //type: Native::Logging::Event
        class Esm; //type: Native::Logging::Esm
        class History; //type: Native::Logging::History
        class Host; //type: Native::Logging::Host
        class OriginId; //type: Native::Logging::OriginId
        class RateLimitConf; //type: Native::Logging::RateLimitConf
        class RateLimit; //type: Native::Logging::RateLimit
        class SourceInterface; //type: Native::Logging::SourceInterface
        class SnmpTrap; //type: Native::Logging::SnmpTrap
        class Trap; //type: Native::Logging::Trap
        class File; //type: Native::Logging::File

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Buffered> buffered; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Console> console; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::ConsoleConf> console_conf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Discriminator> > discriminator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Esm> esm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::File> file;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::History> history;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Monitor> monitor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::MonitorConf> monitor_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::OriginId> origin_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Persistent> persistent; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit> rate_limit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimitConf> rate_limit_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SnmpTrap> snmp_trap;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface> > source_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Trap> trap; // presence node
                class Alarm;
        class Facility;

}; // Native::Logging


class Native::Logging::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        class MsgBody; //type: Native::Logging::Discriminator::MsgBody

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Discriminator::MsgBody> msg_body;
        
}; // Native::Logging::Discriminator


class Native::Logging::Discriminator::MsgBody : public ydk::Entity
{
    public:
        MsgBody();
        ~MsgBody();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::MsgBody


class Native::Logging::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class File; //type: Native::Logging::Persistent::File

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Persistent::File> file;
        
}; // Native::Logging::Persistent


class Native::Logging::Persistent::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf size; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf protected_; //type: empty

}; // Native::Logging::Persistent::File


class Native::Logging::MonitorConf : public ydk::Entity
{
    public:
        MonitorConf();
        ~MonitorConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor; //type: boolean

}; // Native::Logging::MonitorConf


class Native::Logging::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: one of enumeration, uint16
        class Discriminator; //type: Native::Logging::Monitor::Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Monitor::Discriminator> > discriminator;
        
}; // Native::Logging::Monitor


class Native::Logging::Monitor::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Monitor::Discriminator


class Native::Logging::Buffered : public ydk::Entity
{
    public:
        Buffered();
        ~Buffered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: one of enumeration, uint16
        ydk::YLeaf xxml; //type: uint32
        class Discriminator; //type: Native::Logging::Buffered::Discriminator
        class Size; //type: Native::Logging::Buffered::Size

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Buffered::Discriminator> > discriminator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Buffered::Size> size;
        
}; // Native::Logging::Buffered


class Native::Logging::Buffered::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Buffered::Discriminator


class Native::Logging::Buffered::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Buffered::Size


class Native::Logging::ConsoleConf : public ydk::Entity
{
    public:
        ConsoleConf();
        ~ConsoleConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf console; //type: boolean

}; // Native::Logging::ConsoleConf


class Native::Logging::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf guaranteed; //type: empty
        ydk::YLeaf xxml; //type: one of enumeration, uint16
        ydk::YLeaf severity; //type: one of enumeration, uint16
        class Discriminator; //type: Native::Logging::Console::Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Console::Discriminator> > discriminator;
        
}; // Native::Logging::Console


class Native::Logging::Console::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::Console::Discriminator


class Native::Logging::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkStatus; //type: Native::Logging::Event::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Event::LinkStatus> link_status;
        
}; // Native::Logging::Event


class Native::Logging::Event::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boot; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Logging::Event::LinkStatus


class Native::Logging::Esm : public ydk::Entity
{
    public:
        Esm();
        ~Esm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config; //type: empty

}; // Native::Logging::Esm


class Native::Logging::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf severity_level; //type: one of enumeration, uint8
        class SeverityLevel;

}; // Native::Logging::History


class Native::Logging::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4HostList; //type: Native::Logging::Host::Ipv4HostList
        class Ipv4HostTransportList; //type: Native::Logging::Host::Ipv4HostTransportList
        class Ipv4HostVrfList; //type: Native::Logging::Host::Ipv4HostVrfList
        class Ipv4HostVrfTransportList; //type: Native::Logging::Host::Ipv4HostVrfTransportList
        class Ipv6; //type: Native::Logging::Host::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostList> > ipv4_host_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList> > ipv4_host_transport_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfList> > ipv4_host_vrf_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList> > ipv4_host_vrf_transport_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6> ipv6;
        
}; // Native::Logging::Host


class Native::Logging::Host::Ipv4HostList : public ydk::Entity
{
    public:
        Ipv4HostList();
        ~Ipv4HostList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_host; //type: one of union, string

}; // Native::Logging::Host::Ipv4HostList


class Native::Logging::Host::Ipv4HostTransportList : public ydk::Entity
{
    public:
        Ipv4HostTransportList();
        ~Ipv4HostTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostTransportList::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostTransportList


class Native::Logging::Host::Ipv4HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv4HostTransportList::Transport


class Native::Logging::Host::Ipv4HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv4HostVrfList : public ydk::Entity
{
    public:
        Ipv4HostVrfList();
        ~Ipv4HostVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv4HostVrfList


class Native::Logging::Host::Ipv4HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv4HostVrfTransportList();
        ~Ipv4HostVrfTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6HostList; //type: Native::Logging::Host::Ipv6::Ipv6HostList
        class Ipv6HostTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList
        class Ipv6HostVrfList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfList
        class Ipv6HostVrfTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostList> > ipv6_host_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList> > ipv6_host_transport_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfList> > ipv6_host_vrf_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList> > ipv6_host_vrf_transport_list;
        
}; // Native::Logging::Host::Ipv6


class Native::Logging::Host::Ipv6::Ipv6HostList : public ydk::Entity
{
    public:
        Ipv6HostList();
        ~Ipv6HostList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_host; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList : public ydk::Entity
{
    public:
        Ipv6HostTransportList();
        ~Ipv6HostTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6::Ipv6HostVrfList : public ydk::Entity
{
    public:
        Ipv6HostVrfList();
        ~Ipv6HostVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv6HostVrfTransportList();
        ~Ipv6HostVrfTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp> udp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp


class Native::Logging::OriginId : public ydk::Entity
{
    public:
        OriginId();
        ~OriginId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type_value; //type: TypeValue
        ydk::YLeaf string; //type: string
        class TypeValue;

}; // Native::Logging::OriginId


class Native::Logging::RateLimitConf : public ydk::Entity
{
    public:
        RateLimitConf();
        ~RateLimitConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate_limit; //type: boolean

}; // Native::Logging::RateLimitConf


class Native::Logging::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ranges; //type: Native::Logging::RateLimit::Ranges
        class Console; //type: Native::Logging::RateLimit::Console
        class All; //type: Native::Logging::RateLimit::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::All> all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console> console;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Ranges> > ranges;
        
}; // Native::Logging::RateLimit


class Native::Logging::RateLimit::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Ranges::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Ranges


class Native::Logging::RateLimit::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of enumeration, uint16

}; // Native::Logging::RateLimit::Ranges::Except


class Native::Logging::RateLimit::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ranges; //type: Native::Logging::RateLimit::Console::Ranges
        class All; //type: Native::Logging::RateLimit::Console::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Ranges> > ranges;
        
}; // Native::Logging::RateLimit::Console


class Native::Logging::RateLimit::Console::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::Ranges::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::Ranges


class Native::Logging::RateLimit::Console::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of enumeration, uint16

}; // Native::Logging::RateLimit::Console::Ranges::Except


class Native::Logging::RateLimit::Console::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ranges; //type: Native::Logging::RateLimit::Console::All::Ranges

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Ranges> > ranges;
        
}; // Native::Logging::RateLimit::Console::All


class Native::Logging::RateLimit::Console::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::All::Ranges::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::All::Ranges


class Native::Logging::RateLimit::Console::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of enumeration, uint16

}; // Native::Logging::RateLimit::Console::All::Ranges::Except


class Native::Logging::RateLimit::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ranges; //type: Native::Logging::RateLimit::All::Ranges

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::All::Ranges> > ranges;
        
}; // Native::Logging::RateLimit::All


class Native::Logging::RateLimit::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::All::Ranges::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::All::Ranges


class Native::Logging::RateLimit::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of enumeration, uint16

}; // Native::Logging::RateLimit::All::Ranges::Except


class Native::Logging::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Logging::SourceInterface


class Native::Logging::SnmpTrap : public ydk::Entity
{
    public:
        SnmpTrap();
        ~SnmpTrap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alerts; //type: empty
        ydk::YLeaf critical; //type: empty
        ydk::YLeaf debugging; //type: empty
        ydk::YLeaf emergencies; //type: empty
        ydk::YLeaf errors; //type: empty
        ydk::YLeaf informational; //type: empty
        ydk::YLeaf notifications; //type: empty
        ydk::YLeaf warnings; //type: empty

}; // Native::Logging::SnmpTrap


class Native::Logging::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trap_default; //type: empty
        ydk::YLeaf severity; //type: one of enumeration, uint8
        class Severity;

}; // Native::Logging::Trap


class Native::Logging::File : public ydk::Entity
{
    public:
        File();
        ~File();

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
        ydk::YLeaf max_size; //type: uint32
        ydk::YLeaf min_size; //type: uint32
        ydk::YLeaf severity; //type: one of enumeration, uint16

}; // Native::Logging::File


class Native::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_model; //type: empty
        ydk::YLeaf session_id; //type: SessionId
        class Group; //type: Native::Aaa::Group
        class Authentication; //type: Native::Aaa::Authentication
        class Authorization; //type: Native::Aaa::Authorization
        class Accounting; //type: Native::Aaa::Accounting
        class Server; //type: Native::Aaa::Server
        class Login; //type: Native::Aaa::Login

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Login> login;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server> server;
                class SessionId;

}; // Native::Aaa


class Native::Aaa::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: Native::Aaa::Group::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server> server;
        
}; // Native::Aaa::Group


class Native::Aaa::Group::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tacacsplus; //type: Native::Aaa::Group::Server::Tacacsplus
        class Tacacs; //type: Native::Aaa::Group::Server::Tacacs
        class Radius; //type: Native::Aaa::Group::Server::Radius

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius> > radius;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacs> > tacacs;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus> > tacacsplus;
        
}; // Native::Aaa::Group::Server


class Native::Aaa::Group::Server::Tacacsplus : public ydk::Entity
{
    public:
        Tacacsplus();
        ~Tacacsplus();

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
        class Server_; //type: Native::Aaa::Group::Server::Tacacsplus::Server_
        class ServerPrivate; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Tacacsplus::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Server_> server;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate> > server_private;
        
}; // Native::Aaa::Group::Server::Tacacsplus


class Native::Aaa::Group::Server::Tacacsplus::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

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

}; // Native::Aaa::Group::Server::Tacacsplus::Server_


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate : public ydk::Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf timeout; //type: uint16
        class Key; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key


class Native::Aaa::Group::Server::Tacacsplus::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tacacs; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs
        class Vrf; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceInterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface

class Native::TableMap::Default_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf ignore;

};

class Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::ObjectGroup::Service::Udp::UdpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::PseudowireClass::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf udp;

};

class Native::PseudowireClass::Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf vlan;

};

class Native::PseudowireClass::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf resync;
        static const ydk::Enum::YLeaf transmit;

};

class Native::PseudowireClass::Ip::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf uti;

};

class Native::PseudowireClass::LoadBalance::Flow::Ethernet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_mac;

};

class Native::PseudowireClass::ProtocolMpls::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv2::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv3::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv3ietf;
        static const ydk::Enum::YLeaf none;

};

class Native::Clock_::SummerTime::RecurringStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock_::SummerTime::RecurringEnd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock_::Timezone::Offset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__PLUS__;
        static const ydk::Enum::YLeaf Y_;

};

class Native::Logging::Alarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::Logging::Facility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf sys10;
        static const ydk::Enum::YLeaf sys11;
        static const ydk::Enum::YLeaf sys12;
        static const ydk::Enum::YLeaf sys13;
        static const ydk::Enum::YLeaf sys14;
        static const ydk::Enum::YLeaf sys9;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf uucp;

};

class Native::Logging::History::SeverityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};

class Native::Logging::OriginId::TypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Logging::Trap::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};

class Native::Aaa::SessionId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common;
        static const ydk::Enum::YLeaf unique;

};

class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_75_ */

