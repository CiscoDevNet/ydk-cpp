#ifndef _CISCO_IOS_XE_NATIVE_74_
#define _CISCO_IOS_XE_NATIVE_74_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_73.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Redundancy::Policy::ConfigSync::Lbl::Prc : public Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Lbl::Prc


class Native::Redundancy::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rpso; //type: uint16

}; // Native::Redundancy::Timer


class Native::Redundancy::Interchassis : public Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Native::Redundancy::Interchassis::Group

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group> > group;
        
}; // Native::Redundancy::Interchassis


class Native::Redundancy::Interchassis::Group : public Entity
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

        YLeaf group_number; //type: uint64
        class Monitor; //type: Native::Redundancy::Interchassis::Group::Monitor
        class Member; //type: Native::Redundancy::Interchassis::Group::Member
        class Backbone; //type: Native::Redundancy::Interchassis::Group::Backbone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone> backbone;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Member> member;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Monitor> monitor;
        
}; // Native::Redundancy::Interchassis::Group


class Native::Redundancy::Interchassis::Group::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty
        YLeaf bfd; //type: empty

}; // Native::Redundancy::Interchassis::Group::Monitor


class Native::Redundancy::Interchassis::Group::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string

}; // Native::Redundancy::Interchassis::Group::Member


class Native::Redundancy::Interchassis::Group::Backbone : public Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface> interface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone


class Native::Redundancy::Interchassis::Group::Backbone::Interface : public Entity
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

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone::Interface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface


class Native::Scheduler : public Entity
{
    public:
        Scheduler();
        ~Scheduler();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Runtime; //type: Native::Scheduler::Runtime
        class Allocate; //type: Native::Scheduler::Allocate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Scheduler::Allocate> allocate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Scheduler::Runtime> runtime;
        
}; // Native::Scheduler


class Native::Scheduler::Runtime : public Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf netinput; //type: uint16

}; // Native::Scheduler::Runtime


class Native::Scheduler::Allocate : public Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interrupt_time; //type: uint16
        YLeaf process_time; //type: uint16

}; // Native::Scheduler::Allocate


class Native::Epm : public Entity
{
    public:
        Epm();
        ~Epm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: empty

}; // Native::Epm


class Native::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backbonefast; //type: empty
        YLeaf logging; //type: empty
        YLeaf mode; //type: ModeEnum
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
                class ModeEnum;

}; // Native::SpanningTree


class Native::SpanningTree::Bridge : public Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        YLeaf id; //type: string

}; // Native::SpanningTree::Bridge


class Native::SpanningTree::Etherchannel : public Entity
{
    public:
        Etherchannel();
        ~Etherchannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Guard; //type: Native::SpanningTree::Etherchannel::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel::Guard> guard;
        
}; // Native::SpanningTree::Etherchannel


class Native::SpanningTree::Etherchannel::Guard : public Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf misconfig; //type: empty

}; // Native::SpanningTree::Etherchannel::Guard


class Native::SpanningTree::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: empty

}; // Native::SpanningTree::Extend


class Native::SpanningTree::Loopguard : public Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::SpanningTree::Loopguard


class Native::SpanningTree::Mst : public Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forward_time; //type: uint8
        YLeaf hello_time; //type: uint8
        YLeaf max_age; //type: uint8
        YLeaf max_hops; //type: uint8
        class InstanceRange; //type: Native::SpanningTree::Mst::InstanceRange
        class Configuration; //type: Native::SpanningTree::Mst::Configuration

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration> configuration;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::InstanceRange> > instance_range;
        
}; // Native::SpanningTree::Mst


class Native::SpanningTree::Mst::InstanceRange : public Entity
{
    public:
        InstanceRange();
        ~InstanceRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        YLeaf priority; //type: uint16
        YLeaf root; //type: RootEnum
        class RootEnum;

}; // Native::SpanningTree::Mst::InstanceRange


class Native::SpanningTree::Mst::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf revision; //type: uint16
        class Instance; //type: Native::SpanningTree::Mst::Configuration::Instance
        class PrivateVlan; //type: Native::SpanningTree::Mst::Configuration::PrivateVlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::Instance> > instance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::PrivateVlan> private_vlan;
        
}; // Native::SpanningTree::Mst::Configuration


