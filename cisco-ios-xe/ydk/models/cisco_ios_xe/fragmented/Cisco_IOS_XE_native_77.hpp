#ifndef _CISCO_IOS_XE_NATIVE_77_
#define _CISCO_IOS_XE_NATIVE_77_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Redundancy::Interchassis::Group::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string

}; // Native::Redundancy::Interchassis::Group::Member


class Native::Redundancy::Interchassis::Group::Backbone : public ydk::Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface> interface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone


class Native::Redundancy::Interchassis::Group::Backbone::Interface : public ydk::Entity
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
        class AtmSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone::Interface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface


class Native::Scheduler : public ydk::Entity
{
    public:
        Scheduler();
        ~Scheduler();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Runtime; //type: Native::Scheduler::Runtime
        class Allocate; //type: Native::Scheduler::Allocate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Scheduler::Allocate> allocate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Scheduler::Runtime> runtime;
        
}; // Native::Scheduler


class Native::Scheduler::Runtime : public ydk::Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netinput; //type: uint16

}; // Native::Scheduler::Runtime


class Native::Scheduler::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interrupt_time; //type: uint16
        ydk::YLeaf process_time; //type: uint16

}; // Native::Scheduler::Allocate


class Native::Epm : public ydk::Entity
{
    public:
        Epm();
        ~Epm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty

}; // Native::Epm


class Native::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backbonefast; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf mode; //type: Mode
        class Bridge; //type: Native::SpanningTree::Bridge
        class Etherchannel; //type: Native::SpanningTree::Etherchannel
        class Extend; //type: Native::SpanningTree::Extend
        class Loopguard; //type: Native::SpanningTree::Loopguard
        class Mst; //type: Native::SpanningTree::Mst
        class Optimize; //type: Native::SpanningTree::Optimize
        class Pathcost; //type: Native::SpanningTree::Pathcost
        class Portfast; //type: Native::SpanningTree::Portfast
        class Transmit; //type: Native::SpanningTree::Transmit
        class Uplinkfast; //type: Native::SpanningTree::Uplinkfast
        class Vlan; //type: Native::SpanningTree::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Bridge> bridge;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel> etherchannel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Extend> extend;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst> mst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Optimize> optimize;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Pathcost> pathcost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Portfast> portfast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Transmit> transmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Uplinkfast> uplinkfast; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan> > vlan;
                class Mode;

}; // Native::SpanningTree


class Native::SpanningTree::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf id; //type: string

}; // Native::SpanningTree::Bridge


class Native::SpanningTree::Etherchannel : public ydk::Entity
{
    public:
        Etherchannel();
        ~Etherchannel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Guard; //type: Native::SpanningTree::Etherchannel::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel::Guard> guard;
        
}; // Native::SpanningTree::Etherchannel


class Native::SpanningTree::Etherchannel::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf misconfig; //type: empty

}; // Native::SpanningTree::Etherchannel::Guard


class Native::SpanningTree::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: empty

}; // Native::SpanningTree::Extend


class Native::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

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

}; // Native::SpanningTree::Loopguard


class Native::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf max_hops; //type: uint8
        class InstanceRange; //type: Native::SpanningTree::Mst::InstanceRange
        class Configuration; //type: Native::SpanningTree::Mst::Configuration

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration> configuration;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::InstanceRange> > instance_range;
        
}; // Native::SpanningTree::Mst


class Native::SpanningTree::Mst::InstanceRange : public ydk::Entity
{
    public:
        InstanceRange();
        ~InstanceRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint16
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf root; //type: Root
        class Root;

}; // Native::SpanningTree::Mst::InstanceRange


class Native::SpanningTree::Mst::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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
        ydk::YLeaf revision; //type: uint16
        class Instance; //type: Native::SpanningTree::Mst::Configuration::Instance
        class PrivateVlan; //type: Native::SpanningTree::Mst::Configuration::PrivateVlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::Instance> > instance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::PrivateVlan> private_vlan;
        
}; // Native::SpanningTree::Mst::Configuration


