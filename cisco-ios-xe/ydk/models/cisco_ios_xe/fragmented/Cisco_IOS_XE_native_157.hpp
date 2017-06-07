#ifndef _CISCO_IOS_XE_NATIVE_157_
#define _CISCO_IOS_XE_NATIVE_157_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_155.hpp"
#include "Cisco_IOS_XE_native_156.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Printer_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Printer_Interface_Template::Switchport::Access


class Native::Template_::Printer_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Printer_Interface_Template::Switchport::Voice


class Native::Template_::Printer_Interface_Template::SpanningTree : public Entity
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

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Printer_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Printer_Interface_Template::SpanningTree


class Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Printer_Interface_Template::SpanningTree::Portfast : public Entity
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

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Printer_Interface_Template::SpanningTree::Portfast


class Native::Template_::Printer_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Printer_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Printer_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Printer_Interface_Template::StormControl


class Native::Template_::Printer_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Printer_Interface_Template::StormControl::Broadcast


class Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Printer_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Printer_Interface_Template::StormControl::Action


class Native::Template_::Printer_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Printer_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Printer_Interface_Template::Ip


class Native::Template_::Printer_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Printer_Interface_Template::Ip::Dhcp


class Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

        YLeaf rate; //type: uint16

}; // Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Router_Interface_Template : public Entity
{
    public:
        Router_Interface_Template();
        ~Router_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Router_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Router_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Router_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Router_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Router_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Router_Interface_Template


class Native::Template_::Router_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Router_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Router_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Router_Interface_Template::ServicePolicy


class Native::Template_::Router_Interface_Template::ServicePolicy::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Router_Interface_Template::ServicePolicy::Input


class Native::Template_::Router_Interface_Template::ServicePolicy::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Router_Interface_Template::ServicePolicy::Output


class Native::Template_::Router_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Router_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Router_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Router_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Router_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Router_Interface_Template::Switchport


class Native::Template_::Router_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Router_Interface_Template::Switchport::Mode


class Native::Template_::Router_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Router_Interface_Template::Switchport::Block


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        class Type; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inactivity; //type: empty

}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class Vlan; //type: Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

        YLeaf access; //type: empty

}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Router_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Router_Interface_Template::Switchport::Access


class Native::Template_::Router_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Router_Interface_Template::Switchport::Voice


class Native::Template_::Router_Interface_Template::SpanningTree : public Entity
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

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Router_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Router_Interface_Template::SpanningTree


class Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Router_Interface_Template::SpanningTree::Portfast : public Entity
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

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Router_Interface_Template::SpanningTree::Portfast


class Native::Template_::Router_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Router_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Router_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Router_Interface_Template::StormControl


class Native::Template_::Router_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Router_Interface_Template::StormControl::Broadcast


class Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Router_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Router_Interface_Template::StormControl::Action


class Native::Template_::Router_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Router_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Router_Interface_Template::Ip


class Native::Template_::Router_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Router_Interface_Template::Ip::Dhcp


class Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

        YLeaf rate; //type: uint16

}; // Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Switch_Interface_Template : public Entity
{
    public:
        Switch_Interface_Template();
        ~Switch_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Switch_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Switch_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Switch_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Switch_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Switch_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Switch_Interface_Template


class Native::Template_::Switch_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Switch_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Switch_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Switch_Interface_Template::ServicePolicy


class Native::Template_::Switch_Interface_Template::ServicePolicy::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Switch_Interface_Template::ServicePolicy::Input


class Native::Template_::Switch_Interface_Template::ServicePolicy::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Switch_Interface_Template::ServicePolicy::Output


class Native::Template_::Switch_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Switch_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Switch_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Switch_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Switch_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Switch_Interface_Template::Switchport


class Native::Template_::Switch_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Switch_Interface_Template::Switchport::Mode


class Native::Template_::Switch_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Switch_Interface_Template::Switchport::Block


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        class Type; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inactivity; //type: empty

}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class Vlan; //type: Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

        YLeaf access; //type: empty

}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Switch_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Switch_Interface_Template::Switchport::Access


class Native::Template_::Switch_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Switch_Interface_Template::Switchport::Voice


class Native::Template_::Switch_Interface_Template::SpanningTree : public Entity
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

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Switch_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Switch_Interface_Template::SpanningTree


class Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Switch_Interface_Template::SpanningTree::Portfast : public Entity
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

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Switch_Interface_Template::SpanningTree::Portfast


class Native::Template_::Switch_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Switch_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Switch_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Switch_Interface_Template::StormControl


class Native::Template_::Switch_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Switch_Interface_Template::StormControl::Broadcast


class Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Switch_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Switch_Interface_Template::StormControl::Action


class Native::Template_::Switch_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Switch_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Switch_Interface_Template::Ip


class Native::Template_::Switch_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Switch_Interface_Template::Ip::Dhcp


class Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

        YLeaf rate; //type: uint16

}; // Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Tp_Interface_Template : public Entity
{
    public:
        Tp_Interface_Template();
        ~Tp_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Tp_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Tp_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Tp_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Tp_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Tp_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Tp_Interface_Template


class Native::Template_::Tp_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Tp_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Tp_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Tp_Interface_Template::ServicePolicy


class Native::Template_::Tp_Interface_Template::ServicePolicy::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Tp_Interface_Template::ServicePolicy::Input


class Native::Template_::Tp_Interface_Template::ServicePolicy::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Tp_Interface_Template::ServicePolicy::Output


class Native::Template_::Tp_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Tp_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Tp_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Tp_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Tp_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Tp_Interface_Template::Switchport


class Native::Template_::Tp_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Tp_Interface_Template::Switchport::Mode


class Native::Template_::Tp_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Tp_Interface_Template::Switchport::Block


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        class Type; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inactivity; //type: empty

}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class Vlan; //type: Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

        YLeaf access; //type: empty

}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Tp_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Tp_Interface_Template::Switchport::Access


class Native::Template_::Tp_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Tp_Interface_Template::Switchport::Voice


class Native::Template_::Tp_Interface_Template::SpanningTree : public Entity
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

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Tp_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Tp_Interface_Template::SpanningTree


class Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Tp_Interface_Template::SpanningTree::Portfast : public Entity
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

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Tp_Interface_Template::SpanningTree::Portfast


class Native::Template_::Tp_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Tp_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Tp_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Tp_Interface_Template::StormControl


class Native::Template_::Tp_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Tp_Interface_Template::StormControl::Broadcast


class Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Tp_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Tp_Interface_Template::StormControl::Action


class Native::Template_::Tp_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Tp_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Tp_Interface_Template::Ip


class Native::Template_::Tp_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Tp_Interface_Template::Ip::Dhcp


class Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

        YLeaf rate; //type: uint16

}; // Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::ServiceTemplate : public Entity
{
    public:
        ServiceTemplate();
        ~ServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf vlan; //type: uint16
        class InactivityTimer; //type: Native::ServiceTemplate::InactivityTimer
        class Linksec; //type: Native::ServiceTemplate::Linksec
        class Voice; //type: Native::ServiceTemplate::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceTemplate::InactivityTimer> inactivity_timer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceTemplate::Linksec> linksec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceTemplate::Voice> voice;
        
}; // Native::ServiceTemplate


class Native::ServiceTemplate::InactivityTimer : public Entity
{
    public:
        InactivityTimer();
        ~InactivityTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf probe; //type: empty

}; // Native::ServiceTemplate::InactivityTimer


class Native::ServiceTemplate::Linksec : public Entity
{
    public:
        Linksec();
        ~Linksec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: PolicyEnum
        class PolicyEnum;

}; // Native::ServiceTemplate::Linksec


class Native::ServiceTemplate::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: empty

}; // Native::ServiceTemplate::Voice


class Native::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessList; //type: Native::Arp::AccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList> > access_list;
        
}; // Native::Arp


class Native::Arp::AccessList : public Entity
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

        YLeaf name; //type: string
        class Permit; //type: Native::Arp::AccessList::Permit
        class Deny; //type: Native::Arp::AccessList::Deny
        class Default_; //type: Native::Arp::AccessList::Default_
        class No; //type: Native::Arp::AccessList::No

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No> no;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit> permit;
        
}; // Native::Arp::AccessList


class Native::Arp::AccessList::Permit : public Entity
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

        class Ip; //type: Native::Arp::AccessList::Permit::Ip
        class Request; //type: Native::Arp::AccessList::Permit::Request
        class Response; //type: Native::Arp::AccessList::Permit::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request> request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response> response;
        
}; // Native::Arp::AccessList::Permit


class Native::Arp::AccessList::Permit::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress : public Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Any


class Native::Arp::AccessList::Permit::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_ : public Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Permit::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Request::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Request


class Native::Arp::AccessList::Permit::Request::Ip : public Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress : public Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_ : public Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host : public Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac : public Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_mask; //type: string
        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any : public Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_

class Native::ServiceTemplate::Linksec::PolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf must_not_secure;
        static const Enum::YLeaf must_secure;
        static const Enum::YLeaf should_secure;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_157_ */

