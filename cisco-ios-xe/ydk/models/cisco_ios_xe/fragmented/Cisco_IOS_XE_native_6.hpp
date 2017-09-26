#ifndef _CISCO_IOS_XE_NATIVE_6_
#define _CISCO_IOS_XE_NATIVE_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_5.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level


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


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport


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


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


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


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport


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


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE : public ydk::Entity
{
    public:
        PRINTERINTERFACETEMPLATE();
        ~PRINTERINTERFACETEMPLATE();

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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE : public ydk::Entity
{
    public:
        ROUTERINTERFACETEMPLATE();
        ~ROUTERINTERFACETEMPLATE();

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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE : public ydk::Entity
{
    public:
        SWITCHINTERFACETEMPLATE();
        ~SWITCHINTERFACETEMPLATE();

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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::SpanningTree::Portfast


}
}

#endif /* _CISCO_IOS_XE_NATIVE_6_ */