class Native::SpanningTree::Mst::Configuration::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeafList vlan; //type: list of  one of string, uint16

}; // Native::SpanningTree::Mst::Configuration::Instance


class Native::SpanningTree::Mst::Configuration::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf synchronize; //type: empty

}; // Native::SpanningTree::Mst::Configuration::PrivateVlan


class Native::SpanningTree::Optimize : public ydk::Entity
{
    public:
        Optimize();
        ~Optimize();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bpdu; //type: Native::SpanningTree::Optimize::Bpdu

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Optimize::Bpdu> bpdu;
        
}; // Native::SpanningTree::Optimize


class Native::SpanningTree::Optimize::Bpdu : public ydk::Entity
{
    public:
        Bpdu();
        ~Bpdu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmission; //type: boolean

}; // Native::SpanningTree::Optimize::Bpdu


class Native::SpanningTree::Pathcost : public ydk::Entity
{
    public:
        Pathcost();
        ~Pathcost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: Native::SpanningTree::Pathcost::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Pathcost::Method> method;
        
}; // Native::SpanningTree::Pathcost


class Native::SpanningTree::Pathcost::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf short_; //type: empty

}; // Native::SpanningTree::Pathcost::Method


class Native::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bdpu; //type: Bdpu
        ydk::YLeaf default_; //type: empty
        class Bdpu;

}; // Native::SpanningTree::Portfast


class Native::SpanningTree::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_count; //type: uint8

}; // Native::SpanningTree::Transmit


class Native::SpanningTree::Uplinkfast : public ydk::Entity
{
    public:
        Uplinkfast();
        ~Uplinkfast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_update_rate; //type: uint32

}; // Native::SpanningTree::Uplinkfast


class Native::SpanningTree::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf priority; //type: uint16
        class Root; //type: Native::SpanningTree::Vlan::Root

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root> root;
        
}; // Native::SpanningTree::Vlan


class Native::SpanningTree::Vlan::Root : public ydk::Entity
{
    public:
        Root();
        ~Root();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::SpanningTree::Vlan::Root::Primary
        class Secondary; //type: Native::SpanningTree::Vlan::Root::Secondary

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Primary> primary;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Secondary> secondary;
        
}; // Native::SpanningTree::Vlan::Root


class Native::SpanningTree::Vlan::Root::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Primary


class Native::SpanningTree::Vlan::Root::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Secondary


class Native::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf templating; //type: empty

}; // Native::Subscriber


class Native::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedObject; //type: Native::Track::TrackedObject
        class Resolution; //type: Native::Track::Resolution
        class Timer; //type: Native::Track::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution> resolution;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer> timer;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject> > tracked_object;
        
}; // Native::Track


class Native::Track::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_number; //type: uint32
        ydk::YLeaf stub_object; //type: empty
        ydk::YLeaf default_state; //type: DefaultState
        class Interface; //type: Native::Track::TrackedObject::Interface
        class Ip; //type: Native::Track::TrackedObject::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Ipv6
        class List; //type: Native::Track::TrackedObject::List
        class Default_; //type: Native::Track::TrackedObject::Default_
        class Delay; //type: Native::Track::TrackedObject::Delay
        class Object; //type: Native::Track::TrackedObject::Object
        class Ipv6Object; //type: Native::Track::TrackedObject::Ipv6Object
        class IpObject; //type: Native::Track::TrackedObject::IpObject

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::IpObject> ip_object;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6Object> ipv6_object;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::List> list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Object> > object;
                class DefaultState;

}; // Native::Track::TrackedObject


class Native::Track::TrackedObject::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf routing; //type: empty
        class Protocol;

}; // Native::Track::TrackedObject::Interface