class Native::SpanningTree::Mst::Configuration::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeafList vlan; //type: list of  one of uint16, string

}; // Native::SpanningTree::Mst::Configuration::Instance


class Native::SpanningTree::Mst::Configuration::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf synchronize; //type: empty

}; // Native::SpanningTree::Mst::Configuration::PrivateVlan


class Native::SpanningTree::Optimize : public Entity
{
    public:
        Optimize();
        ~Optimize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bpdu; //type: Native::SpanningTree::Optimize::Bpdu

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Optimize::Bpdu> bpdu;
        
}; // Native::SpanningTree::Optimize


class Native::SpanningTree::Optimize::Bpdu : public Entity
{
    public:
        Bpdu();
        ~Bpdu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmission; //type: boolean

}; // Native::SpanningTree::Optimize::Bpdu


class Native::SpanningTree::Pathcost : public Entity
{
    public:
        Pathcost();
        ~Pathcost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Method; //type: Native::SpanningTree::Pathcost::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Pathcost::Method> method;
        
}; // Native::SpanningTree::Pathcost


class Native::SpanningTree::Pathcost::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf short; //type: empty

}; // Native::SpanningTree::Pathcost::Method


class Native::SpanningTree::Portfast : public Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bdpu; //type: BdpuEnum
        YLeaf default_; //type: empty
        class BdpuEnum;

}; // Native::SpanningTree::Portfast


class Native::SpanningTree::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hold_count; //type: uint8

}; // Native::SpanningTree::Transmit


class Native::SpanningTree::Uplinkfast : public Entity
{
    public:
        Uplinkfast();
        ~Uplinkfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_update_rate; //type: uint32

}; // Native::SpanningTree::Uplinkfast


class Native::SpanningTree::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf max_age; //type: uint8
        YLeaf forward_time; //type: uint8
        YLeaf hello_time; //type: uint8
        YLeaf priority; //type: uint16
        class Root; //type: Native::SpanningTree::Vlan::Root

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root> root;
        
}; // Native::SpanningTree::Vlan


class Native::SpanningTree::Vlan::Root : public Entity
{
    public:
        Root();
        ~Root();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Primary; //type: Native::SpanningTree::Vlan::Root::Primary
        class Secondary; //type: Native::SpanningTree::Vlan::Root::Secondary

        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Primary> primary;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Secondary> secondary;
        
}; // Native::SpanningTree::Vlan::Root


class Native::SpanningTree::Vlan::Root::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diameter; //type: uint8
        YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Primary


class Native::SpanningTree::Vlan::Root::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diameter; //type: uint8
        YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Secondary


class Native::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf templating; //type: empty

}; // Native::Subscriber


class Native::Track : public Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrackedObject; //type: Native::Track::TrackedObject
        class Resolution; //type: Native::Track::Resolution
        class Timer; //type: Native::Track::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution> resolution;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer> timer;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject> > tracked_object;
        
}; // Native::Track


class Native::Track::TrackedObject : public Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_number; //type: uint32
        YLeaf stub_object; //type: empty
        YLeaf default_state; //type: DefaultStateEnum
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
                class DefaultStateEnum;

}; // Native::Track::TrackedObject


class Native::Track::TrackedObject::Interface : public Entity
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

        YLeaf name; //type: string
        YLeaf protocol; //type: ProtocolEnum
        YLeaf routing; //type: empty
        class ProtocolEnum;

}; // Native::Track::TrackedObject::Interface


class Native::Track::TrackedObject::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Native::Track::TrackedObject::Ip::Route
        class Sla; //type: Native::Track::TrackedObject::Ip::Sla

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Sla> sla;
        
}; // Native::Track::TrackedObject::Ip


class Native::Track::TrackedObject::Ip::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf reachability; //type: empty
        YLeaf metric; //type: MetricEnum
        class MetricEnum;

}; // Native::Track::TrackedObject::Ip::Route


class Native::Track::TrackedObject::Ip::Sla : public Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf reachability; //type: empty
        YLeaf state; //type: empty

}; // Native::Track::TrackedObject::Ip::Sla


class Native::Track::TrackedObject::Ipv6 : public Entity
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

        class Route; //type: Native::Track::TrackedObject::Ipv6::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6::Route> route;
        
}; // Native::Track::TrackedObject::Ipv6


