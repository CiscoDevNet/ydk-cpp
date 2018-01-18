#ifndef _CISCO_IOS_XE_NATIVE_96_
#define _CISCO_IOS_XE_NATIVE_96_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Monitor::Session::Filter::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessGroup; //type: Native::Monitor::Session::Filter::Ip::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Filter::Ip::AccessGroup> access_group;
        
}; // Native::Monitor::Session::Filter::Ip


class Native::Monitor::Session::Filter::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string

}; // Native::Monitor::Session::Filter::Ip::AccessGroup


class Native::Monitor::Session::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Monitor::Session::Source::Interface
        class Vlan; //type: Native::Monitor::Session::Source::Vlan
        class Remote; //type: Native::Monitor::Session::Source::Remote

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Source::Interface> > interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Source::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Source::Remote> remote;
        
}; // Native::Monitor::Session::Source


class Native::Monitor::Session::Source::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Source::Interface


class Native::Monitor::Session::Source::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Source::Vlan


class Native::Monitor::Session::Source::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Monitor::Session::Source::Remote


class Native::Monitor::Session::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErspanSource; //type: Native::Monitor::Session::Type::ErspanSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource> erspan_source; // presence node
        
}; // Native::Monitor::Session::Type


class Native::Monitor::Session::Type::ErspanSource : public ydk::Entity
{
    public:
        ErspanSource();
        ~ErspanSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Source; //type: Native::Monitor::Session::Type::ErspanSource::Source
        class Filter; //type: Native::Monitor::Session::Type::ErspanSource::Filter
        class Destination; //type: Native::Monitor::Session::Type::ErspanSource::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Destination> destination; // presence node
        
}; // Native::Monitor::Session::Type::ErspanSource


class Native::Monitor::Session::Type::ErspanSource::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Monitor::Session::Type::ErspanSource::Source::Interface
        class Vlan; //type: Native::Monitor::Session::Type::ErspanSource::Source::Vlan

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Source::Interface> > interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Source::Vlan> > vlan;
        
}; // Native::Monitor::Session::Type::ErspanSource::Source


class Native::Monitor::Session::Type::ErspanSource::Source::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Type::ErspanSource::Source::Interface


class Native::Monitor::Session::Type::ErspanSource::Source::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan1; //type: uint16
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Monitor::Session::Type::ErspanSource::Source::Vlan


class Native::Monitor::Session::Type::ErspanSource::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Monitor::Session::Type::ErspanSource::Filter::Vlan
        class Ip; //type: Native::Monitor::Session::Type::ErspanSource::Filter::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Filter::Vlan> > vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Filter::Ip> ip;
        
}; // Native::Monitor::Session::Type::ErspanSource::Filter


class Native::Monitor::Session::Type::ErspanSource::Filter::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan1; //type: uint16

}; // Native::Monitor::Session::Type::ErspanSource::Filter::Vlan


class Native::Monitor::Session::Type::ErspanSource::Filter::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessGroup; //type: Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup> access_group;
        
}; // Native::Monitor::Session::Type::ErspanSource::Filter::Ip


class Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string

}; // Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup


class Native::Monitor::Session::Type::ErspanSource::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf erspan_id; //type: uint16
        class Ip; //type: Native::Monitor::Session::Type::ErspanSource::Destination::Ip
        class Origin; //type: Native::Monitor::Session::Type::ErspanSource::Destination::Origin

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Destination::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Destination::Origin> origin;
        
}; // Native::Monitor::Session::Type::ErspanSource::Destination


class Native::Monitor::Session::Type::ErspanSource::Destination::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf ttl; //type: uint16

}; // Native::Monitor::Session::Type::ErspanSource::Destination::Ip


class Native::Monitor::Session::Type::ErspanSource::Destination::Origin : public ydk::Entity
{
    public:
        Origin();
        ~Origin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip> ip;
        
}; // Native::Monitor::Session::Type::ErspanSource::Destination::Origin


class Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip


class Native::TftpServer : public ydk::Entity
{
    public:
        TftpServer();
        ~TftpServer();

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

        ydk::YLeaf name; //type: string

}; // Native::TftpServer