class Native::Track::TrackedObject::Ip : public ydk::Entity
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

        class Route; //type: Native::Track::TrackedObject::Ip::Route
        class Sla; //type: Native::Track::TrackedObject::Ip::Sla

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Sla> sla;
        
}; // Native::Track::TrackedObject::Ip


class Native::Track::TrackedObject::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ip::Route


class Native::Track::TrackedObject::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf state; //type: empty

}; // Native::Track::TrackedObject::Ip::Sla


class Native::Track::TrackedObject::Ipv6 : public ydk::Entity
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

        class Route; //type: Native::Track::TrackedObject::Ipv6::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6::Route> route;
        
}; // Native::Track::TrackedObject::Ipv6


class Native::Track::TrackedObject::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ipv6::Route


class Native::Track::TrackedObject::List : public ydk::Entity
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

        ydk::YLeaf boolean; //type: Boolean
        ydk::YLeaf threshold; //type: Threshold
        class Boolean;
        class Threshold;

}; // Native::Track::TrackedObject::List


class Native::Track::TrackedObject::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_state; //type: DefaultState
        class Delay; //type: Native::Track::TrackedObject::Default_::Delay
        class Ip; //type: Native::Track::TrackedObject::Default_::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Default_::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Ipv6> ipv6;
                class DefaultState;

}; // Native::Track::TrackedObject::Default_


class Native::Track::TrackedObject::Default_::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Track::TrackedObject::Default_::Delay


class Native::Track::TrackedObject::Default_::Ip : public ydk::Entity
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

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default_::Ip


class Native::Track::TrackedObject::Default_::Ipv6 : public ydk::Entity
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

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default_::Ipv6


class Native::Track::TrackedObject::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf down; //type: uint32
        ydk::YLeaf up; //type: uint32

}; // Native::Track::TrackedObject::Delay


class Native::Track::TrackedObject::Object : public ydk::Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf not_; //type: empty

}; // Native::Track::TrackedObject::Object


class Native::Track::TrackedObject::Ipv6Object : public ydk::Entity
{
    public:
        Ipv6Object();
        ~Ipv6Object();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::Ipv6Object


class Native::Track::TrackedObject::IpObject : public ydk::Entity
{
    public:
        IpObject();
        ~IpObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::IpObject


class Native::Track::Resolution : public ydk::Entity
{
    public:
        Resolution();
        ~Resolution();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Track::Resolution::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution::Ip> ip;
        
}; // Native::Track::Resolution


class Native::Track::Resolution::Ip : public ydk::Entity
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

        class Route; //type: Native::Track::Resolution::Ip::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution::Ip::Route> route;
        
}; // Native::Track::Resolution::Ip


class Native::Track::Resolution::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bgp; //type: uint32
        ydk::YLeaf eigrp; //type: uint32
        ydk::YLeaf isis; //type: uint32
        ydk::YLeaf ospf; //type: uint32
        ydk::YLeaf static_; //type: uint32

}; // Native::Track::Resolution::Ip::Route


class Native::Track::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Track::Timer::Interface
        class Ip; //type: Native::Track::Timer::Ip
        class Ipv6; //type: Native::Track::Timer::Ipv6
        class List; //type: Native::Track::Timer::List
        class StubObject; //type: Native::Track::Timer::StubObject

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::StubObject> stub_object;
        
}; // Native::Track::Timer


class Native::Track::Timer::Interface : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Interface


class Native::Track::Timer::Ip : public ydk::Entity
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

        class Route; //type: Native::Track::Timer::Ip::Route
        class Sla; //type: Native::Track::Timer::Ip::Sla

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ip::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ip::Sla> sla;
        
}; // Native::Track::Timer::Ip


class Native::Track::Timer::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Route


class Native::Track::Timer::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Sla


class Native::Track::Timer::Ipv6 : public ydk::Entity
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

        class Route; //type: Native::Track::Timer::Ipv6::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ipv6::Route> route;
        
}; // Native::Track::Timer::Ipv6


class Native::Track::Timer::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ipv6::Route


