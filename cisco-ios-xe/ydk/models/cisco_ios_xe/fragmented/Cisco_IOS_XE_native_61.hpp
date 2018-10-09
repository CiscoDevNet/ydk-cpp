#ifndef _CISCO_IOS_XE_NATIVE_61_
#define _CISCO_IOS_XE_NATIVE_61_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_60.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::TwentyFiveGigE::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Interface::TwentyFiveGigE::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Isis::Hello


class Native::Interface::TwentyFiveGigE::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Interface::TwentyFiveGigE::Isis::Hello::Padding


class Native::Interface::TwentyFiveGigE::Isis::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::TwentyFiveGigE::Isis::HelloInterval::HelloIntervalList

        ydk::YList hello_interval_list;
                class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::HelloInterval


class Native::Interface::TwentyFiveGigE::Isis::HelloInterval::HelloIntervalList : public ydk::Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint16, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::HelloInterval::HelloIntervalList


class Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier::HelloMultiplierList

        ydk::YList hello_multiplier_list;
        
}; // Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier


class Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::TwentyFiveGigE::Isis::Ipv6 : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric
        class Bfd; //type: Native::Interface::TwentyFiveGigE::Isis::Ipv6::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Isis::Ipv6::Bfd> bfd; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Isis::Ipv6


class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric


class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::MetricList


class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Bfd : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Isis::Ipv6::Bfd


class Native::Interface::TwentyFiveGigE::Isis::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::TwentyFiveGigE::Isis::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::Metric


class Native::Interface::TwentyFiveGigE::Isis::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::TwentyFiveGigE::Isis::Metric::MetricList


class Native::Interface::TwentyFiveGigE::Isis::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::TwentyFiveGigE::Isis::Password::PasswordList

        ydk::YList password_list;
        
}; // Native::Interface::TwentyFiveGigE::Isis::Password


class Native::Interface::TwentyFiveGigE::Isis::Password::PasswordList : public ydk::Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf password; //type: string
        class Levels;

}; // Native::Interface::TwentyFiveGigE::Isis::Password::PasswordList


class Native::Interface::TwentyFiveGigE::Isis::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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
        class PriorityList; //type: Native::Interface::TwentyFiveGigE::Isis::Priority::PriorityList

        ydk::YList priority_list;
        
}; // Native::Interface::TwentyFiveGigE::Isis::Priority


class Native::Interface::TwentyFiveGigE::Isis::Priority::PriorityList : public ydk::Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint8
        class Levels;

}; // Native::Interface::TwentyFiveGigE::Isis::Priority::PriorityList


class Native::Interface::TwentyFiveGigE::Isis::Bfd : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Isis::Bfd


class Native::Interface::TwentyFiveGigE::Isis::ThreeWayHandshake : public ydk::Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implementor; //type: Implementor
        class Implementor;

}; // Native::Interface::TwentyFiveGigE::Isis::ThreeWayHandshake


class Native::Interface::TwentyFiveGigE::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::TwentyFiveGigE::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::TwentyFiveGigE::KeepaliveSettings


class Native::Interface::TwentyFiveGigE::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::TwentyFiveGigE::KeepaliveSettings::Keepalive


class Native::Interface::TwentyFiveGigE::Bfd : public ydk::Entity
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

        ydk::YLeaf template_; //type: string
        ydk::YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::TwentyFiveGigE::Bfd::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Bfd::Interval> interval;
        
}; // Native::Interface::TwentyFiveGigE::Bfd


class Native::Interface::TwentyFiveGigE::Bfd::Interval : public ydk::Entity
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

        ydk::YLeaf msecs; //type: uint16
        ydk::YLeaf min_rx; //type: uint16
        ydk::YLeaf multiplier; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Bfd::Interval


class Native::Interface::TwentyFiveGigE::Bandwidth : public ydk::Entity
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

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::TwentyFiveGigE::Bandwidth::Receive
        class Inherit; //type: Native::Interface::TwentyFiveGigE::Bandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Bandwidth::Receive> receive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Bandwidth::Inherit> inherit; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Bandwidth