class Native::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

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

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
        class Attribute; //type: Native::RadiusServer::Attribute
        class DeadCriteria; //type: Native::RadiusServer::DeadCriteria
        class Host; //type: Native::RadiusServer::Host
        class Key; //type: Native::RadiusServer::Key
        class SourcePorts; //type: Native::RadiusServer::SourcePorts
        class Vsa; //type: Native::RadiusServer::Vsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute> > attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::DeadCriteria> dead_criteria;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host> > host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::SourcePorts> source_ports;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa> vsa;
        
}; // Native::RadiusServer


class Native::RadiusServer::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeafList send_attribute; //type: list of  SendAttribute
        class AccessRequest; //type: Native::RadiusServer::Attribute::AccessRequest
        class Attri31; //type: Native::RadiusServer::Attribute::Attri31

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::AccessRequest> access_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31> attri31;
                class SendAttribute;

}; // Native::RadiusServer::Attribute


class Native::RadiusServer::Attribute::AccessRequest : public ydk::Entity
{
    public:
        AccessRequest();
        ~AccessRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include; //type: empty

}; // Native::RadiusServer::Attribute::AccessRequest


class Native::RadiusServer::Attribute::Attri31 : public ydk::Entity
{
    public:
        Attri31();
        ~Attri31();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attri31List; //type: Native::RadiusServer::Attribute::Attri31::Attri31List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List> > attri31_list;
        
}; // Native::RadiusServer::Attribute::Attri31


class Native::RadiusServer::Attribute::Attri31::Attri31List : public ydk::Entity
{
    public:
        Attri31List();
        ~Attri31List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf calling_station_id; //type: CallingStationId
        class IdMac; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac
        class IdSend; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac> id_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend> id_send;
                class CallingStationId;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac : public ydk::Entity
{
    public:
        IdMac();
        ~IdMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        ydk::YLeaf lu_case; //type: LuCase
        class Format;
        class LuCase;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend : public ydk::Entity
{
    public:
        IdSend();
        ~IdSend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nas_port_detail; //type: empty
        ydk::YLeaf mac_only; //type: empty

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend


class Native::RadiusServer::DeadCriteria : public ydk::Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

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

        ydk::YLeaf time; //type: uint8
        ydk::YLeaf tries; //type: uint8

}; // Native::RadiusServer::DeadCriteria


class Native::RadiusServer::Host : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf key; //type: one of string, enumeration
        ydk::YLeaf clear_key; //type: string
        class Test; //type: Native::RadiusServer::Host::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test> test;
                class Key;

}; // Native::RadiusServer::Host


class Native::RadiusServer::Host::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Username; //type: Native::RadiusServer::Host::Test::Username

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username> > username;
        
}; // Native::RadiusServer::Host::Test


class Native::RadiusServer::Host::Test::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Key; //type: Native::RadiusServer::Host::Test::Username::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username::Key> key;
        
}; // Native::RadiusServer::Host::Test::Username


class Native::RadiusServer::Host::Test::Username::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Host::Test::Username::Key


class Native::RadiusServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Key


class Native::RadiusServer::SourcePorts : public ydk::Entity
{
    public:
        SourcePorts();
        ~SourcePorts();

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

        ydk::YLeaf extended; //type: empty

}; // Native::RadiusServer::SourcePorts


class Native::RadiusServer::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

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

        class Disallow; //type: Native::RadiusServer::Vsa::Disallow
        class Send; //type: Native::RadiusServer::Vsa::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Disallow> disallow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send> send; // presence node
        
}; // Native::RadiusServer::Vsa


class Native::RadiusServer::Vsa::Disallow : public ydk::Entity
{
    public:
        Disallow();
        ~Disallow();

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

        ydk::YLeaf unknown; //type: empty

}; // Native::RadiusServer::Vsa::Disallow


class Native::RadiusServer::Vsa::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

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

        class Accounting; //type: Native::RadiusServer::Vsa::Send::Accounting
        class Authentication; //type: Native::RadiusServer::Vsa::Send::Authentication
        class CiscoNasPort; //type: Native::RadiusServer::Vsa::Send::CiscoNasPort

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Accounting> accounting; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::CiscoNasPort> cisco_nas_port; // presence node
        
}; // Native::RadiusServer::Vsa::Send


class Native::RadiusServer::Vsa::Send::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Accounting


class Native::RadiusServer::Vsa::Send::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Authentication


class Native::RadiusServer::Vsa::Send::CiscoNasPort : public ydk::Entity
{
    public:
        CiscoNasPort();
        ~CiscoNasPort();

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

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::CiscoNasPort


class Native::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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