class Native::Track::Timer::List : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::List


class Native::Track::Timer::StubObject : public ydk::Entity
{
    public:
        StubObject();
        ~StubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::StubObject


class Native::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_auth_control; //type: empty
        class Credentials; //type: Native::Dot1X::Credentials
        class Critical; //type: Native::Dot1X::Critical
        class Test; //type: Native::Dot1X::Test
        class Supplicant; //type: Native::Dot1X::Supplicant

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Credentials> > credentials;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Critical> critical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Supplicant> supplicant;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Test> test;
        
}; // Native::Dot1X


class Native::Dot1X::Credentials : public ydk::Entity
{
    public:
        Credentials();
        ~Credentials();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf pki_trustpoint; //type: string
        class Password; //type: Native::Dot1X::Credentials::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Credentials::Password> password;
        
}; // Native::Dot1X::Credentials


class Native::Dot1X::Credentials::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Dot1X::Credentials::Password


class Native::Dot1X::Critical : public ydk::Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eapol; //type: empty
        class Recovery; //type: Native::Dot1X::Critical::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Critical::Recovery> recovery;
        
}; // Native::Dot1X::Critical


class Native::Dot1X::Critical::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint16

}; // Native::Dot1X::Critical::Recovery


class Native::Dot1X::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint16

}; // Native::Dot1X::Test


class Native::Dot1X::Supplicant : public ydk::Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force_multicast; //type: empty

}; // Native::Dot1X::Supplicant


class Native::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Native::Fallback::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile> profile;
        
}; // Native::Fallback


class Native::Fallback::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FallbackList; //type: Native::Fallback::Profile::FallbackList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList> > fallback_list;
        
}; // Native::Fallback::Profile


class Native::Fallback::Profile::FallbackList : public ydk::Entity
{
    public:
        FallbackList();
        ~FallbackList();

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
        class Ip; //type: Native::Fallback::Profile::FallbackList::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList::Ip> ip;
        
}; // Native::Fallback::Profile::FallbackList


class Native::Fallback::Profile::FallbackList::Ip : public ydk::Entity
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

        ydk::YLeaf admission; //type: string
        class AccessGroup; //type: Native::Fallback::Profile::FallbackList::Ip::AccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList::Ip::AccessGroup> > access_group;
        
}; // Native::Fallback::Profile::FallbackList::Ip


class Native::Fallback::Profile::FallbackList::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Fallback::Profile::FallbackList::Ip::AccessGroup


class Native::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        ydk::YLeaf type; //type: Type
        ydk::YLeaf parameter_map_type; //type: ParameterMapType
        ydk::YLeaf alert; //type: Alert
        ydk::YLeaf application_inspect; //type: ApplicationInspect
        ydk::YLeaf audit_trail; //type: AuditTrail
        ydk::YLeaf dns_timeout; //type: uint32
        ydk::YLeaf max_destination; //type: uint32
        ydk::YLeaf zone_mismatch; //type: ZoneMismatch
        class Timeout; //type: Native::ParameterMap::Timeout
        class WatchList; //type: Native::ParameterMap::WatchList
        class AggressiveAging; //type: Native::ParameterMap::AggressiveAging
        class Global; //type: Native::ParameterMap::Global
        class Icmp; //type: Native::ParameterMap::Icmp
        class Lisp; //type: Native::ParameterMap::Lisp
        class Log; //type: Native::ParameterMap::Log
        class MaxIncomplete; //type: Native::ParameterMap::MaxIncomplete
        class OneMinute; //type: Native::ParameterMap::OneMinute
        class Sessions; //type: Native::ParameterMap::Sessions
        class TcpInspect; //type: Native::ParameterMap::TcpInspect
        class TcpInspectZone; //type: Native::ParameterMap::TcpInspectZone
        class ThreatDetection; //type: Native::ParameterMap::ThreatDetection
        class Udp; //type: Native::ParameterMap::Udp
        class Vrf; //type: Native::ParameterMap::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging> aggressive_aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global> global;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log> log;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::MaxIncomplete> max_incomplete;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::OneMinute> one_minute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect> tcp_inspect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone> tcp_inspect_zone;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection> threat_detection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Timeout> timeout;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Udp> udp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::WatchList> watch_list;
                class Name;
        class Type;
        class ParameterMapType;
        class Alert;
        class ApplicationInspect;
        class AuditTrail;
        class ZoneMismatch;

}; // Native::ParameterMap