class Native::Track::TrackedObject::Ipv6::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf reachability; //type: empty
        YLeaf metric; //type: MetricEnum
        class MetricEnum;

}; // Native::Track::TrackedObject::Ipv6::Route


class Native::Track::TrackedObject::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boolean; //type: BooleanEnum
        YLeaf threshold; //type: ThresholdEnum
        class BooleanEnum;
        class ThresholdEnum;

}; // Native::Track::TrackedObject::List


class Native::Track::TrackedObject::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_state; //type: DefaultStateEnum
        class Delay; //type: Native::Track::TrackedObject::Default_::Delay
        class Ip; //type: Native::Track::TrackedObject::Default_::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Default_::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Delay> delay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::TrackedObject::Default_::Ipv6> ipv6;
                class DefaultStateEnum;

}; // Native::Track::TrackedObject::Default_


class Native::Track::TrackedObject::Default_::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Track::TrackedObject::Default_::Delay


class Native::Track::TrackedObject::Default_::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default_::Ip


class Native::Track::TrackedObject::Default_::Ipv6 : public Entity
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

        YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default_::Ipv6


class Native::Track::TrackedObject::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf down; //type: uint32
        YLeaf up; //type: uint32

}; // Native::Track::TrackedObject::Delay


class Native::Track::TrackedObject::Object : public Entity
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

        YLeaf number; //type: uint32
        YLeaf not; //type: empty

}; // Native::Track::TrackedObject::Object


class Native::Track::TrackedObject::Ipv6Object : public Entity
{
    public:
        Ipv6Object();
        ~Ipv6Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::Ipv6Object


class Native::Track::TrackedObject::IpObject : public Entity
{
    public:
        IpObject();
        ~IpObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::IpObject


class Native::Track::Resolution : public Entity
{
    public:
        Resolution();
        ~Resolution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Track::Resolution::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution::Ip> ip;
        
}; // Native::Track::Resolution


class Native::Track::Resolution::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Native::Track::Resolution::Ip::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Resolution::Ip::Route> route;
        
}; // Native::Track::Resolution::Ip


class Native::Track::Resolution::Ip::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgp; //type: uint32
        YLeaf eigrp; //type: uint32
        YLeaf isis; //type: uint32
        YLeaf ospf; //type: uint32
        YLeaf static_; //type: uint32

}; // Native::Track::Resolution::Ip::Route


class Native::Track::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Native::Track::Timer::Interface : public Entity
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

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::Interface


class Native::Track::Timer::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Native::Track::Timer::Ip::Route
        class Sla; //type: Native::Track::Timer::Ip::Sla

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ip::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ip::Sla> sla;
        
}; // Native::Track::Timer::Ip


class Native::Track::Timer::Ip::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Route


class Native::Track::Timer::Ip::Sla : public Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Sla


class Native::Track::Timer::Ipv6 : public Entity
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

        class Route; //type: Native::Track::Timer::Ipv6::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Track::Timer::Ipv6::Route> route;
        
}; // Native::Track::Timer::Ipv6


class Native::Track::Timer::Ipv6::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ipv6::Route


class Native::Track::Timer::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::List


class Native::Track::Timer::StubObject : public Entity
{
    public:
        StubObject();
        ~StubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf ms; //type: uint32

}; // Native::Track::Timer::StubObject


class Native::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_auth_control; //type: empty
        class Credentials; //type: Native::Dot1X::Credentials
        class Critical; //type: Native::Dot1X::Critical
        class Test; //type: Native::Dot1X::Test
        class Supplicant; //type: Native::Dot1X::Supplicant

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Credentials> > credentials;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Critical> critical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Supplicant> supplicant;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Test> test;
        
}; // Native::Dot1X


class Native::Dot1X::Credentials : public Entity
{
    public:
        Credentials();
        ~Credentials();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf username; //type: string
        YLeaf pki_trustpoint; //type: string
        class Password; //type: Native::Dot1X::Credentials::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Credentials::Password> password;
        
}; // Native::Dot1X::Credentials


class Native::Dot1X::Credentials::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Dot1X::Credentials::Password


class Native::Dot1X::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eapol; //type: empty
        class Recovery; //type: Native::Dot1X::Critical::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Dot1X::Critical::Recovery> recovery;
        
}; // Native::Dot1X::Critical


class Native::Dot1X::Critical::Recovery : public Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint16

}; // Native::Dot1X::Critical::Recovery