        class Filter; //type: Native::Radius::Filter
        class Server; //type: Native::Radius::Server

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Filter> > filter;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server> > server;
        
}; // Native::Radius


class Native::Radius::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf match; //type: Match
        class Match;

}; // Native::Radius::Filter


class Native::Radius::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf retransmit; //type: uint8
        class Address; //type: Native::Radius::Server::Address
        class AutomateTester; //type: Native::Radius::Server::AutomateTester
        class Backoff; //type: Native::Radius::Server::Backoff
        class Key; //type: Native::Radius::Server::Key
        class Pac; //type: Native::Radius::Server::Pac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::AutomateTester> automate_tester;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Pac> pac;
        
}; // Native::Radius::Server


class Native::Radius::Server::Address : public ydk::Entity
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

        class Ipv4; //type: Native::Radius::Server::Address::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Address::Ipv4> ipv4;
        
}; // Native::Radius::Server::Address


class Native::Radius::Server::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf host; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Radius::Server::Address::Ipv4


class Native::Radius::Server::AutomateTester : public ydk::Entity
{
    public:
        AutomateTester();
        ~AutomateTester();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf at_option; //type: AtOption
        class AtOption;

}; // Native::Radius::Server::AutomateTester


class Native::Radius::Server::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exponential; //type: Native::Radius::Server::Backoff::Exponential

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Backoff::Exponential> exponential; // presence node
        
}; // Native::Radius::Server::Backoff


class Native::Radius::Server::Backoff::Exponential : public ydk::Entity
{
    public:
        Exponential();
        ~Exponential();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_delay; //type: uint8
        ydk::YLeaf backoff_retry; //type: uint8

}; // Native::Radius::Server::Backoff::Exponential


class Native::Radius::Server::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Key


class Native::Radius::Server::Pac : public ydk::Entity
{
    public:
        Pac();
        ~Pac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Radius::Server::Pac::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Pac::Key> key;
        
}; // Native::Radius::Server::Pac


class Native::Radius::Server::Pac::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Pac::Key


class Native::Zone : public ydk::Entity
{
    public:
        Zone();
        ~Zone();

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

        class Security; //type: Native::Zone::Security

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Zone::Security> > security;
        
}; // Native::Zone


class Native::Zone::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf protection; //type: string

}; // Native::Zone::Security


class Native::ZonePair : public ydk::Entity
{
    public:
        ZonePair();
        ~ZonePair();

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

        class Security; //type: Native::ZonePair::Security

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ZonePair::Security> > security;
        
}; // Native::ZonePair


class Native::ZonePair::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
        ydk::YLeaf description; //type: string
        class ServicePolicy; //type: Native::ZonePair::Security::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy> service_policy;
        
}; // Native::ZonePair::Security


class Native::ZonePair::Security::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type; //type: Native::ZonePair::Security::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ZonePair::Security::ServicePolicy::Type> type;
        
}; // Native::ZonePair::Security::ServicePolicy


class Native::ZonePair::Security::ServicePolicy::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inspect; //type: string

}; // Native::ZonePair::Security::ServicePolicy::Type


class Native::AlarmContact : public ydk::Entity
{
    public:
        AlarmContact();
        ~AlarmContact();

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

        ydk::YLeaf name; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf severity; //type: Severity
        ydk::YLeaf trigger; //type: Trigger
        class Severity;
        class Trigger;

}; // Native::AlarmContact


class Native::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        class Evc; //type: Native::Ethernet::Evc
        class Lmi; //type: Native::Ethernet::Lmi
        class Cfm; //type: Native::Ethernet::Cfm

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Evc> > evc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Lmi> lmi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm> cfm;
        
}; // Native::Ethernet


class Native::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

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

        ydk::YLeaf name; //type: string

}; // Native::Ethernet::Evc


class Native::Ethernet::Lmi : public ydk::Entity
{
    public:
        Lmi();
        ~Lmi();

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

        ydk::YLeaf ce; //type: empty
        ydk::YLeaf global; //type: empty

}; // Native::Ethernet::Lmi


class Native::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

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

        ydk::YLeaf ieee; //type: empty
        ydk::YLeaf global; //type: empty
        class Ais; //type: Native::Ethernet::Cfm::Ais
        class Alarm; //type: Native::Ethernet::Cfm::Alarm
        class Domain; //type: Native::Ethernet::Cfm::Domain
        class Logging; //type: Native::Ethernet::Cfm::Logging
        class Mep; //type: Native::Ethernet::Cfm::Mep
        class Mip; //type: Native::Ethernet::Cfm::Mip
        class Traceroute; //type: Native::Ethernet::Cfm::Traceroute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais> ais;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm> alarm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain> > domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging> logging; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep> mep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip> mip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute> traceroute;
        
}; // Native::Ethernet::Cfm


