#ifndef _CISCO_IOS_XE_NATIVE_7_
#define _CISCO_IOS_XE_NATIVE_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_5.hpp"
#include "Cisco_IOS_XE_native_6.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE : public ydk::Entity
{
    public:
        TPINTERFACETEMPLATE();
        ~TPINTERFACETEMPLATE();

        bool has_data() const override;
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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport> switchport;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice


class Native::Cisp : public ydk::Entity
{
    public:
        Cisp();
        ~Cisp();

        bool has_data() const override;
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

}; // Native::Cisp


class Native::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CalendarValid; //type: Native::Clock_::CalendarValid
        class SummerTime; //type: Native::Clock_::SummerTime
        class Timezone; //type: Native::Clock_::Timezone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::CalendarValid> calendar_valid; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::SummerTime> summer_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock_::Timezone> timezone;
        
}; // Native::Clock_


class Native::Clock_::CalendarValid : public ydk::Entity
{
    public:
        CalendarValid();
        ~CalendarValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Clock_::CalendarValid


class Native::Clock_::SummerTime : public ydk::Entity
{
    public:
        SummerTime();
        ~SummerTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        ydk::YLeaf recurring_start; //type: one of uint8, enumeration
        ydk::YLeaf recurring_start_day; //type: WeekdayType
        ydk::YLeaf recurring_start_month; //type: MonthType
        ydk::YLeaf recurring_start_time; //type: string
        ydk::YLeaf recurring_end; //type: one of uint8, enumeration
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf zone; //type: string
        ydk::YLeaf offset; //type: Offset
        ydk::YLeaf hours; //type: int8
        ydk::YLeaf minutes; //type: int8
        class Offset;

}; // Native::Clock_::Timezone


class Native::Coap : public ydk::Entity
{
    public:
        Coap();
        ~Coap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Http; //type: Native::Coap::Http

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Coap::Http> http;
        
}; // Native::Coap


class Native::Coap::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
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

}; // Native::Coap::Http


class Native::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServicePolicy; //type: Native::ControlPlane::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlane::ServicePolicy> service_policy;
        
}; // Native::ControlPlane


class Native::ControlPlane::ServicePolicy : public ydk::Entity
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControlPlane; //type: Native::ControlPlaneHost::ControlPlane

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane> control_plane;
        
}; // Native::ControlPlaneHost


class Native::ControlPlaneHost::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Host; //type: Native::ControlPlaneHost::ControlPlane::Host

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host> host; // presence node
        
}; // Native::ControlPlaneHost::ControlPlane


class Native::ControlPlaneHost::ControlPlane::Host : public ydk::Entity
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

        class ManagementInterface; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface> > management_interface;
        
}; // Native::ControlPlaneHost::ControlPlane::Host


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface : public ydk::Entity
{
    public:
        ManagementInterface();
        ~ManagementInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class Allow; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow> allow;
        
}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Native::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerTxExList; //type: Native::Controller::ControllerTxExList
        class Cellular; //type: Native::Controller::Cellular
        class SONET; //type: Native::Controller::SONET
        class SONETACR; //type: Native::Controller::SONETACR
        class Wanphy; //type: Native::Controller::Wanphy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular> > cellular;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList> > controller_tx_ex_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET> > sonet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR> > sonet_acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Wanphy> > wanphy;
        
}; // Native::Controller


class Native::Controller::Cellular : public ydk::Entity
{
    public:
        Cellular();
        ~Cellular();

        bool has_data() const override;
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
        class Lte; //type: Native::Controller::Cellular::Lte

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte> lte;
        
}; // Native::Controller::Cellular


class Native::Controller::Cellular::Lte : public ydk::Entity
{
    public:
        Lte();
        ~Lte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Modem; //type: Native::Controller::Cellular::Lte::Modem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem> modem;
        
}; // Native::Controller::Cellular::Lte


class Native::Controller::Cellular::Lte::Modem : public ydk::Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkRecovery; //type: Native::Controller::Cellular::Lte::Modem::LinkRecovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::LinkRecovery> link_recovery;
        
}; // Native::Controller::Cellular::Lte::Modem


class Native::Controller::Cellular::Lte::Modem::LinkRecovery : public ydk::Entity
{
    public:
        LinkRecovery();
        ~LinkRecovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_timer; //type: uint32
        ydk::YLeaf wait_timer; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32
        class Rssi; //type: Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi> rssi;
        
}; // Native::Controller::Cellular::Lte::Modem::LinkRecovery


class Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi : public ydk::Entity
{
    public:
        Rssi();
        ~Rssi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf onset_threshold; //type: int32

}; // Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi


class Native::Controller::ControllerTxExList : public ydk::Entity
{
    public:
        ControllerTxExList();
        ~ControllerTxExList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: Name
        ydk::YLeaf number; //type: string
        ydk::YLeaf atm; //type: empty
        ydk::YLeaf framing; //type: string
        ydk::YLeaf linecode; //type: Linecode
        class Clock_; //type: Native::Controller::ControllerTxExList::Clock_
        class Cablelength; //type: Native::Controller::ControllerTxExList::Cablelength
        class ChannelGroup; //type: Native::Controller::ControllerTxExList::ChannelGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Cablelength> cablelength;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::ChannelGroup> > channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock_> clock_;
                class Name;
        class Linecode;

}; // Native::Controller::ControllerTxExList


class Native::Controller::ControllerTxExList::Cablelength : public ydk::Entity
{
    public:
        Cablelength();
        ~Cablelength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: string
        ydk::YLeaf short_; //type: string

}; // Native::Controller::ControllerTxExList::Cablelength


class Native::Controller::ControllerTxExList::ChannelGroup : public ydk::Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeafList timeslots; //type: list of  one of string, uint16

}; // Native::Controller::ControllerTxExList::ChannelGroup


class Native::Controller::ControllerTxExList::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Controller::ControllerTxExList::Clock_::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock_::Source> source;
        
}; // Native::Controller::ControllerTxExList::Clock_


class Native::Controller::ControllerTxExList::Clock_::Source : public ydk::Entity
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

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf loop_timed; //type: empty
        class Line; //type: Native::Controller::ControllerTxExList::Clock_::Source::Line

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock_::Source::Line> line; // presence node
        
}; // Native::Controller::ControllerTxExList::Clock_::Source


class Native::Controller::ControllerTxExList::Clock_::Source::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_mode; //type: LineMode
        class LineMode;

}; // Native::Controller::ControllerTxExList::Clock_::Source::Line


class Native::Controller::SONET : public ydk::Entity
{
    public:
        SONET();
        ~SONET();

        bool has_data() const override;
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
        ydk::YLeaf framing; //type: Framing
        ydk::YLeaf shutdown; //type: empty
        class Clock_; //type: Native::Controller::SONET::Clock_
        class Aug; //type: Native::Controller::SONET::Aug
        class Au3; //type: Native::Controller::SONET::Au3
        class Au4Atm; //type: Native::Controller::SONET::Au4Atm
        class Au4; //type: Native::Controller::SONET::Au4
        class Aps; //type: Native::Controller::SONET::Aps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps> aps;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3> > au_3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4> > au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4Atm> au_4_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aug> aug;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Clock_> clock_;
                class Framing;

}; // Native::Controller::SONET


class Native::Controller::SONET::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf working; //type: int8
        ydk::YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::SONET::Aps::Group
        class Protect; //type: Native::Controller::SONET::Aps::Protect
        class Interchassis; //type: Native::Controller::SONET::Aps::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Interchassis> interchassis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Protect> protect;
        
}; // Native::Controller::SONET::Aps


class Native::Controller::SONET::Aps::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint8
        ydk::YLeaf acr; //type: int8

}; // Native::Controller::SONET::Aps::Group


class Native::Controller::SONET::Aps::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

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

}; // Native::Controller::SONET::Aps::Interchassis


class Native::Controller::SONET::Aps::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf ip_addr; //type: string

}; // Native::Controller::SONET::Aps::Protect


class Native::Controller::SONET::Au3 : public ydk::Entity
{
    public:
        Au3();
        ~Au3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        class Overhead; //type: Native::Controller::SONET::Au3::Overhead
        class Mode; //type: Native::Controller::SONET::Au3::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3::Overhead> overhead;
        
}; // Native::Controller::SONET::Au3


class Native::Controller::SONET::Au3::Mode : public ydk::Entity
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

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONET::Au3::Mode


class Native::Controller::SONET::Au3::Overhead : public ydk::Entity
{
    public:
        Overhead();
        ~Overhead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte; //type: Byte
        ydk::YLeaf length; //type: uint8
        class Byte;

}; // Native::Controller::SONET::Au3::Overhead