class Native::Interface::TwentyFiveGigE::Bandwidth::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Bandwidth::Receive


class Native::Interface::TwentyFiveGigE::Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Bandwidth::Inherit


class Native::Interface::TwentyFiveGigE::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::TwentyFiveGigE::Dampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Dampening::Restart> restart;
        
}; // Native::Interface::TwentyFiveGigE::Dampening


class Native::Interface::TwentyFiveGigE::Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Dampening::Restart


class Native::Interface::TwentyFiveGigE::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::TwentyFiveGigE::Domain


class Native::Interface::TwentyFiveGigE::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

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
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::TwentyFiveGigE::HoldQueue


class Native::Interface::TwentyFiveGigE::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::TwentyFiveGigE::Mpls::Accounting
        class Bgp; //type: Native::Interface::TwentyFiveGigE::Mpls::Bgp
        class Label; //type: Native::Interface::TwentyFiveGigE::Mpls::Label
        class Ldp; //type: Native::Interface::TwentyFiveGigE::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::TwentyFiveGigE::Mpls


class Native::Interface::TwentyFiveGigE::Mpls::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Interface::TwentyFiveGigE::Mpls::Accounting::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::TwentyFiveGigE::Mpls::Accounting


class Native::Interface::TwentyFiveGigE::Mpls::Accounting::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Interface::TwentyFiveGigE::Mpls::Accounting::Experimental


class Native::Interface::TwentyFiveGigE::Mpls::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: empty

}; // Native::Interface::TwentyFiveGigE::Mpls::Bgp


class Native::Interface::TwentyFiveGigE::Mpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Interface::TwentyFiveGigE::Mpls::Label


class Native::Interface::TwentyFiveGigE::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discovery; //type: Native::Interface::TwentyFiveGigE::Mpls::Ldp::Discovery
        class Igp; //type: Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Ldp::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp> igp;
        
}; // Native::Interface::TwentyFiveGigE::Mpls::Ldp


class Native::Interface::TwentyFiveGigE::Mpls::Ldp::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_address; //type: one of string, enumeration

}; // Native::Interface::TwentyFiveGigE::Mpls::Ldp::Discovery


class Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp::Sync> sync; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp


class Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Mpls::Ldp::Igp::Sync


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf administrative_weight; //type: uint32
        ydk::YLeaf attribute_flags; //type: string
        ydk::YLeaf tunnels; //type: empty
        class BackupPath; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::BackupPath
        class Flooding; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding
        class PassiveInterface; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding> flooding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface> passive_interface;
        
}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::BackupPath


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Thresholds; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList down; //type: list of  uint8
        ydk::YLeafList up; //type: list of  uint8

}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_te_id; //type: string
        ydk::YLeaf nbr_if_addr; //type: string
        class NbrIgpId; //type: Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId> nbr_igp_id;
        
}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface


class Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId : public ydk::Entity
{
    public:
        NbrIgpId();
        ~NbrIgpId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis; //type: string
        ydk::YLeaf ospf; //type: string

}; // Native::Interface::TwentyFiveGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId


class Native::Interface::TwentyFiveGigE::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::TwentyFiveGigE::IpVrf::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::IpVrf::Ip> ip;
        
}; // Native::Interface::TwentyFiveGigE::IpVrf


class Native::Interface::TwentyFiveGigE::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::TwentyFiveGigE::IpVrf::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::TwentyFiveGigE::IpVrf::Ip


class Native::Interface::TwentyFiveGigE::IpVrf::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::TwentyFiveGigE::IpVrf::Ip::Vrf


class Native::Interface::TwentyFiveGigE::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::TwentyFiveGigE::Vrf