class Native::ParameterMap::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitState; //type: Native::ParameterMap::Timeout::InitState
        class FinWait; //type: Native::ParameterMap::Timeout::FinWait

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Timeout::FinWait> fin_wait;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Timeout::InitState> init_state; // presence node
        
}; // Native::ParameterMap::Timeout


class Native::ParameterMap::Timeout::InitState : public ydk::Entity
{
    public:
        InitState();
        ~InitState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sec; //type: uint32

}; // Native::ParameterMap::Timeout::InitState


class Native::ParameterMap::Timeout::FinWait : public ydk::Entity
{
    public:
        FinWait();
        ~FinWait();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: uint32

}; // Native::ParameterMap::Timeout::FinWait


class Native::ParameterMap::WatchList : public ydk::Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty
        ydk::YLeaf dynamic_expiry_timeout; //type: uint32
        class AddItem; //type: Native::ParameterMap::WatchList::AddItem

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::WatchList::AddItem> add_item;
        
}; // Native::ParameterMap::WatchList


class Native::ParameterMap::WatchList::AddItem : public ydk::Entity
{
    public:
        AddItem();
        ~AddItem();

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
        ydk::YLeaf ipv6; //type: string

}; // Native::ParameterMap::WatchList::AddItem


class Native::ParameterMap::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class High; //type: Native::ParameterMap::AggressiveAging::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High> high;
        
}; // Native::ParameterMap::AggressiveAging


class Native::ParameterMap::AggressiveAging::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Absolute; //type: Native::ParameterMap::AggressiveAging::High::Absolute
        class Percent; //type: Native::ParameterMap::AggressiveAging::High::Percent

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Percent> percent;
        
}; // Native::ParameterMap::AggressiveAging::High


class Native::ParameterMap::AggressiveAging::High::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint64
        ydk::YLeaf low; //type: uint64

}; // Native::ParameterMap::AggressiveAging::High::Absolute


class Native::ParameterMap::AggressiveAging::High::Percent : public ydk::Entity
{
    public:
        Percent();
        ~Percent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::AggressiveAging::High::Percent


class Native::ParameterMap::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fail_open; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf redirect_list; //type: uint16
        class License; //type: Native::ParameterMap::Global::License
        class Primary; //type: Native::ParameterMap::Global::Primary
        class Secondary; //type: Native::ParameterMap::Global::Secondary
        class Whitelist; //type: Native::ParameterMap::Global::Whitelist

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License> license;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary> primary; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary> secondary; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist> whitelist; // presence node
        
}; // Native::ParameterMap::Global


class Native::ParameterMap::Global::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unencypted; //type: Native::ParameterMap::Global::License::Unencypted
        class Encrypted; //type: Native::ParameterMap::Global::License::Encrypted

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Encrypted> encrypted;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Unencypted> unencypted;
        
}; // Native::ParameterMap::Global::License


class Native::ParameterMap::Global::License::Unencypted : public ydk::Entity
{
    public:
        Unencypted();
        ~Unencypted();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Unencypted


class Native::ParameterMap::Global::License::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Encrypted


class Native::ParameterMap::Global::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tower; //type: Native::ParameterMap::Global::Primary::Tower

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary::Tower> tower;
        
}; // Native::ParameterMap::Global::Primary


class Native::ParameterMap::Global::Primary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

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
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Primary::Tower