class Native::Dot1X::Test : public Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint16

}; // Native::Dot1X::Test


class Native::Dot1X::Supplicant : public Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf force_multicast; //type: empty

}; // Native::Dot1X::Supplicant


class Native::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Native::Fallback::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile> profile;
        
}; // Native::Fallback


class Native::Fallback::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FallbackList; //type: Native::Fallback::Profile::FallbackList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList> > fallback_list;
        
}; // Native::Fallback::Profile


class Native::Fallback::Profile::FallbackList : public Entity
{
    public:
        FallbackList();
        ~FallbackList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Ip; //type: Native::Fallback::Profile::FallbackList::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList::Ip> ip;
        
}; // Native::Fallback::Profile::FallbackList


class Native::Fallback::Profile::FallbackList::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        class AccessGroup; //type: Native::Fallback::Profile::FallbackList::Ip::AccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList::Ip::AccessGroup> > access_group;
        
}; // Native::Fallback::Profile::FallbackList::Ip


class Native::Fallback::Profile::FallbackList::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Fallback::Profile::FallbackList::Ip::AccessGroup


class Native::ParameterMap : public Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        YLeaf type; //type: TypeEnum
        YLeaf parameter_map_type; //type: ParameterMapTypeEnum
        YLeaf alert; //type: AlertEnum
        YLeaf application_inspect; //type: ApplicationInspectEnum
        YLeaf audit_trail; //type: AuditTrailEnum
        YLeaf dns_timeout; //type: uint32
        YLeaf max_destination; //type: uint32
        YLeaf zone_mismatch; //type: ZoneMismatchEnum
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
                class NameEnum;
        class TypeEnum;
        class ParameterMapTypeEnum;
        class AlertEnum;
        class ApplicationInspectEnum;
        class AuditTrailEnum;
        class ZoneMismatchEnum;

}; // Native::ParameterMap


class Native::ParameterMap::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InitState; //type: Native::ParameterMap::Timeout::InitState
        class FinWait; //type: Native::ParameterMap::Timeout::FinWait

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Timeout::FinWait> fin_wait;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Timeout::InitState> init_state; // presence node
        
}; // Native::ParameterMap::Timeout


class Native::ParameterMap::Timeout::InitState : public Entity
{
    public:
        InitState();
        ~InitState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sec; //type: uint32

}; // Native::ParameterMap::Timeout::InitState


class Native::ParameterMap::Timeout::FinWait : public Entity
{
    public:
        FinWait();
        ~FinWait();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: uint32

}; // Native::ParameterMap::Timeout::FinWait


class Native::ParameterMap::WatchList : public Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: empty
        YLeaf dynamic_expiry_timeout; //type: uint32
        class AddItem; //type: Native::ParameterMap::WatchList::AddItem

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::WatchList::AddItem> add_item;
        
}; // Native::ParameterMap::WatchList


class Native::ParameterMap::WatchList::AddItem : public Entity
{
    public:
        AddItem();
        ~AddItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::ParameterMap::WatchList::AddItem


class Native::ParameterMap::AggressiveAging : public Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class High; //type: Native::ParameterMap::AggressiveAging::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High> high;
        
}; // Native::ParameterMap::AggressiveAging


class Native::ParameterMap::AggressiveAging::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Absolute; //type: Native::ParameterMap::AggressiveAging::High::Absolute
        class Percent; //type: Native::ParameterMap::AggressiveAging::High::Percent

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Percent> percent;
        
}; // Native::ParameterMap::AggressiveAging::High


class Native::ParameterMap::AggressiveAging::High::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint64
        YLeaf low; //type: uint64

}; // Native::ParameterMap::AggressiveAging::High::Absolute


class Native::ParameterMap::AggressiveAging::High::Percent : public Entity
{
    public:
        Percent();
        ~Percent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::AggressiveAging::High::Percent


class Native::ParameterMap::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fail_open; //type: empty
        YLeaf logging; //type: empty
        YLeaf redirect_list; //type: uint16
        class License; //type: Native::ParameterMap::Global::License
        class Primary; //type: Native::ParameterMap::Global::Primary
        class Secondary; //type: Native::ParameterMap::Global::Secondary
        class Whitelist; //type: Native::ParameterMap::Global::Whitelist

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License> license;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary> primary; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary> secondary; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist> whitelist; // presence node
        
}; // Native::ParameterMap::Global