class Native::Interface::TwentyFiveGigE::Ip : public ydk::Entity
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

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        ydk::YLeaf unreachables; //type: boolean
        class AccessGroup; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup
        class Arp; //type: Native::Interface::TwentyFiveGigE::Ip::Arp
        class Vrf; //type: Native::Interface::TwentyFiveGigE::Ip::Vrf
        class NoAddress; //type: Native::Interface::TwentyFiveGigE::Ip::NoAddress
        class Address; //type: Native::Interface::TwentyFiveGigE::Ip::Address
        class DirectedBroadcast; //type: Native::Interface::TwentyFiveGigE::Ip::DirectedBroadcast
        class HelloInterval; //type: Native::Interface::TwentyFiveGigE::Ip::HelloInterval
        class Authentication; //type: Native::Interface::TwentyFiveGigE::Ip::Authentication
        class HoldTime; //type: Native::Interface::TwentyFiveGigE::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::TwentyFiveGigE::Ip::HelperAddress
        class Pim; //type: Native::Interface::TwentyFiveGigE::Ip::Pim
        class Policy; //type: Native::Interface::TwentyFiveGigE::Ip::Policy
        class Rip; //type: Native::Interface::TwentyFiveGigE::Ip::Rip
        class RouteCacheConf; //type: Native::Interface::TwentyFiveGigE::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::TwentyFiveGigE::Ip::RouteCache
        class Router; //type: Native::Interface::TwentyFiveGigE::Ip::Router
        class Tcp; //type: Native::Interface::TwentyFiveGigE::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::TwentyFiveGigE::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::TwentyFiveGigE::Ip::SummaryAddress
        class Verify; //type: Native::Interface::TwentyFiveGigE::Ip::Verify
        class Igmp; //type: Native::Interface::TwentyFiveGigE::Ip::Igmp
        class Flow; //type: Native::Interface::TwentyFiveGigE::Ip::Flow
        class Nbar; //type: Native::Interface::TwentyFiveGigE::Ip::Nbar
        class Ospf; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf
        class Lisp; //type: Native::Interface::TwentyFiveGigE::Ip::Lisp
        class Rsvp; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp
        class Nat; //type: Native::Interface::TwentyFiveGigE::Ip::Nat
        class Wccp; //type: Native::Interface::TwentyFiveGigE::Ip::Wccp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::NoAddress> no_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::DirectedBroadcast> directed_broadcast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::HoldTime> hold_time;
        ydk::YList helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify> verify;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Wccp> wccp;
        
}; // Native::Interface::TwentyFiveGigE::Ip


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup : public ydk::Entity
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

        class In; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In
        class Out; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::Acl> acl;
        
}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::CommonAcl


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::In::Acl


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::Acl> acl;
        
}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::AccessGroup::Out::Acl


class Native::Interface::TwentyFiveGigE::Ip::Arp : public ydk::Entity
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

        class Inspection; //type: Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Arp


class Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection


class Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection::Limit : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Ip::Arp::Inspection::Limit


class Native::Interface::TwentyFiveGigE::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf receive; //type: string
        ydk::YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::TwentyFiveGigE::Ip::Vrf::Forwarding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Vrf


class Native::Interface::TwentyFiveGigE::Ip::Vrf::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf liin_vrf; //type: empty
        ydk::YLeaf mgmtvrf; //type: empty
        ydk::YLeaf word; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Vrf::Forwarding


class Native::Interface::TwentyFiveGigE::Ip::NoAddress : public ydk::Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: boolean

}; // Native::Interface::TwentyFiveGigE::Ip::NoAddress


class Native::Interface::TwentyFiveGigE::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated; //type: empty
        class Secondary; //type: Native::Interface::TwentyFiveGigE::Ip::Address::Secondary
        class Primary; //type: Native::Interface::TwentyFiveGigE::Ip::Address::Primary
        class Dhcp; //type: Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp

        ydk::YList secondary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Address::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp> dhcp; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Ip::Address


class Native::Interface::TwentyFiveGigE::Ip::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Address::Secondary


class Native::Interface::TwentyFiveGigE::Ip::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Address::Primary


class Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp : public ydk::Entity
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

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp::ClientId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp


class Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::Address::Dhcp::ClientId