class Native::Controller::SONET::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf tug_3; //type: int8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty
        ydk::YLeaf framing; //type: Framing
        class CemGroupTimeslots; //type: Native::Controller::SONET::Au4::CemGroupTimeslots
        class ChannelGroupTimeslots; //type: Native::Controller::SONET::Au4::ChannelGroupTimeslots
        class CemGroupUnframed; //type: Native::Controller::SONET::Au4::CemGroupUnframed
        class FramingUnframed; //type: Native::Controller::SONET::Au4::FramingUnframed
        class CemGroupAtm; //type: Native::Controller::SONET::Au4::CemGroupAtm
        class ImaGroup; //type: Native::Controller::SONET::Au4::ImaGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ImaGroup> ima_group;
                class Mode;
        class Framing;

}; // Native::Controller::SONET::Au4


class Native::Controller::SONET::Au4::CemGroupAtm : public ydk::Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::CemGroupAtm::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupAtm::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::CemGroupAtm


class Native::Controller::SONET::Au4::CemGroupAtm::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONET::Au4::CemGroupAtm::Tug2


class Native::Controller::SONET::Au4::CemGroupTimeslots : public ydk::Entity
{
    public:
        CemGroupTimeslots();
        ~CemGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::CemGroupTimeslots


class Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2


class Native::Controller::SONET::Au4::CemGroupUnframed : public ydk::Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::CemGroupUnframed::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::CemGroupUnframed


class Native::Controller::SONET::Au4::CemGroupUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty

}; // Native::Controller::SONET::Au4::CemGroupUnframed::Tug2


class Native::Controller::SONET::Au4::ChannelGroupTimeslots : public ydk::Entity
{
    public:
        ChannelGroupTimeslots();
        ~ChannelGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::ChannelGroupTimeslots


class Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf channel_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2


class Native::Controller::SONET::Au4::FramingUnframed : public ydk::Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::FramingUnframed::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::FramingUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::FramingUnframed


class Native::Controller::SONET::Au4::FramingUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf framing; //type: Framing
        class Framing;

}; // Native::Controller::SONET::Au4::FramingUnframed::Tug2


class Native::Controller::SONET::Au4::ImaGroup : public ydk::Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::ImaGroup::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ImaGroup::Tug2> > tug_2;
        
}; // Native::Controller::SONET::Au4::ImaGroup


class Native::Controller::SONET::Au4::ImaGroup::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf ima_group; //type: int32

}; // Native::Controller::SONET::Au4::ImaGroup::Tug2


class Native::Controller::SONET::Au4Atm : public ydk::Entity
{
    public:
        Au4Atm();
        ~Au4Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Au4; //type: Native::Controller::SONET::Au4Atm::Au4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4Atm::Au4> au_4;
        
}; // Native::Controller::SONET::Au4Atm


class Native::Controller::SONET::Au4Atm::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONET::Au4Atm::Au4


class Native::Controller::SONET::Aug : public ydk::Entity
{
    public:
        Aug();
        ~Aug();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONET::Aug


class Native::Controller::SONET::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: Source
        class Source;

}; // Native::Controller::SONET::Clock_


class Native::Controller::SONETACR : public ydk::Entity
{
    public:
        SONETACR();
        ~SONETACR();

        bool has_data() const override;
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
        ydk::YLeaf framing; //type: Framing
        ydk::YLeaf shutdown; //type: empty
        class Clock_; //type: Native::Controller::SONETACR::Clock_
        class Aug; //type: Native::Controller::SONETACR::Aug
        class Au3; //type: Native::Controller::SONETACR::Au3
        class Au4Atm; //type: Native::Controller::SONETACR::Au4Atm
        class Au4; //type: Native::Controller::SONETACR::Au4
        class Aps; //type: Native::Controller::SONETACR::Aps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps> aps;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3> > au_3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4> > au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4Atm> au_4_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aug> aug;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Clock_> clock_;
                class Framing;

}; // Native::Controller::SONETACR


class Native::Controller::SONETACR::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf working; //type: int8
        ydk::YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::SONETACR::Aps::Group
        class Protect; //type: Native::Controller::SONETACR::Aps::Protect
        class Interchassis; //type: Native::Controller::SONETACR::Aps::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Interchassis> interchassis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Protect> protect;
        
}; // Native::Controller::SONETACR::Aps


class Native::Controller::SONETACR::Aps::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint8
        ydk::YLeaf acr; //type: int8

}; // Native::Controller::SONETACR::Aps::Group