class Native::Ethernet::Cfm::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

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

        class LinkStatus; //type: Native::Ethernet::Cfm::Ais::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus> link_status;
        
}; // Native::Ethernet::Cfm::Ais


class Native::Ethernet::Cfm::Ais::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

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

        class Global; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global> global; // presence node
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus


class Native::Ethernet::Cfm::Ais::LinkStatus::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        class CfmModeConfigaislinkcfm; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm> cfm_mode__config_ais_link_cfm;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm : public ydk::Entity
{
    public:
        CfmModeConfigaislinkcfm();
        ~CfmModeConfigaislinkcfm();

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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf level; //type: uint8
        class Period; //type: Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period> period;
        
}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm


class Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period : public ydk::Entity
{
    public:
        Period();
        ~Period();

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

        ydk::YLeaf tp_1; //type: empty
        ydk::YLeaf tp_60; //type: empty

}; // Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period


class Native::Ethernet::Cfm::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

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

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf packet; //type: uint16
        ydk::YLeaf reset; //type: uint16
        class Notification; //type: Native::Ethernet::Cfm::Alarm::Notification

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Alarm::Notification> notification;
        
}; // Native::Ethernet::Cfm::Alarm


class Native::Ethernet::Cfm::Alarm::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf error_xcon; //type: empty
        ydk::YLeaf mac_remote_error_xcon; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remote_error_xcon; //type: empty
        ydk::YLeaf xcon; //type: empty

}; // Native::Ethernet::Cfm::Alarm::Notification


class Native::Ethernet::Cfm::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf level; //type: uint8
        class Service; //type: Native::Ethernet::Cfm::Domain::Service

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service> > service;
        
}; // Native::Ethernet::Cfm::Domain


class Native::Ethernet::Cfm::Domain::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16
        class ContinuityCheck; //type: Native::Ethernet::Cfm::Domain::Service::ContinuityCheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Domain::Service::ContinuityCheck> continuity_check; // presence node
        
}; // Native::Ethernet::Cfm::Domain::Service


class Native::Ethernet::Cfm::Domain::Service::ContinuityCheck : public ydk::Entity
{
    public:
        ContinuityCheck();
        ~ContinuityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Ethernet::Cfm::Domain::Service::ContinuityCheck


class Native::Ethernet::Cfm::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf ais; //type: empty
        class Alarm; //type: Native::Ethernet::Cfm::Logging::Alarm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Logging::Alarm> alarm;
        
}; // Native::Ethernet::Cfm::Logging


class Native::Ethernet::Cfm::Logging::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

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

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf ieee; //type: empty

}; // Native::Ethernet::Cfm::Logging::Alarm


class Native::Ethernet::Cfm::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

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

        class Crosscheck; //type: Native::Ethernet::Cfm::Mep::Crosscheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mep::Crosscheck> crosscheck;
        
}; // Native::Ethernet::Cfm::Mep


class Native::Ethernet::Cfm::Mep::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

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

        ydk::YLeaf start_delay; //type: uint16

}; // Native::Ethernet::Cfm::Mep::Crosscheck


class Native::Ethernet::Cfm::Mip : public ydk::Entity
{
    public:
        Mip();
        ~Mip();

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

        ydk::YLeaf filter; //type: empty
        class AutoCreate; //type: Native::Ethernet::Cfm::Mip::AutoCreate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate> auto_create;
        
}; // Native::Ethernet::Cfm::Mip


class Native::Ethernet::Cfm::Mip::AutoCreate : public ydk::Entity
{
    public:
        AutoCreate();
        ~AutoCreate();

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

        class Level; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level> level;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate


class Native::Ethernet::Cfm::Mip::AutoCreate::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

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

        class MefNum; //type: Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum> > mef_num;
        
}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level


class Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum : public ydk::Entity
{
    public:
        MefNum();
        ~MefNum();

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

        ydk::YLeaf mef_num; //type: uint8
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum


class Native::Ethernet::Cfm::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

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

        class Cache; //type: Native::Ethernet::Cfm::Traceroute::Cache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ethernet::Cfm::Traceroute::Cache> cache; // presence node
        
}; // Native::Ethernet::Cfm::Traceroute


