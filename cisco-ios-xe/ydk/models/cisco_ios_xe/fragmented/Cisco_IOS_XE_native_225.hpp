#ifndef _CISCO_IOS_XE_NATIVE_225_
#define _CISCO_IOS_XE_NATIVE_225_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_222.hpp"
#include "Cisco_IOS_XE_native_224.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action


class Native::Template::SWITCHINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::Template::SWITCHINTERFACETEMPLATE::Ip


class Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp


class Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::Template::TPINTERFACETEMPLATE : public ydk::Entity
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
        class ServicePolicy; //type: Native::Template::TPINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::Template::TPINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::Template::TPINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::Template::TPINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::Template::TPINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Ip> ip;
        
}; // Native::Template::TPINTERFACETEMPLATE


class Native::Template::TPINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::Template::TPINTERFACETEMPLATE::ServicePolicy


class Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input


class Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output


class Native::Template::TPINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::Template::TPINTERFACETEMPLATE::Switchport


class Native::Template::TPINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::Mode


class Native::Template::TPINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::Block


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        ydk::YList range;
        
}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

        ydk::YLeaf protect; //type: empty
        ydk::YLeaf restrict; //type: empty
        ydk::YLeaf shutdown; //type: empty

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::Template::TPINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::Access


class Native::Template::TPINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Switchport::Voice


class Native::Template::TPINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast> portfast; // presence node
        
}; // Native::Template::TPINTERFACETEMPLATE::SpanningTree


class Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast


class Native::Template::TPINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast
        class Multicast; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast
        class Action; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::Template::TPINTERFACETEMPLATE::StormControl


class Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast


class Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Level; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level> level;
        
}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast


class Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level : public ydk::Entity
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
        class Pps; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps
        class Bps; //type: Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps> bps;
        
}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level


class Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps


class Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps


class Native::Template::TPINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::StormControl::Action


class Native::Template::TPINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::Template::TPINTERFACETEMPLATE::Ip


class Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp


class Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cpu; //type: Native::Process::Cpu

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu> cpu;
        
}; // Native::Process


class Native::Process::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Threshold; //type: Native::Process::Cpu::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold> threshold;
        
}; // Native::Process::Cpu


class Native::Process::Cpu::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Type; //type: Native::Process::Cpu::Threshold::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type> type;
        
}; // Native::Process::Cpu::Threshold


class Native::Process::Cpu::Threshold::Type : public ydk::Entity
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

        class Interrupt; //type: Native::Process::Cpu::Threshold::Type::Interrupt
        class Process_; //type: Native::Process::Cpu::Threshold::Type::Process_
        class Total; //type: Native::Process::Cpu::Threshold::Type::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt> interrupt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_> process;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total> total;
        
}; // Native::Process::Cpu::Threshold::Type


class Native::Process::Cpu::Threshold::Type::Interrupt : public ydk::Entity
{
    public:
        Interrupt();
        ~Interrupt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Process_


class Native::Process::Cpu::Threshold::Type::Process_::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Total::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Total


class Native::Process::Cpu::Threshold::Type::Total::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        ydk::YList cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Exception : public ydk::Entity
{
    public:
        Exception();
        ~Exception();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Crashinfo; //type: Native::Exception::Crashinfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Exception::Crashinfo> crashinfo; // presence node
        
}; // Native::Exception


class Native::Exception::Crashinfo : public ydk::Entity
{
    public:
        Crashinfo();
        ~Crashinfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf buffersize; //type: uint16

}; // Native::Exception::Crashinfo


class Native::Iox : public ydk::Entity
{
    public:
        Iox();
        ~Iox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Iox


class Native::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf redundancy_mode; //type: RedundancyMode
        ydk::YLeaf max_min; //type: MaxMin
        ydk::YLeaf inputs; //type: uint8
        class Inline; //type: Native::Power::Inline

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline> inline_; // presence node
                class RedundancyMode;
        class MaxMin;

}; // Native::Power


class Native::Power::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Consumption; //type: Native::Power::Inline::Consumption
        class Logging; //type: Native::Power::Inline::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline::Consumption> consumption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline::Logging> logging;
        
}; // Native::Power::Inline


class Native::Power::Inline::Consumption : public ydk::Entity
{
    public:
        Consumption();
        ~Consumption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf default_; //type: uint16

}; // Native::Power::Inline::Consumption


class Native::Power::Inline::Logging : public ydk::Entity
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

        ydk::YLeaf global; //type: empty

}; // Native::Power::Inline::Logging