class Native::Interface::TwentyFiveGigE::Ip::DirectedBroadcast : public ydk::Entity
{
    public:
        DirectedBroadcast();
        ~DirectedBroadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direct_broadcast; //type: one of uint16, string

}; // Native::Interface::TwentyFiveGigE::Ip::DirectedBroadcast


class Native::Interface::TwentyFiveGigE::Ip::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::HelloInterval


class Native::Interface::TwentyFiveGigE::Ip::Authentication : public ydk::Entity
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

        class KeyChain; //type: Native::Interface::TwentyFiveGigE::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::TwentyFiveGigE::Ip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Authentication


class Native::Interface::TwentyFiveGigE::Ip::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Authentication::KeyChain


class Native::Interface::TwentyFiveGigE::Ip::Authentication::Mode : public ydk::Entity
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

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Authentication::Mode


class Native::Interface::TwentyFiveGigE::Ip::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::HoldTime


class Native::Interface::TwentyFiveGigE::Ip::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

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
        ydk::YLeaf global; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::HelperAddress


class Native::Interface::TwentyFiveGigE::Ip::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim_mode; //type: PimMode
        ydk::YLeaf nbma_mode; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf spt_threshold; //type: SptThreshold
        class AcceptRegister; //type: Native::Interface::TwentyFiveGigE::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::TwentyFiveGigE::Ip::Pim::QueryInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Pim::QueryInterval> query_interval;
                class PimMode;
        class SptThreshold;

}; // Native::Interface::TwentyFiveGigE::Ip::Pim


class Native::Interface::TwentyFiveGigE::Ip::Pim::AcceptRegister : public ydk::Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Pim::AcceptRegister


class Native::Interface::TwentyFiveGigE::Ip::Pim::QueryInterval : public ydk::Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds_interval; //type: uint16
        ydk::YLeaf milliseconds_interval; //type: uint16
        ydk::YLeaf msec; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Pim::QueryInterval


class Native::Interface::TwentyFiveGigE::Ip::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Policy


class Native::Interface::TwentyFiveGigE::Ip::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication> authentication;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Rip


class Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication : public ydk::Entity
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
        class Mode; //type: Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication


class Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication::Mode : public ydk::Entity
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

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf text; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Rip::Authentication::Mode


class Native::Interface::TwentyFiveGigE::Ip::RouteCacheConf : public ydk::Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_cache; //type: boolean

}; // Native::Interface::TwentyFiveGigE::Ip::RouteCacheConf


class Native::Interface::TwentyFiveGigE::Ip::RouteCache : public ydk::Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cef; //type: boolean
        ydk::YLeaf flow; //type: boolean
        ydk::YLeaf policy; //type: boolean
        ydk::YLeaf same_interface; //type: boolean

}; // Native::Interface::TwentyFiveGigE::Ip::RouteCache


class Native::Interface::TwentyFiveGigE::Ip::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Interface::TwentyFiveGigE::Ip::Router::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Ip::Router


class Native::Interface::TwentyFiveGigE::Ip::Router::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Router::Isis


class Native::Interface::TwentyFiveGigE::Ip::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjust_mss; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::Tcp


class Native::Interface::TwentyFiveGigE::Ip::VirtualReassembly : public ydk::Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_reassemblies; //type: uint32
        ydk::YLeaf max_fragments; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf drop_fragments; //type: empty
        ydk::YLeaf in; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::VirtualReassembly