class Native::Ethernet::Cfm::Traceroute::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf size; //type: uint16

}; // Native::Ethernet::Cfm::Traceroute::Cache


class Native::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

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

        class BrdId; //type: Native::BridgeDomain::BrdId
        class CMac; //type: Native::BridgeDomain::CMac
        class Otv; //type: Native::BridgeDomain::Otv
        class Parameterized; //type: Native::BridgeDomain::Parameterized

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId> > brd_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::CMac> c_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv> otv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized> parameterized;
        
}; // Native::BridgeDomain


class Native::BridgeDomain::BrdId : public ydk::Entity
{
    public:
        BrdId();
        ~BrdId();

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

        ydk::YLeaf bridge_domain_id; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::BrdId::Ip
        class Mac; //type: Native::BridgeDomain::BrdId::Mac
        class Member; //type: Native::BridgeDomain::BrdId::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member> member;
        
}; // Native::BridgeDomain::BrdId


class Native::BridgeDomain::BrdId::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Igmp; //type: Native::BridgeDomain::BrdId::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::BrdId::Ip


class Native::BridgeDomain::BrdId::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::BrdId::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::BrdId::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit> limit;
        
}; // Native::BridgeDomain::BrdId::Mac


class Native::BridgeDomain::BrdId::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::BrdId::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit


class Native::BridgeDomain::BrdId::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flooding; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit::Action


class Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding


class Native::BridgeDomain::BrdId::Mac::Limit::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::BrdId::Mac::Limit::Maximum


class Native::BridgeDomain::BrdId::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::BrdId::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::BrdId::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::BrdId::Member::MemberInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR> > acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::BrdId::Member


class Native::BridgeDomain::BrdId::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid> > mem_vcid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation> encapsulation;
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::BrdId::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::BrdId::Member::ACR


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::BrdId::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::BrdId::Member::MemberInterface


class Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon


class Native::BridgeDomain::CMac : public ydk::Entity
{
    public:
        CMac();
        ~CMac();

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

        ydk::YLeaf aging_time; //type: uint16

}; // Native::BridgeDomain::CMac


class Native::BridgeDomain::Otv : public ydk::Entity
{
    public:
        Otv();
        ~Otv();

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

        class Default_; //type: Native::BridgeDomain::Otv::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv::Default_> default_;
        
}; // Native::BridgeDomain::Otv


class Native::BridgeDomain::Otv::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf age_time; //type: uint16

}; // Native::BridgeDomain::Otv::Default_


class Native::BridgeDomain::Parameterized : public ydk::Entity
{
    public:
        Parameterized();
        ~Parameterized();

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

        class Vlan; //type: Native::BridgeDomain::Parameterized::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan> vlan; // presence node
        
}; // Native::BridgeDomain::Parameterized


class Native::BridgeDomain::Parameterized::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::Parameterized::Vlan::Ip
        class Mac; //type: Native::BridgeDomain::Parameterized::Vlan::Mac
        class Member; //type: Native::BridgeDomain::Parameterized::Vlan::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member> member;
        
}; // Native::BridgeDomain::Parameterized::Vlan


class Native::BridgeDomain::Parameterized::Vlan::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Igmp; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        class Snooping; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

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

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

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

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

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

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::Parameterized::Vlan::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit> limit;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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

        class Action; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

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

        class Flooding; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

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

        ydk::YLeaf disable; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

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

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum


class Native::BridgeDomain::Parameterized::Vlan::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

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

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR> > acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

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

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid> > mem_vcid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation> encapsulation;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

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

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon


class Native::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

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

        ydk::YLeaf xauth; //type: string
        class Call; //type: Native::Crypto::Call
        class DynamicMap; //type: Native::Crypto::DynamicMap
        class Engine; //type: Native::Crypto::Engine
        class Gdoi; //type: Native::Crypto::Gdoi
        class Ikev2; //type: Native::Crypto::Ikev2
        class Gkm; //type: Native::Crypto::Gkm
        class Identity; //type: Native::Crypto::Identity
        class Ipsec; //type: Native::Crypto::Ipsec
        class Isakmp; //type: Native::Crypto::Isakmp
        class Key; //type: Native::Crypto::Key
        class Keyring; //type: Native::Crypto::Keyring
        class Logging; //type: Native::Crypto::Logging
        class CryptoMap; //type: Native::Crypto::CryptoMap
        class MapIpv6Gdoi; //type: Native::Crypto::MapIpv6Gdoi
        class MapClient; //type: Native::Crypto::MapClient
        class Mib; //type: Native::Crypto::Mib
        class Pki; //type: Native::Crypto::Pki
        class TlsTunnel; //type: Native::Crypto::TlsTunnel
        class Ssl; //type: Native::Crypto::Ssl
        class Vpn; //type: Native::Crypto::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call> call;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap> > dynamic_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Engine> engine;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi> gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2> ikev2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm> gkm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Identity> > identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key> key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring> > keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap> crypto_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi> map_ipv6_gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient> map_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib> mib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki> pki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel> tls_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Vpn> vpn;
        
}; // Native::Crypto


class Native::Crypto::Call : public ydk::Entity
{
    public:
        Call();
        ~Call();

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

        class Admission; //type: Native::Crypto::Call::Admission

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission> admission;
        
}; // Native::Crypto::Call


class Native::Crypto::Call::Admission : public ydk::Entity
{
    public:
        Admission();
        ~Admission();

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

        class Limit; //type: Native::Crypto::Call::Admission::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit> limit;
        
}; // Native::Crypto::Call::Admission


class Native::Crypto::Call::Admission::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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

        class All; //type: Native::Crypto::Call::Admission::Limit::All
        class Ike; //type: Native::Crypto::Call::Admission::Limit::Ike
        class Ipsec; //type: Native::Crypto::Call::Admission::Limit::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::All> all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ike> ike;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ipsec> ipsec;
        
}; // Native::Crypto::Call::Admission::Limit


class Native::Crypto::Call::Admission::Limit::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        ydk::YLeaf in_negotiation_sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::All


class Native::Crypto::Call::Admission::Limit::Ike : public ydk::Entity
{
    public:
        Ike();
        ~Ike();

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

        ydk::YLeaf in_negotiation_sa; //type: uint32
        ydk::YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ike


class Native::Crypto::Call::Admission::Limit::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

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

        ydk::YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ipsec


class Native::Crypto::DynamicMap : public ydk::Entity
{
    public:
        DynamicMap();
        ~DynamicMap();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf description; //type: string
        class Default_; //type: Native::Crypto::DynamicMap::Default_
        class Dialer; //type: Native::Crypto::DynamicMap::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Match
        class Qos; //type: Native::Crypto::DynamicMap::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set> set;
        
}; // Native::Crypto::DynamicMap


class Native::Crypto::DynamicMap::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::DynamicMap::Default_::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Default_::Match
        class Qos; //type: Native::Crypto::DynamicMap::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default_::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Default_::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set> set;
        
}; // Native::Crypto::DynamicMap::Default_


class Native::Crypto::DynamicMap::Default_::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Dialer


class Native::Crypto::DynamicMap::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Match


class Native::Crypto::DynamicMap::Default_::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Qos


class Native::Crypto::DynamicMap::Default_::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::DynamicMap::Default_::ReverseRoute


class Native::Crypto::DynamicMap::Default_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf transform_set; //type: empty
        class Ip; //type: Native::Crypto::DynamicMap::Default_::Set::Ip
        class Nat; //type: Native::Crypto::DynamicMap::Default_::Set::Nat
        class PeerContainer; //type: Native::Crypto::DynamicMap::Default_::Set::PeerContainer
        class Pfs; //type: Native::Crypto::DynamicMap::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::PeerContainer> peer_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::DynamicMap::Default_::Set


class Native::Crypto::DynamicMap::Default_::Set::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_group; //type: one of string, uint16
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Crypto::DynamicMap::Default_::Set::Ip

class Native::Monitor::Session::Source::Interface::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::Monitor::Session::Source::Vlan::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;

};

class Native::RadiusServer::Attribute::SendAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_for_login_auth;
        static const ydk::Enum::YLeaf include_in_access_req;
        static const ydk::Enum::YLeaf support_multiple;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf send;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::RadiusServer::Host::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Host::Test::Username::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Radius::Filter::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

};

class Native::Radius::Server::AutomateTester::AtOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf probe_on;

};

class Native::Radius::Server::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Radius::Server::Pac::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::AlarmContact::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;

};

class Native::AlarmContact::Trigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closed;

};

class Native::Crypto::DynamicMap::Default_::Set::Ip::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_96_ */

