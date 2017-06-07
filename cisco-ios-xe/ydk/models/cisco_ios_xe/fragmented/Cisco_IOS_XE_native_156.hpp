#ifndef _CISCO_IOS_XE_NATIVE_156_
#define _CISCO_IOS_XE_NATIVE_156_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_155.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Ap_Interface_Template::Switchport::Access : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Switchport::Access


class Native::Template_::Ap_Interface_Template::Switchport::Voice : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Switchport::Voice


class Native::Template_::Ap_Interface_Template::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Template_::Ap_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Ap_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Ap_Interface_Template::SpanningTree


class Native::Template_::Ap_Interface_Template::SpanningTree::Bpduguard : public Entity
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

}; // Native::Template_::Ap_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Ap_Interface_Template::SpanningTree::Portfast : public Entity
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

}; // Native::Template_::Ap_Interface_Template::SpanningTree::Portfast


class Native::Template_::Ap_Interface_Template::StormControl : public Entity
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

        class Broadcast; //type: Native::Template_::Ap_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Ap_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Ap_Interface_Template::StormControl


class Native::Template_::Ap_Interface_Template::StormControl::Broadcast : public Entity
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

        class Level; //type: Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Ap_Interface_Template::StormControl::Broadcast


class Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level : public Entity
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
        class Pps; //type: Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Template_::Ap_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Ap_Interface_Template::StormControl::Action : public Entity
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

}; // Native::Template_::Ap_Interface_Template::StormControl::Action


class Native::Template_::Ap_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Ap_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Ap_Interface_Template::Ip


class Native::Template_::Ap_Interface_Template::Ip::Dhcp : public Entity
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

        class Snooping; //type: Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Ap_Interface_Template::Ip::Dhcp


class Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping : public Entity
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

        class Limit; //type: Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Template_::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Dmp_Interface_Template : public Entity
{
    public:
        Dmp_Interface_Template();
        ~Dmp_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Dmp_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Dmp_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Dmp_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Dmp_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Dmp_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Dmp_Interface_Template


class Native::Template_::Dmp_Interface_Template::ServicePolicy : public Entity
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

        class Input; //type: Native::Template_::Dmp_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Dmp_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Dmp_Interface_Template::ServicePolicy


class Native::Template_::Dmp_Interface_Template::ServicePolicy::Input : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::ServicePolicy::Input


class Native::Template_::Dmp_Interface_Template::ServicePolicy::Output : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::ServicePolicy::Output


class Native::Template_::Dmp_Interface_Template::Switchport : public Entity
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
        class Mode; //type: Native::Template_::Dmp_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Dmp_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Dmp_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Dmp_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Dmp_Interface_Template::Switchport


class Native::Template_::Dmp_Interface_Template::Switchport::Mode : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::Mode


class Native::Template_::Dmp_Interface_Template::Switchport::Block : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::Block


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity : public Entity
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

        class Aging; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Violation : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Dmp_Interface_Template::Switchport::Access : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::Access


class Native::Template_::Dmp_Interface_Template::Switchport::Voice : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Switchport::Voice


class Native::Template_::Dmp_Interface_Template::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Template_::Dmp_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Dmp_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Dmp_Interface_Template::SpanningTree


class Native::Template_::Dmp_Interface_Template::SpanningTree::Bpduguard : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Dmp_Interface_Template::SpanningTree::Portfast : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::SpanningTree::Portfast


class Native::Template_::Dmp_Interface_Template::StormControl : public Entity
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

        class Broadcast; //type: Native::Template_::Dmp_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Dmp_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Dmp_Interface_Template::StormControl


class Native::Template_::Dmp_Interface_Template::StormControl::Broadcast : public Entity
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

        class Level; //type: Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Dmp_Interface_Template::StormControl::Broadcast


class Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level : public Entity
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
        class Pps; //type: Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Dmp_Interface_Template::StormControl::Action : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::StormControl::Action


class Native::Template_::Dmp_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Dmp_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Dmp_Interface_Template::Ip


class Native::Template_::Dmp_Interface_Template::Ip::Dhcp : public Entity
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

        class Snooping; //type: Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Dmp_Interface_Template::Ip::Dhcp


class Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping : public Entity
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

        class Limit; //type: Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Template_::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Ip_Phone_Interface_Template : public Entity
{
    public:
        Ip_Phone_Interface_Template();
        ~Ip_Phone_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Ip_Phone_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Ip_Phone_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Ip_Phone_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Ip_Phone_Interface_Template


class Native::Template_::Ip_Phone_Interface_Template::ServicePolicy : public Entity
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

        class Input; //type: Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Ip_Phone_Interface_Template::ServicePolicy


class Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Input : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Input


class Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Output : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::ServicePolicy::Output


class Native::Template_::Ip_Phone_Interface_Template::Switchport : public Entity
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
        class Mode; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Switchport


class Native::Template_::Ip_Phone_Interface_Template::Switchport::Mode : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::Mode


class Native::Template_::Ip_Phone_Interface_Template::Switchport::Block : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::Block


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity : public Entity
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

        class Aging; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Ip_Phone_Interface_Template::Switchport::Access : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::Access


class Native::Template_::Ip_Phone_Interface_Template::Switchport::Voice : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Switchport::Voice


class Native::Template_::Ip_Phone_Interface_Template::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Ip_Phone_Interface_Template::SpanningTree


class Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Bpduguard : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Portfast : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::SpanningTree::Portfast


class Native::Template_::Ip_Phone_Interface_Template::StormControl : public Entity
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