class Native::Interface::TwentyFiveGigE::Ip::Dhcp : public ydk::Entity
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

        class Client; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay> relay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class Option; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option
        class Request; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Request
        class Route; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Route> route;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionRange; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option::OptionRange

        ydk::YList option_range;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option::OptionRange : public ydk::Entity
{
    public:
        OptionRange();
        ~OptionRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_range; //type: uint8
        ydk::YLeaf ascii; //type: string
        ydk::YLeaf hex; //type: string
        ydk::YLeafList ip; //type: list of  one of union, string

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Option::OptionRange


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Request : public ydk::Entity
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

        ydk::YLeaf option; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Request


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf track; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Client::Route


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_action; //type: PolicyAction
        ydk::YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyAction;

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::CheckReply : public ydk::Entity
{
    public:
        CheckReply();
        ~CheckReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::Option


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::OptionInsert : public ydk::Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping : public ydk::Entity
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

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Limit> limit;
        ydk::YList vlan;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

        ydk::YLeaf rate; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Limit


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Information; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FormatType; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public ydk::Entity
{
    public:
        FormatType();
        ~FormatType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CircuitId; //type: Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::TwentyFiveGigE::Ip::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eigrp; //type: Native::Interface::TwentyFiveGigE::Ip::SummaryAddress::Eigrp

        ydk::YList eigrp;
        
}; // Native::Interface::TwentyFiveGigE::Ip::SummaryAddress


class Native::Interface::TwentyFiveGigE::Ip::SummaryAddress::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

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
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Ip::SummaryAddress::Eigrp


class Native::Interface::TwentyFiveGigE::Ip::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Source
        class Unicast; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Source> source; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Verify


class Native::Interface::TwentyFiveGigE::Ip::Verify::Source : public ydk::Entity
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

        class Vlan; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Source


class Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan : public ydk::Entity
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

        class DhcpSnooping; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan


class Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan::DhcpSnooping : public ydk::Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_security; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReversePath; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast


class Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::ReversePath : public ydk::Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::ReversePath


class Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::Source : public ydk::Entity
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

        ydk::YLeaf reachable_via; //type: ReachableVia
        ydk::YLeaf allow_self_ping; //type: empty
        ydk::YLeaf allow_default; //type: empty
        class ReachableVia;

}; // Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::Source


class Native::Interface::TwentyFiveGigE::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint8
        class StaticGroup; //type: Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::TwentyFiveGigE::Ip::Igmp::JoinGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup> static_group;
        ydk::YList join_group;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Igmp


class Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup : public ydk::Entity
{
    public:
        StaticGroup();
        ~StaticGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Groups; //type: Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::ClassMap

        ydk::YList groups;
        ydk::YList class_map;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup


class Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        ydk::YLeafList source; //type: list of  one of string, enumeration
        class Name;
        class Source;

}; // Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::Groups


class Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::name)
        ydk::YLeaf id;

}; // Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::TwentyFiveGigE::Ip::Igmp::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_group_address; //type: string
        ydk::YLeaf source; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Igmp::JoinGroup


class Native::Interface::TwentyFiveGigE::Ip::Flow : public ydk::Entity
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

        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf egress; //type: empty
        class Monitor; //type: Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor

        ydk::YList monitor;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Flow


class Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        class Sampler; //type: Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor::Sampler

        ydk::YList sampler;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor


class Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor::Sampler : public ydk::Entity
{
    public:
        Sampler();
        ~Sampler();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor::Sampler


class Native::Interface::TwentyFiveGigE::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolDiscovery; //type: Native::Interface::TwentyFiveGigE::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Ip::Nbar


class Native::Interface::TwentyFiveGigE::Ip::Nbar::ProtocolDiscovery : public ydk::Entity
{
    public:
        ProtocolDiscovery();
        ~ProtocolDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_ipv6; //type: Ipv4Ipv6
        class Ipv4Ipv6;

}; // Native::Interface::TwentyFiveGigE::Ip::Nbar::ProtocolDiscovery


class Native::Interface::TwentyFiveGigE::Ip::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network; //type: Network
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf flood_reduction; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf mtu_ignore; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf resync_timeout; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::ProcessId
        class Authentication; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication
        class AuthenticationKey; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::AuthenticationKey
        class Bfd; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::DatabaseFilter
        class DeadInterval; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval
        class DemandCircuit; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::DemandCircuit
        class FastReroute; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute
        class Lls; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::Lls
        class MessageDigestKey; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey
        class MultiArea; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::MultiArea
        class PrefixSuppression; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::PrefixSuppression
        class TtlSecurity; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::TtlSecurity

        ydk::YList process_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::Lls> lls; // presence node
        ydk::YList message_digest_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class Network;

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf


class Native::Interface::TwentyFiveGigE::Ip::Ospf::ProcessId : public ydk::Entity
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

