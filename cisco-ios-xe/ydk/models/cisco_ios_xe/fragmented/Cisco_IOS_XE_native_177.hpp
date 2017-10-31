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


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

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

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

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

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE : public ydk::Entity
{
    public:
        APINTERFACETEMPLATE();
        ~APINTERFACETEMPLATE();

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

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Input; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

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

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

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

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

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

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

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

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE : public ydk::Entity
{
    public:
        DMPINTERFACETEMPLATE();
        ~DMPINTERFACETEMPLATE();

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

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Input; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

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

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

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

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

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

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

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

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE : public ydk::Entity
{
    public:
        IPPHONEINTERFACETEMPLATE();
        ~IPPHONEINTERFACETEMPLATE();

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

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Input; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

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

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

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

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

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

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

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

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE : public ydk::Entity
{
    public:
        MSPCAMERAINTERFACETEMPLATE();
        ~MSPCAMERAINTERFACETEMPLATE();

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

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Input; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

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

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

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

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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

        ydk::YLeaf enable; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf network; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

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

        ydk::YLeaf threshold; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

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

        ydk::YLeaf threshold; //type: decimal64
        ydk::YLeaf b_unit; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE : public ydk::Entity
{
    public:
        MSPVCINTERFACETEMPLATE();
        ~MSPVCINTERFACETEMPLATE();

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

        ydk::YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Input; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf policy_map_name; //type: string

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

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

        ydk::YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

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

        ydk::YLeaf unicast; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        class Type; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf inactivity; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

        ydk::YLeaf access; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
{
    public:
        Violation();
        ~Violation();

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

        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

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

        ydk::YLeaf vlan; //type: uint16

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree


}
}

#endif /* _CISCO_IOS_XE_NATIVE_177_ */