class Native::Controller::SONETACR::Aps::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

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

}; // Native::Controller::SONETACR::Aps::Interchassis


class Native::Controller::SONETACR::Aps::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf ip_addr; //type: string

}; // Native::Controller::SONETACR::Aps::Protect


class Native::Controller::SONETACR::Au3 : public ydk::Entity
{
    public:
        Au3();
        ~Au3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        class Overhead; //type: Native::Controller::SONETACR::Au3::Overhead
        class Mode; //type: Native::Controller::SONETACR::Au3::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Overhead> overhead;
        
}; // Native::Controller::SONETACR::Au3


class Native::Controller::SONETACR::Au3::Mode : public ydk::Entity
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

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONETACR::Au3::Mode


class Native::Controller::SONETACR::Au3::Overhead : public ydk::Entity
{
    public:
        Overhead();
        ~Overhead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte; //type: Byte
        ydk::YLeaf length; //type: uint8
        class Byte;

}; // Native::Controller::SONETACR::Au3::Overhead


class Native::Controller::SONETACR::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf tug_3; //type: int8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty
        ydk::YLeaf framing; //type: Framing
        class CemGroupTimeslots; //type: Native::Controller::SONETACR::Au4::CemGroupTimeslots
        class ChannelGroupTimeslots; //type: Native::Controller::SONETACR::Au4::ChannelGroupTimeslots
        class CemGroupUnframed; //type: Native::Controller::SONETACR::Au4::CemGroupUnframed
        class FramingUnframed; //type: Native::Controller::SONETACR::Au4::FramingUnframed
        class CemGroupAtm; //type: Native::Controller::SONETACR::Au4::CemGroupAtm
        class ImaGroup; //type: Native::Controller::SONETACR::Au4::ImaGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ImaGroup> ima_group;
                class Mode;
        class Framing;

}; // Native::Controller::SONETACR::Au4


class Native::Controller::SONETACR::Au4::CemGroupAtm : public ydk::Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupAtm


class Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2


class Native::Controller::SONETACR::Au4::CemGroupTimeslots : public ydk::Entity
{
    public:
        CemGroupTimeslots();
        ~CemGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupTimeslots


class Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2


class Native::Controller::SONETACR::Au4::CemGroupUnframed : public ydk::Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupUnframed


class Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty

}; // Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2


class Native::Controller::SONETACR::Au4::ChannelGroupTimeslots : public ydk::Entity
{
    public:
        ChannelGroupTimeslots();
        ~ChannelGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::ChannelGroupTimeslots


class Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf channel_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2


class Native::Controller::SONETACR::Au4::FramingUnframed : public ydk::Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::FramingUnframed::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::FramingUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::FramingUnframed


class Native::Controller::SONETACR::Au4::FramingUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf framing; //type: Framing
        class Framing;

}; // Native::Controller::SONETACR::Au4::FramingUnframed::Tug2


class Native::Controller::SONETACR::Au4::ImaGroup : public ydk::Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::ImaGroup::Tug2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ImaGroup::Tug2> > tug_2;
        
}; // Native::Controller::SONETACR::Au4::ImaGroup


class Native::Controller::SONETACR::Au4::ImaGroup::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf ima_group; //type: int32

}; // Native::Controller::SONETACR::Au4::ImaGroup::Tug2


class Native::Controller::SONETACR::Au4Atm : public ydk::Entity
{
    public:
        Au4Atm();
        ~Au4Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Au4; //type: Native::Controller::SONETACR::Au4Atm::Au4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4Atm::Au4> au_4;
        
}; // Native::Controller::SONETACR::Au4Atm


class Native::Controller::SONETACR::Au4Atm::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONETACR::Au4Atm::Au4


class Native::Controller::SONETACR::Aug : public ydk::Entity
{
    public:
        Aug();
        ~Aug();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONETACR::Aug


class Native::Controller::SONETACR::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: Source
        class Source;

}; // Native::Controller::SONETACR::Clock_


class Native::Controller::Wanphy : public ydk::Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
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

}; // Native::Controller::Wanphy


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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap> crypto_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::DynamicMap> > dynamic_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Engine> engine;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi> gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm> gkm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Identity> > identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2> ikev2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key> key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring> > keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient> map_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi> map_ipv6_gdoi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib> mib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki> pki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel> tls_tunnel;
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


