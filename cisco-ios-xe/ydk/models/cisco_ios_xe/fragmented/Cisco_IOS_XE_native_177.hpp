#ifndef _CISCO_IOS_XE_NATIVE_177_
#define _CISCO_IOS_XE_NATIVE_177_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_176.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping


class Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template : public ydk::Entity
{
    public:
        Ap_Interface_Template();
        ~Ap_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy
        class Switchport; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport
        class SpanningTree; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree
        class StormControl; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl
        class Ip; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport> switchport;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode
        class Block; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access
        class Voice; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice> voice;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping


class Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template : public ydk::Entity
{
    public:
        Dmp_Interface_Template();
        ~Dmp_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy
        class Switchport; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport
        class SpanningTree; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree
        class StormControl; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl
        class Ip; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport> switchport;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode
        class Block; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access
        class Voice; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice> voice;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping


class Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template : public ydk::Entity
{
    public:
        Ip_Phone_Interface_Template();
        ~Ip_Phone_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy
        class Switchport; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport
        class SpanningTree; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree
        class StormControl; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl
        class Ip; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport> switchport;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode
        class Block; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access
        class Voice; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice> voice;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping


class Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template : public ydk::Entity
{
    public:
        Msp_Camera_Interface_Template();
        ~Msp_Camera_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy
        class Switchport; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport
        class SpanningTree; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree
        class StormControl; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl
        class Ip; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport> switchport;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode
        class Block; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access
        class Voice; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice> voice;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping


class Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template : public ydk::Entity
{
    public:
        Msp_Vc_Interface_Template();
        ~Msp_Vc_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy
        class Switchport; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport
        class SpanningTree; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree
        class StormControl; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl
        class Ip; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport> switchport;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode
        class Block; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access
        class Voice; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice> voice;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aging; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice


class Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree : public ydk::Entity
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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree


}
}

#endif /* _CISCO_IOS_XE_NATIVE_177_ */

