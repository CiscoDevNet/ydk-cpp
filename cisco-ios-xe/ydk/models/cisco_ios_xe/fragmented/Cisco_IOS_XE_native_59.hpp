#ifndef _CISCO_IOS_XE_NATIVE_59_
#define _CISCO_IOS_XE_NATIVE_59_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_55.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::TenGigabitEthernet::EtAnalytics : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::TenGigabitEthernet::EtAnalytics


class Native::Interface::TenGigabitEthernet::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf history; //type: empty
        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string
        class Type; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type> type;
        
}; // Native::Interface::TenGigabitEthernet::ServicePolicy


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type : public ydk::Entity
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

        class Control; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber; //type: string

}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::TenGigabitEthernet::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qos; //type: Native::Interface::TenGigabitEthernet::Auto::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto::Qos> qos;
        
}; // Native::Interface::TenGigabitEthernet::Auto


class Native::Interface::TenGigabitEthernet::Auto::Qos : public ydk::Entity
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

        class Classify; //type: Native::Interface::TenGigabitEthernet::Auto::Qos::Classify
        class Trust; //type: Native::Interface::TenGigabitEthernet::Auto::Qos::Trust
        class Video; //type: Native::Interface::TenGigabitEthernet::Auto::Qos::Video
        class Voip; //type: Native::Interface::TenGigabitEthernet::Auto::Qos::Voip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto::Qos::Classify> classify; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto::Qos::Trust> trust; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto::Qos::Video> video;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto::Qos::Voip> voip; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Auto::Qos


class Native::Interface::TenGigabitEthernet::Auto::Qos::Classify : public ydk::Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf police; //type: empty

}; // Native::Interface::TenGigabitEthernet::Auto::Qos::Classify


class Native::Interface::TenGigabitEthernet::Auto::Qos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Interface::TenGigabitEthernet::Auto::Qos::Trust


class Native::Interface::TenGigabitEthernet::Auto::Qos::Video : public ydk::Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cts; //type: empty
        ydk::YLeaf ip_camera; //type: empty
        ydk::YLeaf media_player; //type: empty

}; // Native::Interface::TenGigabitEthernet::Auto::Qos::Video


class Native::Interface::TenGigabitEthernet::Auto::Qos::Voip : public ydk::Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco_phone; //type: empty
        ydk::YLeaf cisco_softphone; //type: empty
        ydk::YLeaf trust; //type: empty

}; // Native::Interface::TenGigabitEthernet::Auto::Qos::Voip


class Native::Interface::TenGigabitEthernet::Datalink : public ydk::Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Interface::TenGigabitEthernet::Datalink::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Datalink::Flow> flow;
        
}; // Native::Interface::TenGigabitEthernet::Datalink


class Native::Interface::TenGigabitEthernet::Datalink::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitor; //type: Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Datalink::Flow


class Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_defined_flow; //type: string
        ydk::YLeaf input_output; //type: InputOutput
        class InputOutput;

}; // Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor


class Native::Interface::TenGigabitEthernet::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf activitycheck; //type: empty
        class Level; //type: Native::Interface::TenGigabitEthernet::Energywise::Level

        ydk::YList level;
        
}; // Native::Interface::TenGigabitEthernet::Energywise


class Native::Interface::TenGigabitEthernet::Energywise::Level : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        class Recurrence; //type: Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence> recurrence;
        
}; // Native::Interface::TenGigabitEthernet::Energywise::Level


class Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence : public ydk::Entity
{
    public:
        Recurrence();
        ~Recurrence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Importance; //type: Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance

        ydk::YList importance;
        
}; // Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence


class Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance : public ydk::Entity
{
    public:
        Importance();
        ~Importance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class At; //type: Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At> at;
        
}; // Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance


class Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At : public ydk::Entity
{
    public:
        At();
        ~At();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minute; //type: one of uint16, string
        ydk::YLeaf hour; //type: one of uint16, string
        ydk::YLeaf day; //type: one of uint16, string
        ydk::YLeaf month; //type: one of uint16, string
        ydk::YLeaf weekday; //type: one of uint16, string

}; // Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At


class Native::Interface::TenGigabitEthernet::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CivicLocationId; //type: Native::Interface::TenGigabitEthernet::Location::CivicLocationId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::TenGigabitEthernet::Location


class Native::Interface::TenGigabitEthernet::Location::CivicLocationId : public ydk::Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Location::CivicLocationId


class Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host : public ydk::Entity
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

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host


class Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None : public ydk::Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None


class Native::Interface::TenGigabitEthernet::Mac : public ydk::Entity
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

        class AccessGroup; //type: Native::Interface::TenGigabitEthernet::Mac::AccessGroup

        ydk::YList access_group;
        
}; // Native::Interface::TenGigabitEthernet::Mac


class Native::Interface::TenGigabitEthernet::Mac::AccessGroup : public ydk::Entity
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

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf acl_name; //type: string
        class Direction;

}; // Native::Interface::TenGigabitEthernet::Mac::AccessGroup