class Native::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf authen_before_forward; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeafList search_order; //type: list of  SearchOrder
        class SearchOrder;

}; // Native::Vpdn


class Native::Esmc : public ydk::Entity
{
    public:
        Esmc();
        ~Esmc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf process; //type: empty

}; // Native::Esmc


class Native::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attributes; //type: Native::AccessSession::Attributes
        class MacMove; //type: Native::AccessSession::MacMove

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes> attributes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::MacMove> mac_move;
        
}; // Native::AccessSession


class Native::AccessSession::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FilterList; //type: Native::AccessSession::Attributes::FilterList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList> filter_list;
        
}; // Native::AccessSession::Attributes


class Native::AccessSession::Attributes::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class List; //type: Native::AccessSession::Attributes::FilterList::List

        ydk::YList list;
        
}; // Native::AccessSession::Attributes::FilterList


class Native::AccessSession::Attributes::FilterList::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
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
        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf lldp; //type: empty

}; // Native::AccessSession::Attributes::FilterList::List


class Native::AccessSession::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deny; //type: empty

}; // Native::AccessSession::MacMove


class Native::Authentication : public ydk::Entity
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

        class Command; //type: Native::Authentication::Command
        class Critical; //type: Native::Authentication::Critical
        class MacMove; //type: Native::Authentication::MacMove

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command> command;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Critical> critical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::MacMove> mac_move;
        
}; // Native::Authentication


class Native::Authentication::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BouncePort; //type: Native::Authentication::Command::BouncePort
        class DisablePort; //type: Native::Authentication::Command::DisablePort

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command::BouncePort> bounce_port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command::DisablePort> disable_port;
        
}; // Native::Authentication::Command


class Native::Authentication::Command::BouncePort : public ydk::Entity
{
    public:
        BouncePort();
        ~BouncePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Authentication::Command::BouncePort


class Native::Authentication::Command::DisablePort : public ydk::Entity
{
    public:
        DisablePort();
        ~DisablePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Authentication::Command::DisablePort


class Native::Authentication::Critical : public ydk::Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Recovery; //type: Native::Authentication::Critical::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Critical::Recovery> recovery;
        
}; // Native::Authentication::Critical


class Native::Authentication::Critical::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint32

}; // Native::Authentication::Critical::Recovery


class Native::Authentication::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf permit; //type: empty

}; // Native::Authentication::MacMove


class Native::Dialer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class WatchList; //type: Native::Dialer::WatchList

        ydk::YList watch_list;
        
}; // Native::Dialer


class Native::Dialer::WatchList : public ydk::Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint8
        class Delay; //type: Native::Dialer::WatchList::Delay
        class Ip; //type: Native::Dialer::WatchList::Ip

        ydk::YList delay;
        ydk::YList ip;
        
}; // Native::Dialer::WatchList


class Native::Dialer::WatchList::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: Interval
        ydk::YLeaf initial; //type: empty
        ydk::YLeaf delay_time; //type: uint32
        class Interval;

}; // Native::Dialer::WatchList::Delay


class Native::Dialer::WatchList::Ip : public ydk::Entity
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
        ydk::YLeaf mask; //type: string

}; // Native::Dialer::WatchList::Ip


class Native::DialerList : public ydk::Entity
{
    public:
        DialerList();
        ~DialerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_number; //type: uint8
        class Protocol; //type: Native::DialerList::Protocol

        ydk::YList protocol;
        
}; // Native::DialerList


class Native::DialerList::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: ProtocolType
        ydk::YLeaf access; //type: Access
        ydk::YLeaf list_name; //type: string
        class ProtocolType;
        class Access;

}; // Native::DialerList::Protocol


class Native::Vstack : public ydk::Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf director; //type: string

}; // Native::Vstack


class Native::EtAnalytics : public ydk::Entity
{
    public:
        EtAnalytics();
        ~EtAnalytics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inactive_timeout; //type: uint32
        class Ip; //type: Native::EtAnalytics::Ip
        class Whitelist; //type: Native::EtAnalytics::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::EtAnalytics::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::EtAnalytics::Whitelist> whitelist;
        
}; // Native::EtAnalytics


class Native::EtAnalytics::Ip : public ydk::Entity
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

        class FlowExport; //type: Native::EtAnalytics::Ip::FlowExport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::EtAnalytics::Ip::FlowExport> flow_export;
        
}; // Native::EtAnalytics::Ip


class Native::EtAnalytics::Ip::FlowExport : public ydk::Entity
{
    public:
        FlowExport();
        ~FlowExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Destination; //type: Native::EtAnalytics::Ip::FlowExport::Destination
        class DestinationVrf; //type: Native::EtAnalytics::Ip::FlowExport::DestinationVrf