class Native::ParameterMap::Global::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tower; //type: Native::ParameterMap::Global::Secondary::Tower

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary::Tower> tower;
        
}; // Native::ParameterMap::Global::Secondary


class Native::ParameterMap::Global::Secondary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

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
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Secondary::Tower


class Native::ParameterMap::Global::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Acl; //type: Native::ParameterMap::Global::Whitelist::Acl
        class DomainName; //type: Native::ParameterMap::Global::Whitelist::DomainName
        class Download; //type: Native::ParameterMap::Global::Whitelist::Download

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::DomainName> domain_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Download> download; // presence node
        
}; // Native::ParameterMap::Global::Whitelist


class Native::ParameterMap::Global::Whitelist::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_number; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Whitelist::Acl


class Native::ParameterMap::Global::Whitelist::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::ParameterMap::Global::Whitelist::DomainName


class Native::ParameterMap::Global::Whitelist::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::ParameterMap::Global::Whitelist::Download


class Native::ParameterMap::Icmp : public ydk::Entity
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

        ydk::YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Icmp


class Native::ParameterMap::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Lisp


class Native::ParameterMap::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Log::FlowExport

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Log


class Native::ParameterMap::Log::FlowExport : public ydk::Entity
{
    public:
        FlowExport();
        ~FlowExport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template_; //type: Native::ParameterMap::Log::FlowExport::Template_
        class V9; //type: Native::ParameterMap::Log::FlowExport::V9

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::Template_> template_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Log::FlowExport


class Native::ParameterMap::Log::FlowExport::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Log::FlowExport::Template_


class Native::ParameterMap::Log::FlowExport::V9 : public ydk::Entity
{
    public:
        V9();
        ~V9();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::ParameterMap::Log::FlowExport::V9::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Log::FlowExport::V9


class Native::ParameterMap::Log::FlowExport::V9::Udp : public ydk::Entity
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

        class Destination; //type: Native::ParameterMap::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Log::FlowExport::V9::Udp


class Native::ParameterMap::Log::FlowExport::V9::Udp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::MaxIncomplete


class Native::ParameterMap::OneMinute : public ydk::Entity
{
    public:
        OneMinute();
        ~OneMinute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::OneMinute


class Native::ParameterMap::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        class Queue; //type: Native::ParameterMap::Sessions::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Sessions::Queue> queue;
        
}; // Native::ParameterMap::Sessions


class Native::ParameterMap::Sessions::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf min_threshold; //type: uint16

}; // Native::ParameterMap::Sessions::Queue


class Native::ParameterMap::TcpInspect : public ydk::Entity
{
    public:
        TcpInspect();
        ~TcpInspect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::ParameterMap::TcpInspect::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspect


class Native::ParameterMap::TcpInspect::Tcp : public ydk::Entity
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

        ydk::YLeaf finwait_time; //type: uint32
        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf synwait_time; //type: uint32
        class MaxIncomplete; //type: Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete> max_incomplete;
        
}; // Native::ParameterMap::TcpInspect::Tcp


class Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: uint32

}; // Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete


class Native::ParameterMap::TcpInspectZone : public ydk::Entity
{
    public:
        TcpInspectZone();
        ~TcpInspectZone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::ParameterMap::TcpInspectZone::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspectZone


class Native::ParameterMap::TcpInspectZone::Tcp : public ydk::Entity
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

        class SynFlood; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate> rate;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_destination; //type: uint32

}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate


class Native::ParameterMap::ThreatDetection : public ydk::Entity
{
    public:
        ThreatDetection();
        ~ThreatDetection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf basic_threat; //type: empty
        class Rate; //type: Native::ParameterMap::ThreatDetection::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate> rate;
        
}; // Native::ParameterMap::ThreatDetection