        //type: uint16 (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::id)
        ydk::YLeaf id;
        ydk::YLeaf area; //type: one of uint32, string
        ydk::YLeaf secondaries; //type: empty
        ydk::YLeaf none; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::ProcessId


class Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication : public ydk::Entity
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

        ydk::YLeaf message_digest; //type: empty
        ydk::YLeaf null; //type: empty
        class KeyChain; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication


class Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::Authentication::KeyChain


class Native::Interface::TwentyFiveGigE::Ip::Ospf::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::AuthenticationKey


class Native::Interface::TwentyFiveGigE::Ip::Ospf::Bfd : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::Bfd


class Native::Interface::TwentyFiveGigE::Ip::Ospf::DatabaseFilter : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::DatabaseFilter


class Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval : public ydk::Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

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
        class Minimal; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval


class Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval::Minimal : public ydk::Entity
{
    public:
        Minimal();
        ~Minimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_multiplier; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::TwentyFiveGigE::Ip::Ospf::DemandCircuit : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::DemandCircuit


class Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerPrefix; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute


class Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Candidate; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Candidate : public ydk::Entity
{
    public:
        Candidate();
        ~Candidate();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::TwentyFiveGigE::Ip::Ospf::Lls : public ydk::Entity
{
    public:
        Lls();
        ~Lls();

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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::Lls


class Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Md5; //type: Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey


class Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey::Md5 : public ydk::Entity
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

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::TwentyFiveGigE::Ip::Ospf::MultiArea : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::MultiArea


class Native::Interface::TwentyFiveGigE::Ip::Ospf::PrefixSuppression : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::PrefixSuppression


class Native::Interface::TwentyFiveGigE::Ip::Ospf::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diable; //type: empty
        ydk::YLeaf hops; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Ip::Ospf::TtlSecurity


class Native::Interface::TwentyFiveGigE::Ip::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_locator; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Lisp


class Native::Interface::TwentyFiveGigE::Ip::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication
        class Bandwidth; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth
        class Neighbor; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Neighbor
        class Precedence; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Precedence
        class Signalling; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Signalling
        class Tos; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Tos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Neighbor> neighbor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Precedence> precedence;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Signalling> signalling;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Tos> tos;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Rsvp


class Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication


class Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
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

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication::Lifetime


class Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth : public ydk::Entity
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

        ydk::YLeaf percent; //type: uint16
        class Value; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Value
        class Mam; //type: Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Mam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Value> value_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Mam> mam;
        
}; // Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth


class Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

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
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::TwentyFiveGigE::Ip::Rsvp::Bandwidth::Value

class Native::Interface::TwentyFiveGigE::Isis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::TwentyFiveGigE::Isis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::TwentyFiveGigE::Isis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::Ipv6::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::TwentyFiveGigE::Isis::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::TwentyFiveGigE::Isis::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::TwentyFiveGigE::Isis::Password::PasswordList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::Priority::PriorityList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::TwentyFiveGigE::Isis::ThreeWayHandshake::Implementor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class Native::Interface::TwentyFiveGigE::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TwentyFiveGigE::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Interface::TwentyFiveGigE::Ip::Pim::PimMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf dense_mode;
        static const ydk::Enum::YLeaf sparse_mode;
        static const ydk::Enum::YLeaf sparse_dense_mode;

};

class Native::Interface::TwentyFiveGigE::Ip::Pim::SptThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};

class Native::Interface::TwentyFiveGigE::Ip::Dhcp::Relay::Information::PolicyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;

};

class Native::Interface::TwentyFiveGigE::Ip::Verify::Unicast::Source::ReachableVia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf rx;

};

class Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::Groups::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__STAR__;

};

class Native::Interface::TwentyFiveGigE::Ip::Igmp::StaticGroup::Groups::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssm_map;

};

class Native::Interface::TwentyFiveGigE::Ip::Flow::Monitor::Sampler::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::TwentyFiveGigE::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Interface::TwentyFiveGigE::Ip::Ospf::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::TwentyFiveGigE::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_61_ */