        class Broadcast; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Ip_Phone_Interface_Template::StormControl


class Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast : public Entity
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

        class Level; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast


class Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level : public Entity
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
        class Pps; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Ip_Phone_Interface_Template::StormControl::Action : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::StormControl::Action


class Native::Template_::Ip_Phone_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Ip


class Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp : public Entity
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

        class Snooping; //type: Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp


class Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping : public Entity
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

        class Limit; //type: Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Template_::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Msp_Camera_Interface_Template : public Entity
{
    public:
        Msp_Camera_Interface_Template();
        ~Msp_Camera_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Msp_Camera_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Msp_Camera_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Msp_Camera_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Msp_Camera_Interface_Template


class Native::Template_::Msp_Camera_Interface_Template::ServicePolicy : public Entity
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

        class Input; //type: Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Msp_Camera_Interface_Template::ServicePolicy


class Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Input : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Input


class Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Output : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::ServicePolicy::Output


class Native::Template_::Msp_Camera_Interface_Template::Switchport : public Entity
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
        class Mode; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Switchport


class Native::Template_::Msp_Camera_Interface_Template::Switchport::Mode : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::Mode


class Native::Template_::Msp_Camera_Interface_Template::Switchport::Block : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::Block


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity : public Entity
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

        class Aging; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Msp_Camera_Interface_Template::Switchport::Access : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::Access


class Native::Template_::Msp_Camera_Interface_Template::Switchport::Voice : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Switchport::Voice


class Native::Template_::Msp_Camera_Interface_Template::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Msp_Camera_Interface_Template::SpanningTree


class Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Bpduguard : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Portfast : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::SpanningTree::Portfast


class Native::Template_::Msp_Camera_Interface_Template::StormControl : public Entity
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

        class Broadcast; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Msp_Camera_Interface_Template::StormControl


class Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast : public Entity
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

        class Level; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast


class Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level : public Entity
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
        class Pps; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Msp_Camera_Interface_Template::StormControl::Action : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::StormControl::Action


class Native::Template_::Msp_Camera_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Ip


class Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp : public Entity
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

        class Snooping; //type: Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp


class Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping : public Entity
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

        class Limit; //type: Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Template_::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Msp_Vc_Interface_Template : public Entity
{
    public:
        Msp_Vc_Interface_Template();
        ~Msp_Vc_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Msp_Vc_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Msp_Vc_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Msp_Vc_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Msp_Vc_Interface_Template


class Native::Template_::Msp_Vc_Interface_Template::ServicePolicy : public Entity
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

        class Input; //type: Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Msp_Vc_Interface_Template::ServicePolicy


class Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Input : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Input


class Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Output : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::ServicePolicy::Output


class Native::Template_::Msp_Vc_Interface_Template::Switchport : public Entity
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
        class Mode; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Switchport


class Native::Template_::Msp_Vc_Interface_Template::Switchport::Mode : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::Mode


class Native::Template_::Msp_Vc_Interface_Template::Switchport::Block : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::Block


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity : public Entity
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

        class Aging; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Msp_Vc_Interface_Template::Switchport::Access : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::Access


class Native::Template_::Msp_Vc_Interface_Template::Switchport::Voice : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Switchport::Voice


class Native::Template_::Msp_Vc_Interface_Template::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Msp_Vc_Interface_Template::SpanningTree


class Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Bpduguard : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Portfast : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::SpanningTree::Portfast


class Native::Template_::Msp_Vc_Interface_Template::StormControl : public Entity
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

        class Broadcast; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Msp_Vc_Interface_Template::StormControl


class Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast : public Entity
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

        class Level; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast


class Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level : public Entity
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
        class Pps; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Msp_Vc_Interface_Template::StormControl::Action : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::StormControl::Action


class Native::Template_::Msp_Vc_Interface_Template::Ip : public Entity
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

        class Dhcp; //type: Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Ip


class Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp : public Entity
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

        class Snooping; //type: Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp


class Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping : public Entity
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

        class Limit; //type: Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Template_::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Printer_Interface_Template : public Entity
{
    public:
        Printer_Interface_Template();
        ~Printer_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Printer_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Printer_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Printer_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Printer_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Printer_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Printer_Interface_Template


class Native::Template_::Printer_Interface_Template::ServicePolicy : public Entity
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

        class Input; //type: Native::Template_::Printer_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Printer_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Printer_Interface_Template::ServicePolicy


class Native::Template_::Printer_Interface_Template::ServicePolicy::Input : public Entity
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

}; // Native::Template_::Printer_Interface_Template::ServicePolicy::Input


class Native::Template_::Printer_Interface_Template::ServicePolicy::Output : public Entity
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

}; // Native::Template_::Printer_Interface_Template::ServicePolicy::Output


class Native::Template_::Printer_Interface_Template::Switchport : public Entity
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
        class Mode; //type: Native::Template_::Printer_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Printer_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Printer_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Printer_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Printer_Interface_Template::Switchport


class Native::Template_::Printer_Interface_Template::Switchport::Mode : public Entity
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

}; // Native::Template_::Printer_Interface_Template::Switchport::Mode


class Native::Template_::Printer_Interface_Template::Switchport::Block : public Entity
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

}; // Native::Template_::Printer_Interface_Template::Switchport::Block


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity : public Entity
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

        class Aging; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging : public Entity
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
        class Type; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
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

}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
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

        class Range; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
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
        class Vlan; //type: Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
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

}; // Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


}
}

#endif /* _CISCO_IOS_XE_NATIVE_156_ */