        ydk::YList destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::EtAnalytics::Ip::FlowExport::DestinationVrf> destination_vrf;
        
}; // Native::EtAnalytics::Ip::FlowExport


class Native::EtAnalytics::Ip::FlowExport::Destination : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::EtAnalytics::Ip::FlowExport::Destination


class Native::EtAnalytics::Ip::FlowExport::DestinationVrf : public ydk::Entity
{
    public:
        DestinationVrf();
        ~DestinationVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Destination; //type: Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination

        ydk::YList destination;
        
}; // Native::EtAnalytics::Ip::FlowExport::DestinationVrf


class Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination


class Native::EtAnalytics::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: one of uint16, string

}; // Native::EtAnalytics::Whitelist


class Native::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ArpEntry; //type: Native::Arp::ArpEntry
        class Vrf; //type: Native::Arp::Vrf
        class AccessList; //type: Native::Arp::AccessList

        ydk::YList arp_entry;
        ydk::YList vrf;
        ydk::YList access_list;
        
}; // Native::Arp


class Native::Arp::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf arp_type; //type: ArpType
        class ArpType;

}; // Native::Arp::ArpEntry


class Native::Arp::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class ArpEntry; //type: Native::Arp::Vrf::ArpEntry

        ydk::YList arp_entry;
        
}; // Native::Arp::Vrf


class Native::Arp::Vrf::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf arp_type; //type: ArpType
        class ArpType;

}; // Native::Arp::Vrf::ArpEntry


class Native::Arp::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
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
        class Permit; //type: Native::Arp::AccessList::Permit
        class Deny; //type: Native::Arp::AccessList::Deny
        class Default; //type: Native::Arp::AccessList::Default
        class No; //type: Native::Arp::AccessList::No

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No> no;
        
}; // Native::Arp::AccessList


class Native::Arp::AccessList::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Ip
        class Request; //type: Native::Arp::AccessList::Permit::Request
        class Response; //type: Native::Arp::AccessList::Permit::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response> response;
        
}; // Native::Arp::AccessList::Permit


class Native::Arp::AccessList::Permit::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Any


class Native::Arp::AccessList::Permit::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Permit::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Request::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Request


class Native::Arp::AccessList::Permit::Request::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host : public ydk::Entity
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

        class IpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress

        ydk::YList ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        ydk::YList sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Permit::Response : public ydk::Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Response::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Response


class Native::Arp::AccessList::Permit::Response::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::Host

        ydk::YList sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host

        ydk::YList sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress

class Native::Power::RedundancyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf combined;
        static const ydk::Enum::YLeaf redundant;

};

class Native::Power::MaxMin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};

class Native::Vpdn::SearchOrder : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf multihop_hostname;

};

class Native::Dialer::WatchList::Delay::Interval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf disconnect;
        static const ydk::Enum::YLeaf route_check;

};

class Native::DialerList::Protocol::ProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf bridge;
        static const ydk::Enum::YLeaf clns;
        static const ydk::Enum::YLeaf clns_es;
        static const ydk::Enum::YLeaf clns_is;
        static const ydk::Enum::YLeaf decnet;
        static const ydk::Enum::YLeaf decnet_node;
        static const ydk::Enum::YLeaf decnet_router_L1;
        static const ydk::Enum::YLeaf decnet_router_L2;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipx;
        static const ydk::Enum::YLeaf llc2;
        static const ydk::Enum::YLeaf netbios;
        static const ydk::Enum::YLeaf novell;
        static const ydk::Enum::YLeaf vines;
        static const ydk::Enum::YLeaf xns;

};

class Native::DialerList::Protocol::Access : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf list;
        static const ydk::Enum::YLeaf permit;

};

class Native::Arp::ArpEntry::ArpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ARPA;
        static const ydk::Enum::YLeaf SAP;
        static const ydk::Enum::YLeaf SMDS;
        static const ydk::Enum::YLeaf SNAP;
        static const ydk::Enum::YLeaf SRP_A;
        static const ydk::Enum::YLeaf SRP_B;

};

class Native::Arp::Vrf::ArpEntry::ArpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ARPA;
        static const ydk::Enum::YLeaf SAP;
        static const ydk::Enum::YLeaf SMDS;
        static const ydk::Enum::YLeaf SNAP;
        static const ydk::Enum::YLeaf SRP_A;
        static const ydk::Enum::YLeaf SRP_B;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_225_ */