class Native::ParameterMap::Global::License : public Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Unencypted; //type: Native::ParameterMap::Global::License::Unencypted
        class Encrypted; //type: Native::ParameterMap::Global::License::Encrypted

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Encrypted> encrypted;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Unencypted> unencypted;
        
}; // Native::ParameterMap::Global::License


class Native::ParameterMap::Global::License::Unencypted : public Entity
{
    public:
        Unencypted();
        ~Unencypted();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Unencypted


class Native::ParameterMap::Global::License::Encrypted : public Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Encrypted


class Native::ParameterMap::Global::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tower; //type: Native::ParameterMap::Global::Primary::Tower

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary::Tower> tower;
        
}; // Native::ParameterMap::Global::Primary


class Native::ParameterMap::Global::Primary::Tower : public Entity
{
    public:
        Tower();
        ~Tower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf name; //type: string

}; // Native::ParameterMap::Global::Primary::Tower


class Native::ParameterMap::Global::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tower; //type: Native::ParameterMap::Global::Secondary::Tower

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary::Tower> tower;
        
}; // Native::ParameterMap::Global::Secondary


class Native::ParameterMap::Global::Secondary::Tower : public Entity
{
    public:
        Tower();
        ~Tower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf name; //type: string

}; // Native::ParameterMap::Global::Secondary::Tower


class Native::ParameterMap::Global::Whitelist : public Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Acl; //type: Native::ParameterMap::Global::Whitelist::Acl
        class DomainName; //type: Native::ParameterMap::Global::Whitelist::DomainName
        class Download; //type: Native::ParameterMap::Global::Whitelist::Download

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::DomainName> domain_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Download> download; // presence node
        
}; // Native::ParameterMap::Global::Whitelist


class Native::ParameterMap::Global::Whitelist::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_number; //type: uint16
        YLeaf name; //type: string

}; // Native::ParameterMap::Global::Whitelist::Acl


class Native::ParameterMap::Global::Whitelist::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf regex; //type: string

}; // Native::ParameterMap::Global::Whitelist::DomainName


class Native::ParameterMap::Global::Whitelist::Download : public Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::ParameterMap::Global::Whitelist::Download


class Native::ParameterMap::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Icmp


class Native::ParameterMap::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Lisp


class Native::ParameterMap::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Log::FlowExport

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Log


class Native::ParameterMap::Log::FlowExport : public Entity
{
    public:
        FlowExport();
        ~FlowExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: Native::ParameterMap::Log::FlowExport::Template_
        class V9; //type: Native::ParameterMap::Log::FlowExport::V9

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::Template_> template_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Log::FlowExport


class Native::ParameterMap::Log::FlowExport::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Log::FlowExport::Template_


class Native::ParameterMap::Log::FlowExport::V9 : public Entity
{
    public:
        V9();
        ~V9();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Udp; //type: Native::ParameterMap::Log::FlowExport::V9::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Log::FlowExport::V9


class Native::ParameterMap::Log::FlowExport::V9::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::ParameterMap::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Log::FlowExport::V9::Udp


class Native::ParameterMap::Log::FlowExport::V9::Udp::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_ip; //type: string
        YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::MaxIncomplete : public Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high; //type: uint32
        YLeaf low; //type: uint32

}; // Native::ParameterMap::MaxIncomplete


class Native::ParameterMap::OneMinute : public Entity
{
    public:
        OneMinute();
        ~OneMinute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high; //type: uint32
        YLeaf low; //type: uint32

}; // Native::ParameterMap::OneMinute


class Native::ParameterMap::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        class Queue; //type: Native::ParameterMap::Sessions::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::Sessions::Queue> queue;
        
}; // Native::ParameterMap::Sessions


class Native::ParameterMap::Sessions::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_threshold; //type: uint16
        YLeaf min_threshold; //type: uint16

}; // Native::ParameterMap::Sessions::Queue


class Native::ParameterMap::TcpInspect : public Entity
{
    public:
        TcpInspect();
        ~TcpInspect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcp; //type: Native::ParameterMap::TcpInspect::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspect


class Native::ParameterMap::TcpInspect::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf finwait_time; //type: uint32
        YLeaf idle_time; //type: uint32
        YLeaf synwait_time; //type: uint32
        class MaxIncomplete; //type: Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete> max_incomplete;
        
}; // Native::ParameterMap::TcpInspect::Tcp


class Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete : public Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: uint32

}; // Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete


class Native::ParameterMap::TcpInspectZone : public Entity
{
    public:
        TcpInspectZone();
        ~TcpInspectZone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcp; //type: Native::ParameterMap::TcpInspectZone::Tcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspectZone


class Native::ParameterMap::TcpInspectZone::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SynFlood; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood : public Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rate; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate> rate;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_destination; //type: uint32

}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate


class Native::ParameterMap::ThreatDetection : public Entity
{
    public:
        ThreatDetection();
        ~ThreatDetection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf basic_threat; //type: empty
        class Rate; //type: Native::ParameterMap::ThreatDetection::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate> rate;
        
}; // Native::ParameterMap::ThreatDetection


class Native::ParameterMap::ThreatDetection::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FwDrop; //type: Native::ParameterMap::ThreatDetection::Rate::FwDrop
        class InspectDrop; //type: Native::ParameterMap::ThreatDetection::Rate::InspectDrop
        class SynAttack; //type: Native::ParameterMap::ThreatDetection::Rate::SynAttack

        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::FwDrop> fw_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::InspectDrop> inspect_drop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::SynAttack> syn_attack;
        
}; // Native::ParameterMap::ThreatDetection::Rate


class Native::ParameterMap::ThreatDetection::Rate::FwDrop : public Entity
{
    public:
        FwDrop();
        ~FwDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf average_time_frame; //type: uint32
        YLeaf average_threshold; //type: uint64
        YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::FwDrop


class Native::ParameterMap::ThreatDetection::Rate::InspectDrop : public Entity
{
    public:
        InspectDrop();
        ~InspectDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf average_time_frame; //type: uint32
        YLeaf average_threshold; //type: uint64
        YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::InspectDrop


class Native::ParameterMap::ThreatDetection::Rate::SynAttack : public Entity
{
    public:
        SynAttack();
        ~SynAttack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf average_time_frame; //type: uint32
        YLeaf average_threshold; //type: uint64
        YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::SynAttack


class Native::ParameterMap::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Udp


class Native::ParameterMap::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf inspect; //type: string

}; // Native::ParameterMap::Vrf


class Native::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Packet; //type: Native::Ppp::Packet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ppp::Packet> packet;
        
}; // Native::Ppp


class Native::Ppp::Packet : public Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf allow_time; //type: uint32
        YLeaf block_time; //type: uint32

}; // Native::Ppp::Packet


class Native::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressTable; //type: Native::Mac::AddressTable
        class AccessList; //type: Native::Mac::AccessList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList> access_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable> address_table;
        
}; // Native::Mac


class Native::Mac::AddressTable : public Entity
{
    public:
        AddressTable();
        ~AddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aging_time; //type: uint32
        YLeaf routed_mac; //type: empty
        YLeaf vlan; //type: uint16
        YLeaf control_packet_learn; //type: empty
        class Learning; //type: Native::Mac::AddressTable::Learning
        class Notification; //type: Native::Mac::AddressTable::Notification
        class Static_; //type: Native::Mac::AddressTable::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Learning> learning;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification> notification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Static_> static_;
        
}; // Native::Mac::AddressTable


class Native::Mac::AddressTable::Learning : public Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Mac::AddressTable::Learning


class Native::Mac::AddressTable::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_move; //type: empty
        class Change; //type: Native::Mac::AddressTable::Notification::Change
        class Threshold; //type: Native::Mac::AddressTable::Notification::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Change> change; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold> threshold; // presence node
        
}; // Native::Mac::AddressTable::Notification


class Native::Mac::AddressTable::Notification::Change : public Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf history_size; //type: uint16
        YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Change


class Native::Mac::AddressTable::Notification::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        class Limit; //type: Native::Mac::AddressTable::Notification::Threshold::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold::Limit> limit;
        
}; // Native::Mac::AddressTable::Notification::Threshold


class Native::Mac::AddressTable::Notification::Threshold::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percentage; //type: uint8
        YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Threshold::Limit


class Native::Mac::AddressTable::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf vlan; //type: uint16
        YLeaf drop; //type: empty
        YLeaf interface; //type: string

}; // Native::Mac::AddressTable::Static_