class Native::ParameterMap::ThreatDetection::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwDrop; //type: Native::ParameterMap::ThreatDetection::Rate::FwDrop
        class InspectDrop; //type: Native::ParameterMap::ThreatDetection::Rate::InspectDrop
        class SynAttack; //type: Native::ParameterMap::ThreatDetection::Rate::SynAttack

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::FwDrop> fw_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::InspectDrop> inspect_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::SynAttack> syn_attack;
        
}; // Native::ParameterMap::ThreatDetection::Rate


class Native::ParameterMap::ThreatDetection::Rate::FwDrop : public ydk::Entity
{
    public:
        FwDrop();
        ~FwDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::FwDrop


class Native::ParameterMap::ThreatDetection::Rate::InspectDrop : public ydk::Entity
{
    public:
        InspectDrop();
        ~InspectDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::InspectDrop


class Native::ParameterMap::ThreatDetection::Rate::SynAttack : public ydk::Entity
{
    public:
        SynAttack();
        ~SynAttack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::SynAttack


class Native::ParameterMap::Udp : public ydk::Entity
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

        ydk::YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Udp


class Native::ParameterMap::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf inspect; //type: string

}; // Native::ParameterMap::Vrf


class Native::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Packet; //type: Native::Ppp::Packet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ppp::Packet> packet;
        
}; // Native::Ppp


class Native::Ppp::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf allow_time; //type: uint32
        ydk::YLeaf block_time; //type: uint32

}; // Native::Ppp::Packet


class Native::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressTable; //type: Native::Mac::AddressTable
        class AccessList; //type: Native::Mac::AccessList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList> access_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable> address_table;
        
}; // Native::Mac


class Native::Mac::AddressTable : public ydk::Entity
{
    public:
        AddressTable();
        ~AddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_packet_learn; //type: empty
        class AgingTime; //type: Native::Mac::AddressTable::AgingTime
        class Learning; //type: Native::Mac::AddressTable::Learning
        class Notification; //type: Native::Mac::AddressTable::Notification
        class Static_; //type: Native::Mac::AddressTable::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::AgingTime> aging_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Learning> learning;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification> notification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Static_> static_;
        
}; // Native::Mac::AddressTable


class Native::Mac::AddressTable::AgingTime : public ydk::Entity
{
    public:
        AgingTime();
        ~AgingTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint32
        ydk::YLeaf routed_mac; //type: empty
        ydk::YLeaf vlan; //type: uint16

}; // Native::Mac::AddressTable::AgingTime


class Native::Mac::AddressTable::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Mac::AddressTable::Learning


class Native::Mac::AddressTable::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_move; //type: empty
        class Change; //type: Native::Mac::AddressTable::Notification::Change
        class Threshold; //type: Native::Mac::AddressTable::Notification::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Change> change; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold> threshold; // presence node
        
}; // Native::Mac::AddressTable::Notification


class Native::Mac::AddressTable::Notification::Change : public ydk::Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_size; //type: uint16
        ydk::YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Change


class Native::Mac::AddressTable::Notification::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        class Limit; //type: Native::Mac::AddressTable::Notification::Threshold::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold::Limit> limit;
        
}; // Native::Mac::AddressTable::Notification::Threshold


class Native::Mac::AddressTable::Notification::Threshold::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percentage; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Threshold::Limit


class Native::Mac::AddressTable::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf interface; //type: string

}; // Native::Mac::AddressTable::Static_


class Native::Mac::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Extended; //type: Native::Mac::AccessList::Extended

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended> > extended;
        
}; // Native::Mac::AccessList


class Native::Mac::AccessList::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class Deny; //type: Native::Mac::AccessList::Extended::Deny
        class Permit; //type: Native::Mac::AccessList::Extended::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit> permit;
        
}; // Native::Mac::AccessList::Extended


class Native::Mac::AccessList::Extended::Deny : public ydk::Entity
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

        ydk::YLeaf ethertype; //type: string
        class Source; //type: Native::Mac::AccessList::Extended::Deny::Source
        class Dest; //type: Native::Mac::AccessList::Extended::Deny::Dest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny::Dest> dest;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny::Source> source;
        
}; // Native::Mac::AccessList::Extended::Deny