class Native::Interface::TenGigabitEthernet::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

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
        class Auto; //type: Native::Interface::TenGigabitEthernet::Macro::Auto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Macro::Auto> auto_;
        
}; // Native::Interface::TenGigabitEthernet::Macro


class Native::Interface::TenGigabitEthernet::Macro::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processing; //type: boolean
        class Port; //type: Native::Interface::TenGigabitEthernet::Macro::Auto::Port
        class Control; //type: Native::Interface::TenGigabitEthernet::Macro::Auto::Control

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Macro::Auto::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Macro::Auto::Control> control;
        
}; // Native::Interface::TenGigabitEthernet::Macro::Auto


class Native::Interface::TenGigabitEthernet::Macro::Auto::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sticky; //type: empty

}; // Native::Interface::TenGigabitEthernet::Macro::Auto::Port


class Native::Interface::TenGigabitEthernet::Macro::Auto::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Device; //type: Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device> device;
        
}; // Native::Interface::TenGigabitEthernet::Macro::Auto::Control


class Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phone; //type: empty

}; // Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device


class Native::Interface::TenGigabitEthernet::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_hello; //type: empty

}; // Native::Interface::TenGigabitEthernet::DualActive


class Native::Interface::TenGigabitEthernet::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Interface::TenGigabitEthernet::LoadBalancing


class Native::Interface::TenGigabitEthernet::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint16, string
        class ServicePolicy; //type: Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::TenGigabitEthernet::VlanRange


class Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy


class Native::Interface::TenGigabitEthernet::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Virtual; //type: Native::Interface::TenGigabitEthernet::Switch::Virtual

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switch::Virtual> virtual_;
        
}; // Native::Interface::TenGigabitEthernet::Switch


class Native::Interface::TenGigabitEthernet::Switch::Virtual : public ydk::Entity
{
    public:
        Virtual();
        ~Virtual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Switch::Virtual


class Native::Interface::TenGigabitEthernet::SrrQueue : public ydk::Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bandwidth; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::TenGigabitEthernet::SrrQueue


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shape; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint16
        ydk::YLeaf weight2; //type: uint16
        ydk::YLeaf weight3; //type: uint16
        ydk::YLeaf weight4; //type: uint16

}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share : public ydk::Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint8
        ydk::YLeaf weight2; //type: uint8
        ydk::YLeaf weight3; //type: uint8
        ydk::YLeaf weight4; //type: uint8

}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share


class Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption : public ydk::Entity
{
    public:
        CiscoIOSXESwitchMacsecOption();
        ~CiscoIOSXESwitchMacsecOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Macsec; //type: Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec> macsec;
        
}; // Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption


class Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_link; //type: empty
        class ReplayProtection; //type: Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection> replay_protection;
        
}; // Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec


class Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection : public ydk::Entity
{
    public:
        ReplayProtection();
        ~ReplayProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint32

}; // Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection


class Native::Interface::TenGigabitEthernet::DeviceTracking : public ydk::Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::TenGigabitEthernet::DeviceTracking


class Native::Interface::TenGigabitEthernet::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf flood_reduction; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf mtu_ignore; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Bfd
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::TenGigabitEthernet::Ospfv3::DemandCircuit
        class Encryption; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption
        class Manet; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Manet
        class MultiArea; //type: Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea
        class Neighbor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor
        class Network; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Network
        class PrefixSuppression; //type: Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression

        ydk::YList process_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea> multi_area;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression> prefix_suppression; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId : public ydk::Entity
{
    public:
        ProcessId();
        ~ProcessId();

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
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Authentication
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Bfd
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DemandCircuit
        class FloodReduction; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::FloodReduction
        class Manet; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet
        class MtuIgnore; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MtuIgnore
        class MultiArea; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MultiArea
        class Neighbor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor
        class Network; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network
        class PrefixSuppression; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression
        class Shutdown; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Shutdown
        class Ipv4; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4
        class Ipv6; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MultiArea> multi_area;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Shutdown> shutdown; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6> ipv6;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Authentication


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Bfd


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

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
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DemandCircuit


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::FloodReduction


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering> peering;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering::Cost> cost;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Manet::Peering::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MtuIgnore


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::MultiArea


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Network::PointToMultipoint


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Shutdown


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4 : public ydk::Entity
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

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit
        class FloodReduction; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction
        class Manet; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet
        class MtuIgnore; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore
        class MultiArea; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea
        class Neighbor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor
        class Network; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network
        class PrefixSuppression; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression
        class Shutdown; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown

        ydk::YList area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea> multi_area;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown> shutdown; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

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
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering> peering;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost> cost;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown

        ydk::YList area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

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
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Bfd


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::TenGigabitEthernet::Ospfv3::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ospfv3::DemandCircuit


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        ydk::YLeaf esp; //type: empty
        class Ipsec3des; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des
        class AesCbc; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des> ipsec_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des : public ydk::Entity
{
    public:
        Ipsec3des();
        ~Ipsec3des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc : public ydk::Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AesCbc128; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192

class Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::InputOutput : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::TenGigabitEthernet::Mac::AccessGroup::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_59_ */