class Native::Crypto::CryptoMap : public ydk::Entity
{
    public:
        CryptoMap();
        ~CryptoMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Map; //type: Native::Crypto::CryptoMap::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map> > map;
        
}; // Native::Crypto::CryptoMap


class Native::Crypto::CryptoMap::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
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
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sequence_number; //type: uint16
        ydk::YLeaf keying; //type: Keying
        ydk::YLeaf dynamic; //type: string
        ydk::YLeaf profile; //type: string
        ydk::YLeaf description; //type: string
        class Default_; //type: Native::Crypto::CryptoMap::Map::Default_
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set> set;
                class Keying;

}; // Native::Crypto::CryptoMap::Map


class Native::Crypto::CryptoMap::Map::Default_ : public ydk::Entity
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
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Default_::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Default_::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Default_::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set> set;
        
}; // Native::Crypto::CryptoMap::Map::Default_


class Native::Crypto::CryptoMap::Map::Default_::Dialer : public ydk::Entity
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

}; // Native::Crypto::CryptoMap::Map::Default_::Dialer


class Native::Crypto::CryptoMap::Map::Default_::Match : public ydk::Entity
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

}; // Native::Crypto::CryptoMap::Map::Default_::Match


class Native::Crypto::CryptoMap::Map::Default_::Qos : public ydk::Entity
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

}; // Native::Crypto::CryptoMap::Map::Default_::Qos


class Native::Crypto::CryptoMap::Map::Default_::ReverseRoute : public ydk::Entity
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


}; // Native::Crypto::CryptoMap::Map::Default_::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set : public ydk::Entity
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
        ydk::YLeaf isakmp_profile; //type: empty
        ydk::YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::CryptoMap::Map::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::CryptoMap::Map::Default_::Set


class Native::Crypto::CryptoMap::Map::Default_::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::Pfs


class Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute : public ydk::Entity
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


}; // Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay> replay;
                class Level;

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

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
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::CryptoMap::Map::Dialer : public ydk::Entity
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

}; // Native::Crypto::CryptoMap::Map::Dialer


class Native::Crypto::CryptoMap::Map::Match : public ydk::Entity
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

        ydk::YLeaf address; //type: one of string, uint16

}; // Native::Crypto::CryptoMap::Map::Match


class Native::Crypto::CryptoMap::Map::Qos : public ydk::Entity
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

}; // Native::Crypto::CryptoMap::Map::Qos


class Native::Crypto::CryptoMap::Map::ReverseRoute : public ydk::Entity
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

        ydk::YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::CryptoMap::Map::ReverseRoute

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

class Native::Controller::ControllerTxExList::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;
        static const ydk::Enum::YLeaf t3;
        static const ydk::Enum::YLeaf T1;
        static const ydk::Enum::YLeaf E1;
        static const ydk::Enum::YLeaf T3;

};

class Native::Controller::ControllerTxExList::Linecode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ami;
        static const ydk::Enum::YLeaf b8zs;
        static const ydk::Enum::YLeaf hdb3;

};

class Native::Controller::ControllerTxExList::Clock_::Source::Line::LineMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class Native::Controller::SONET::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class Native::Controller::SONET::Au3::Mode::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;

};

class Native::Controller::SONET::Au3::Overhead::Byte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j1;

};

class Native::Controller::SONET::Au4::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;
        static const ydk::Enum::YLeaf c_3;
        static const ydk::Enum::YLeaf c_4;
        static const ydk::Enum::YLeaf e3;

};

class Native::Controller::SONET::Au4::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONET::Aug::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf au_3;
        static const ydk::Enum::YLeaf au_4;

};

class Native::Controller::SONET::Clock_::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class Native::Controller::SONETACR::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class Native::Controller::SONETACR::Au3::Mode::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;

};

class Native::Controller::SONETACR::Au3::Overhead::Byte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j1;

};

class Native::Controller::SONETACR::Au4::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;
        static const ydk::Enum::YLeaf c_3;
        static const ydk::Enum::YLeaf c_4;
        static const ydk::Enum::YLeaf e3;

};

class Native::Controller::SONETACR::Au4::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONETACR::Aug::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf au_3;
        static const ydk::Enum::YLeaf au_4;

};

class Native::Controller::SONETACR::Clock_::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class Native::Crypto::CryptoMap::Map::Keying : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsec_isakmp;
        static const ydk::Enum::YLeaf ipsec_manual;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf ckm;

};

class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_7_ */