class Native::Mac::AccessList::Extended::Deny::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Deny::Source


class Native::Mac::AccessList::Extended::Deny::Dest : public ydk::Entity
{
    public:
        Dest();
        ~Dest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Deny::Dest


class Native::Mac::AccessList::Extended::Permit : public ydk::Entity
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

        ydk::YLeaf ethertype; //type: string
        class Source; //type: Native::Mac::AccessList::Extended::Permit::Source
        class Dest; //type: Native::Mac::AccessList::Extended::Permit::Dest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit::Dest> dest;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit::Source> source;
        
}; // Native::Mac::AccessList::Extended::Permit


class Native::Mac::AccessList::Extended::Permit::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Permit::Source


class Native::Mac::AccessList::Extended::Permit::Dest : public ydk::Entity
{
    public:
        Dest();
        ~Dest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Permit::Dest


class Native::Tacacs : public ydk::Entity
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

        class Server; //type: Native::Tacacs::Server

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server> > server;
        
}; // Native::Tacacs


class Native::Tacacs::Server : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Address; //type: Native::Tacacs::Server::Address
        class Key; //type: Native::Tacacs::Server::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server::Key> key;
        
}; // Native::Tacacs::Server


class Native::Tacacs::Server::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

}; // Native::Tacacs::Server::Address


class Native::Tacacs::Server::Key : public ydk::Entity
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

}; // Native::Tacacs::Server::Key


class Native::TacacsServer : public ydk::Entity
{
    public:
        TacacsServer();
        ~TacacsServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint16
        class Host; //type: Native::TacacsServer::Host
        class DirectedRequest; //type: Native::TacacsServer::DirectedRequest
        class Key; //type: Native::TacacsServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::DirectedRequest> directed_request; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::TacacsServer::Key> key;
        
}; // Native::TacacsServer


class Native::TacacsServer::Host : public ydk::Entity
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

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf key; //type: one of string, enumeration
        ydk::YLeaf encryption_key; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Key;

}; // Native::TacacsServer::Host


class Native::TacacsServer::DirectedRequest : public ydk::Entity
{
    public:
        DirectedRequest();
        ~DirectedRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restricted; //type: empty
        ydk::YLeaf no_truncate; //type: empty

}; // Native::TacacsServer::DirectedRequest


class Native::TacacsServer::Key : public ydk::Entity
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

}; // Native::TacacsServer::Key

class Native::SpanningTree::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf pvst;
        static const ydk::Enum::YLeaf rapid_pvst;

};

class Native::SpanningTree::Mst::InstanceRange::Root : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class Native::SpanningTree::Portfast::Bdpu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bpdufilter;
        static const ydk::Enum::YLeaf bpduguard;

};

class Native::Track::TrackedObject::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Track::TrackedObject::Interface::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf line_protocol;

};

class Native::Track::TrackedObject::Ip::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::Ipv6::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::List::Boolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;

};

class Native::Track::TrackedObject::List::Threshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf weight;

};

class Native::Track::TrackedObject::Default_::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Dot1X::Credentials::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::ParameterMap::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf gtp;

};

class Native::ParameterMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cws_tunnel;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf inspect_global;
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf inspect_vrf;
        static const ydk::Enum::YLeaf inspect_zone;
        static const ydk::Enum::YLeaf regex;
        static const ydk::Enum::YLeaf authbypass;

};

class Native::ParameterMap::ParameterMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf authbypass;

};

class Native::ParameterMap::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::ParameterMap::ApplicationInspect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf gtp;
        static const ydk::Enum::YLeaf h323;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf netbios;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf rtsp;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf skinny;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf tftp;

};

class Native::ParameterMap::AuditTrail : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::ParameterMap::ZoneMismatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;

};

class Native::Tacacs::Server::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::TacacsServer::Host::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::TacacsServer::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_77_ */