class Native::Mac::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Extended; //type: Native::Mac::AccessList::Extended

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended> > extended;
        
}; // Native::Mac::AccessList


class Native::Mac::AccessList::Extended : public Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class Deny; //type: Native::Mac::AccessList::Extended::Deny
        class Permit; //type: Native::Mac::AccessList::Extended::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit> permit;
        
}; // Native::Mac::AccessList::Extended


class Native::Mac::AccessList::Extended::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethertype; //type: string
        class Source; //type: Native::Mac::AccessList::Extended::Deny::Source
        class Dest; //type: Native::Mac::AccessList::Extended::Deny::Dest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny::Dest> dest;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Deny::Source> source;
        
}; // Native::Mac::AccessList::Extended::Deny


class Native::Mac::AccessList::Extended::Deny::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Deny::Source


class Native::Mac::AccessList::Extended::Deny::Dest : public Entity
{
    public:
        Dest();
        ~Dest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Deny::Dest


class Native::Mac::AccessList::Extended::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethertype; //type: string
        class Source; //type: Native::Mac::AccessList::Extended::Permit::Source
        class Dest; //type: Native::Mac::AccessList::Extended::Permit::Dest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit::Dest> dest;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mac::AccessList::Extended::Permit::Source> source;
        
}; // Native::Mac::AccessList::Extended::Permit


class Native::Mac::AccessList::Extended::Permit::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Permit::Source


class Native::Mac::AccessList::Extended::Permit::Dest : public Entity
{
    public:
        Dest();
        ~Dest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf host; //type: string
        YLeaf mac_address; //type: string

}; // Native::Mac::AccessList::Extended::Permit::Dest


class Native::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Native::Tacacs::Server

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server> > server;
        
}; // Native::Tacacs


class Native::Tacacs::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Address; //type: Native::Tacacs::Server::Address
        class Key; //type: Native::Tacacs::Server::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Tacacs::Server::Key> key;
        
}; // Native::Tacacs::Server


class Native::Tacacs::Server::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Tacacs::Server::Address


class Native::Tacacs::Server::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Tacacs::Server::Key

class Native::SpanningTree::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf mst;
        static const Enum::YLeaf pvst;
        static const Enum::YLeaf rapid_pvst;

};

class Native::SpanningTree::Mst::InstanceRange::RootEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf secondary;

};

class Native::SpanningTree::Portfast::BdpuEnum : public Enum
{
    public:
        static const Enum::YLeaf bpdufilter;
        static const Enum::YLeaf bpduguard;

};

class Native::Track::TrackedObject::DefaultStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class Native::Track::TrackedObject::Interface::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf line_protocol;

};

class Native::Track::TrackedObject::Ip::Route::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::Ipv6::Route::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::List::BooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf and_;
        static const Enum::YLeaf or_;

};

class Native::Track::TrackedObject::List::ThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf percentage;
        static const Enum::YLeaf weight;

};

class Native::Track::TrackedObject::Default_::DefaultStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class Native::Dot1X::Credentials::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::ParameterMap::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf global;
        static const Enum::YLeaf gtp;

};

class Native::ParameterMap::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cws_tunnel;
        static const Enum::YLeaf inspect;
        static const Enum::YLeaf inspect_global;
        static const Enum::YLeaf webauth;
        static const Enum::YLeaf inspect_vrf;
        static const Enum::YLeaf inspect_zone;
        static const Enum::YLeaf regex;
        static const Enum::YLeaf authbypass;

};

class Native::ParameterMap::ParameterMapTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf webauth;
        static const Enum::YLeaf authbypass;

};

class Native::ParameterMap::AlertEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::ParameterMap::ApplicationInspectEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf gtp;
        static const Enum::YLeaf h323;
        static const Enum::YLeaf http;
        static const Enum::YLeaf imap;
        static const Enum::YLeaf login;
        static const Enum::YLeaf msrpc;
        static const Enum::YLeaf netbios;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf rtsp;
        static const Enum::YLeaf shell;
        static const Enum::YLeaf sip;
        static const Enum::YLeaf skinny;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf sunrpc;
        static const Enum::YLeaf tftp;

};

class Native::ParameterMap::AuditTrailEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::ParameterMap::ZoneMismatchEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;

};

class Native::Tacacs::Server::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_74_ */

