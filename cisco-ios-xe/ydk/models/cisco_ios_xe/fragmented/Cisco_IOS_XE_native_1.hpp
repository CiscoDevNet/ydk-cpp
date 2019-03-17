#ifndef _CISCO_IOS_XE_NATIVE_1_
#define _CISCO_IOS_XE_NATIVE_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone


class Native::Service::Timestamps::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Log::Datetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Log


class Native::Service::Timestamps::Log::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime


class Native::Service::Alignment : public ydk::Entity
{
    public:
        Alignment();
        ~Alignment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf detection; //type: empty
        ydk::YLeaf logging; //type: empty

}; // Native::Service::Alignment


class Native::Service::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Max; //type: Native::Service::Counters::Max

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Counters::Max> max;
        
}; // Native::Service::Counters


class Native::Service::Counters::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf age; //type: uint8

}; // Native::Service::Counters::Max


class Native::Service::Heartbeat : public ydk::Entity
{
    public:
        Heartbeat();
        ~Heartbeat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fatal_count; //type: uint8
        ydk::YLeaf interrupt_interval; //type: uint8
        ydk::YLeaf interrupt_max; //type: uint8
        ydk::YLeaf transmit_interval; //type: uint8
        ydk::YLeaf warning_timeout; //type: uint8

}; // Native::Service::Heartbeat


class Native::Service::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf config; //type: empty

}; // Native::Service::Prompt


class Native::Platform : public ydk::Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_cdvt; //type: boolean
        ydk::YLeaf cfm; //type: empty
        ydk::YLeaf bfd_debug_trace; //type: uint8
        ydk::YLeaf shell; //type: boolean
        ydk::YLeaf tcam_parity_error; //type: TcamParityError
        class Icmp; //type: Native::Platform::Icmp
        class IpPorts; //type: Native::Platform::IpPorts
        class Bfd; //type: Native::Platform::Bfd
        class TimeSource; //type: Native::Platform::TimeSource
        class Console; //type: Native::Platform::Console
        class Enable; //type: Native::Platform::Enable
        class ExternalAlarm; //type: Native::Platform::ExternalAlarm
        class Hardware; //type: Native::Platform::Hardware
        class Ipsec; //type: Native::Platform::Ipsec
        class L2vpn; //type: Native::Platform::L2vpn
        class Multicast; //type: Native::Platform::Multicast
        class PuntKeepalive; //type: Native::Platform::PuntKeepalive
        class PuntPolicer; //type: Native::Platform::PuntPolicer
        class Qos; //type: Native::Platform::Qos
        class Reload; //type: Native::Platform::Reload
        class Urpf; //type: Native::Platform::Urpf
        class TcamThreshold; //type: Native::Platform::TcamThreshold
        class Trace; //type: Native::Platform::Trace

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::IpPorts> ip_ports;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::TimeSource> time_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Console> console; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::ExternalAlarm> external_alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Hardware> hardware;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::L2vpn> l2vpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::PuntKeepalive> punt_keepalive; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::PuntPolicer> punt_policer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Reload> reload;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf> urpf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::TcamThreshold> tcam_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Trace> trace;
                class TcamParityError;

}; // Native::Platform


class Native::Platform::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RateLimit; //type: Native::Platform::Icmp::RateLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Icmp::RateLimit> rate_limit;
        
}; // Native::Platform::Icmp


class Native::Platform::Icmp::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet; //type: uint32
        ydk::YLeaf duration; //type: uint32

}; // Native::Platform::Icmp::RateLimit


class Native::Platform::IpPorts : public ydk::Entity
{
    public:
        IpPorts();
        ~IpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ephemeral_max; //type: uint16

}; // Native::Platform::IpPorts


class Native::Platform::Bfd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable_offload; //type: empty
        ydk::YLeaf allow_svi; //type: empty
        ydk::YLeaf enable_offload; //type: empty

}; // Native::Platform::Bfd


class Native::Platform::TimeSource : public ydk::Entity
{
    public:
        TimeSource();
        ~TimeSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ntp; //type: Native::Platform::TimeSource::Ntp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::TimeSource::Ntp> ntp; // presence node
        
}; // Native::Platform::TimeSource


class Native::Platform::TimeSource::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_scale; //type: TimeScale
        class TimeScale;

}; // Native::Platform::TimeSource::Ntp


class Native::Platform::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf output; //type: Output
        class Output;

}; // Native::Platform::Console


class Native::Platform::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Controller; //type: Native::Platform::Enable::Controller

        ydk::YList controller;
        
}; // Native::Platform::Enable


class Native::Platform::Enable::Controller : public ydk::Entity
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

        ydk::YLeaf sonet; //type: string

}; // Native::Platform::Enable::Controller


class Native::Platform::ExternalAlarm : public ydk::Entity
{
    public:
        ExternalAlarm();
        ~ExternalAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf line; //type: uint32
        ydk::YLeaf alarm; //type: one of uint16, enumeration

}; // Native::Platform::ExternalAlarm


class Native::Platform::Hardware : public ydk::Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lite; //type: Native::Platform::Hardware::Lite
        class Throughput; //type: Native::Platform::Hardware::Throughput
        class CryptoOffload; //type: Native::Platform::Hardware::CryptoOffload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Hardware::Lite> lite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput> throughput;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Hardware::CryptoOffload> crypto_offload;
        
}; // Native::Platform::Hardware


class Native::Platform::Hardware::Lite : public ydk::Entity
{
    public:
        Lite();
        ~Lite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf license; //type: License
        class License;

}; // Native::Platform::Hardware::Lite


class Native::Platform::Hardware::Throughput : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: Disable
        class Level; //type: Native::Platform::Hardware::Throughput::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput::Level> level;
                class Disable;

}; // Native::Platform::Hardware::Throughput


class Native::Platform::Hardware::Throughput::Level : public ydk::Entity
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

        ydk::YLeaf kbps; //type: Kbps
        ydk::YLeaf eval_only; //type: empty
        class Kbps;

}; // Native::Platform::Hardware::Throughput::Level


class Native::Platform::Hardware::CryptoOffload : public ydk::Entity
{
    public:
        CryptoOffload();
        ~CryptoOffload();

        bool has_data() const override;
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

}; // Native::Platform::Hardware::CryptoOffload


class Native::Platform::Ipsec : public ydk::Entity
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

        ydk::YLeaf arlog_supress; //type: empty
        ydk::YLeaf fips_mode; //type: empty
        ydk::YLeaf gdoi; //type: Gdoi
        ydk::YLeaf flexvpn_bypass_tcam; //type: empty
        ydk::YLeaf modexp_throttle_window; //type: uint8
        ydk::YLeaf control_plane; //type: ControlPlane
        class Llq; //type: Native::Platform::Ipsec::Llq
        class Reassemble; //type: Native::Platform::Ipsec::Reassemble

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Ipsec::Llq> llq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Ipsec::Reassemble> reassemble;
                class Gdoi;
        class ControlPlane;

}; // Native::Platform::Ipsec


class Native::Platform::Ipsec::Llq : public ydk::Entity
{
    public:
        Llq();
        ~Llq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf qos_group; //type: uint8

}; // Native::Platform::Ipsec::Llq


class Native::Platform::Ipsec::Reassemble : public ydk::Entity
{
    public:
        Reassemble();
        ~Reassemble();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf transit; //type: empty

}; // Native::Platform::Ipsec::Reassemble


class Native::Platform::L2vpn : public ydk::Entity
{
    public:
        L2vpn();
        ~L2vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hdlc_pass_through; //type: empty
        class Statistics; //type: Native::Platform::L2vpn::Statistics

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::L2vpn::Statistics> statistics;
        
}; // Native::Platform::L2vpn


class Native::Platform::L2vpn::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
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

}; // Native::Platform::L2vpn::Statistics


class Native::Platform::Multicast : public ydk::Entity
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

        class Mgre; //type: Native::Platform::Multicast::Mgre
        class Oce; //type: Native::Platform::Multicast::Oce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Multicast::Mgre> mgre;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Multicast::Oce> oce;
        
}; // Native::Platform::Multicast


class Native::Platform::Multicast::Mgre : public ydk::Entity
{
    public:
        Mgre();
        ~Mgre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf injection; //type: empty

}; // Native::Platform::Multicast::Mgre


class Native::Platform::Multicast::Oce : public ydk::Entity
{
    public:
        Oce();
        ~Oce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Flag; //type: Native::Platform::Multicast::Oce::Flag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Multicast::Oce::Flag> flag;
        
}; // Native::Platform::Multicast::Oce


class Native::Platform::Multicast::Oce::Flag : public ydk::Entity
{
    public:
        Flag();
        ~Flag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf suppress; //type: empty

}; // Native::Platform::Multicast::Oce::Flag


class Native::Platform::PuntKeepalive : public ydk::Entity
{
    public:
        PuntKeepalive();
        ~PuntKeepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable_kernel_core; //type: boolean
        class Settings; //type: Native::Platform::PuntKeepalive::Settings

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::PuntKeepalive::Settings> settings;
        
}; // Native::Platform::PuntKeepalive


class Native::Platform::PuntKeepalive::Settings : public ydk::Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fatal_count; //type: uint16
        ydk::YLeaf transmit_interval; //type: uint16
        ydk::YLeaf warning_count; //type: uint16

}; // Native::Platform::PuntKeepalive::Settings


class Native::Platform::PuntPolicer : public ydk::Entity
{
    public:
        PuntPolicer();
        ~PuntPolicer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PuntNum; //type: Native::Platform::PuntPolicer::PuntNum

        ydk::YList punt_num;
        
}; // Native::Platform::PuntPolicer


class Native::Platform::PuntPolicer::PuntNum : public ydk::Entity
{
    public:
        PuntNum();
        ~PuntNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cause; //type: uint8
        ydk::YLeaf max_rate; //type: uint16
        ydk::YLeaf high; //type: empty

}; // Native::Platform::PuntPolicer::PuntNum


class Native::Platform::Qos : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf cac_policer; //type: uint16
        ydk::YLeaf marker_statistics; //type: empty
        ydk::YLeaf performance_monitor; //type: empty
        ydk::YLeaf punt_path_matching; //type: empty
        class MatchStatistics; //type: Native::Platform::Qos::MatchStatistics

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Qos::MatchStatistics> match_statistics;
        
}; // Native::Platform::Qos


class Native::Platform::Qos::MatchStatistics : public ydk::Entity
{
    public:
        MatchStatistics();
        ~MatchStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf per_filter; //type: empty
        ydk::YLeaf per_ace; //type: empty

}; // Native::Platform::Qos::MatchStatistics


class Native::Platform::Reload : public ydk::Entity
{
    public:
        Reload();
        ~Reload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf immediate; //type: empty

}; // Native::Platform::Reload


class Native::Platform::Urpf : public ydk::Entity
{
    public:
        Urpf();
        ~Urpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Loose; //type: Native::Platform::Urpf::Loose

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose> loose;
        
}; // Native::Platform::Urpf


class Native::Platform::Urpf::Loose : public ydk::Entity
{
    public:
        Loose();
        ~Loose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Counter; //type: Native::Platform::Urpf::Loose::Counter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter> counter;
        
}; // Native::Platform::Urpf::Loose


class Native::Platform::Urpf::Loose::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Platform::Urpf::Loose::Counter::Ipv4
        class Ipv6; //type: Native::Platform::Urpf::Loose::Counter::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv6> ipv6;
        
}; // Native::Platform::Urpf::Loose::Counter


class Native::Platform::Urpf::Loose::Counter::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Supress; //type: Native::Platform::Urpf::Loose::Counter::Ipv4::Supress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv4::Supress> supress;
        
}; // Native::Platform::Urpf::Loose::Counter::Ipv4


class Native::Platform::Urpf::Loose::Counter::Ipv4::Supress : public ydk::Entity
{
    public:
        Supress();
        ~Supress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asymmetric_only; //type: empty

}; // Native::Platform::Urpf::Loose::Counter::Ipv4::Supress


class Native::Platform::Urpf::Loose::Counter::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Supress; //type: Native::Platform::Urpf::Loose::Counter::Ipv6::Supress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv6::Supress> supress;
        
}; // Native::Platform::Urpf::Loose::Counter::Ipv6


class Native::Platform::Urpf::Loose::Counter::Ipv6::Supress : public ydk::Entity
{
    public:
        Supress();
        ~Supress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asymmetric_only; //type: empty

}; // Native::Platform::Urpf::Loose::Counter::Ipv6::Supress


class Native::Platform::TcamThreshold : public ydk::Entity
{
    public:
        TcamThreshold();
        ~TcamThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarm_frequency; //type: uint32

}; // Native::Platform::TcamThreshold


class Native::Platform::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Runtime; //type: Native::Platform::Trace::Runtime

        ydk::YList runtime;
        
}; // Native::Platform::Trace


class Native::Platform::Trace::Runtime : public ydk::Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf bay; //type: uint8
        ydk::YLeaf process; //type: Process
        ydk::YLeaf module; //type: Module
        ydk::YLeaf level; //type: Level
        class Process;
        class Module;
        class Level;

}; // Native::Platform::Trace::Runtime


class Native::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf last_resort; //type: LastResort
        ydk::YLeaf use_tacacs; //type: empty
        class Password; //type: Native::Enable::Password
        class Secret; //type: Native::Enable::Secret

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Enable::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Enable::Secret> secret;
                class LastResort;

}; // Native::Enable


class Native::Enable::Password : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Enable::Password


class Native::Enable::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Enable::Secret


class Native::Password : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Encryption; //type: Native::Password::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Password::Encryption> encryption;
        
}; // Native::Password


class Native::Password::Encryption : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf aes; //type: empty

}; // Native::Password::Encryption


class Native::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::Eap::Profile

        ydk::YList profile;
        
}; // Native::Eap


class Native::Eap::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
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
        ydk::YLeaf pki_trustpoint; //type: string
        class Method; //type: Native::Eap::Profile::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Eap::Profile::Method> method;
        
}; // Native::Eap::Profile


class Native::Eap::Profile::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast; //type: empty
        ydk::YLeaf gtc; //type: empty
        ydk::YLeaf leap; //type: empty
        ydk::YLeaf mschapv2; //type: empty
        ydk::YLeaf peap; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf tls; //type: empty

}; // Native::Eap::Profile::Method


class Native::Archive : public ydk::Entity
{
    public:
        Archive();
        ~Archive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf path; //type: one of string, enumeration
        ydk::YLeaf maximum; //type: uint8
        ydk::YLeaf write_memory; //type: empty
        ydk::YLeaf time_period; //type: uint32
        class Log; //type: Native::Archive::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log> log;
                class Path;

}; // Native::Archive


class Native::Archive::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Native::Archive::Log::Config

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log::Config> config;
        
}; // Native::Archive::Log


class Native::Archive::Log::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hidekeys; //type: empty
        class Logging; //type: Native::Archive::Log::Config::Logging
        class Notify; //type: Native::Archive::Log::Config::Notify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log::Config::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log::Config::Notify> notify;
        
}; // Native::Archive::Log::Config


class Native::Archive::Log::Config::Logging : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf size; //type: uint16
        class Persistent; //type: Native::Archive::Log::Config::Logging::Persistent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log::Config::Logging::Persistent> persistent; // presence node
        
}; // Native::Archive::Log::Config::Logging


class Native::Archive::Log::Config::Logging::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf reload; //type: empty

}; // Native::Archive::Log::Config::Logging::Persistent


class Native::Archive::Log::Config::Notify : public ydk::Entity
{
    public:
        Notify();
        ~Notify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Syslog; //type: Native::Archive::Log::Config::Notify::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Archive::Log::Config::Notify::Syslog> syslog; // presence node
        
}; // Native::Archive::Log::Config::Notify


class Native::Archive::Log::Config::Notify::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf contenttype; //type: Contenttype
        class Contenttype;

}; // Native::Archive::Log::Config::Notify::Syslog


class Native::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
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
        ydk::YLeaf privilege; //type: uint8
        ydk::YLeaf view; //type: string
        ydk::YLeaf one_time; //type: empty
        class Password; //type: Native::Username::Password
        class Secret; //type: Native::Username::Secret

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Username::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Username::Secret> secret;
        
}; // Native::Username


class Native::Username::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf password; //type: string
        class Encryption;

}; // Native::Username::Password


class Native::Username::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf secret; //type: string
        class Encryption;

}; // Native::Username::Secret


class Native::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf bay; //type: uint32
        class Type;

}; // Native::Card


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
        class Vdsl; //type: Native::Controller::Vdsl

        ydk::YList controller_tx_ex_list;
        ydk::YList cellular;
        ydk::YList sonet;
        ydk::YList sonet_acr;
        ydk::YList wanphy;
        ydk::YList vdsl;
        
}; // Native::Controller


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
        ydk::YLeaf description; //type: string
        ydk::YLeaf linecode; //type: Linecode
        class Clock; //type: Native::Controller::ControllerTxExList::Clock
        class Cablelength; //type: Native::Controller::ControllerTxExList::Cablelength
        class ChannelGroup; //type: Native::Controller::ControllerTxExList::ChannelGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Cablelength> cablelength;
        ydk::YList channel_group;
                class Name;
        class Linecode;

}; // Native::Controller::ControllerTxExList


class Native::Controller::ControllerTxExList::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Controller::ControllerTxExList::Clock::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock::Source> source;
        
}; // Native::Controller::ControllerTxExList::Clock


class Native::Controller::ControllerTxExList::Clock::Source : public ydk::Entity
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
        class Line; //type: Native::Controller::ControllerTxExList::Clock::Source::Line

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock::Source::Line> line; // presence node
        
}; // Native::Controller::ControllerTxExList::Clock::Source


class Native::Controller::ControllerTxExList::Clock::Source::Line : public ydk::Entity
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

}; // Native::Controller::ControllerTxExList::Clock::Source::Line


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
        ydk::YLeafList timeslots; //type: list of  one of uint16, string

}; // Native::Controller::ControllerTxExList::ChannelGroup


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

        ydk::YLeaf failovertimer; //type: uint8
        class Sim; //type: Native::Controller::Cellular::Lte::Sim
        class Sms; //type: Native::Controller::Cellular::Lte::Sms
        class Gps; //type: Native::Controller::Cellular::Lte::Gps
        class Firmware; //type: Native::Controller::Cellular::Lte::Firmware
        class Radio; //type: Native::Controller::Cellular::Lte::Radio
        class Modem; //type: Native::Controller::Cellular::Lte::Modem
        class Event; //type: Native::Controller::Cellular::Lte::Event
        class Dyinggasp; //type: Native::Controller::Cellular::Lte::Dyinggasp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Sim> sim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Sms> sms;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Gps> gps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Firmware> firmware; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Radio> radio;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Dyinggasp> dyinggasp;
        
}; // Native::Controller::Cellular::Lte


class Native::Controller::Cellular::Lte::Sim : public ydk::Entity
{
    public:
        Sim();
        ~Sim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_retry; //type: uint16
        class Authenticate; //type: Native::Controller::Cellular::Lte::Sim::Authenticate
        class DataProfileList; //type: Native::Controller::Cellular::Lte::Sim::DataProfileList
        class Primary; //type: Native::Controller::Cellular::Lte::Sim::Primary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Sim::Authenticate> authenticate;
        ydk::YList data_profile_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Sim::Primary> primary;
        
}; // Native::Controller::Cellular::Lte::Sim


class Native::Controller::Cellular::Lte::Sim::Authenticate : public ydk::Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pin_type; //type: PinType
        ydk::YLeaf pin; //type: string
        ydk::YLeaf slot; //type: uint8
        class PinType;

}; // Native::Controller::Cellular::Lte::Sim::Authenticate


class Native::Controller::Cellular::Lte::Sim::DataProfileList : public ydk::Entity
{
    public:
        DataProfileList();
        ~DataProfileList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf data_profile; //type: uint8
        ydk::YLeaf attach_profile; //type: uint8

}; // Native::Controller::Cellular::Lte::Sim::DataProfileList


class Native::Controller::Cellular::Lte::Sim::Primary : public ydk::Entity
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

        ydk::YLeaf slot; //type: uint8

}; // Native::Controller::Cellular::Lte::Sim::Primary


class Native::Controller::Cellular::Lte::Sms : public ydk::Entity
{
    public:
        Sms();
        ~Sms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Archive; //type: Native::Controller::Cellular::Lte::Sms::Archive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Sms::Archive> archive;
        
}; // Native::Controller::Cellular::Lte::Sms


class Native::Controller::Cellular::Lte::Sms::Archive : public ydk::Entity
{
    public:
        Archive();
        ~Archive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: Path
        class Path;

}; // Native::Controller::Cellular::Lte::Sms::Archive


class Native::Controller::Cellular::Lte::Gps : public ydk::Entity
{
    public:
        Gps();
        ~Gps();

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
        ydk::YLeaf mode; //type: Mode
        class NmeaConf; //type: Native::Controller::Cellular::Lte::Gps::NmeaConf
        class Nmea; //type: Native::Controller::Cellular::Lte::Gps::Nmea

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Gps::NmeaConf> nmea_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Gps::Nmea> nmea;
                class Mode;

}; // Native::Controller::Cellular::Lte::Gps


class Native::Controller::Cellular::Lte::Gps::NmeaConf : public ydk::Entity
{
    public:
        NmeaConf();
        ~NmeaConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nmea; //type: empty

}; // Native::Controller::Cellular::Lte::Gps::NmeaConf


class Native::Controller::Cellular::Lte::Gps::Nmea : public ydk::Entity
{
    public:
        Nmea();
        ~Nmea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Controller::Cellular::Lte::Gps::Nmea::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Gps::Nmea::Ip> ip;
        
}; // Native::Controller::Cellular::Lte::Gps::Nmea


class Native::Controller::Cellular::Lte::Gps::Nmea::Ip : public ydk::Entity
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

        class Udp; //type: Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp> udp;
        
}; // Native::Controller::Cellular::Lte::Gps::Nmea::Ip


class Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: uint16

}; // Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp


class Native::Controller::Cellular::Lte::Firmware : public ydk::Entity
{
    public:
        Firmware();
        ~Firmware();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_sim; //type: empty

}; // Native::Controller::Cellular::Lte::Firmware


class Native::Controller::Cellular::Lte::Radio : public ydk::Entity
{
    public:
        Radio();
        ~Radio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf off; //type: empty

}; // Native::Controller::Cellular::Lte::Radio


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

        class DmLog; //type: Native::Controller::Cellular::Lte::Modem::DmLog
        class Fota; //type: Native::Controller::Cellular::Lte::Modem::Fota
        class LinkRecovery; //type: Native::Controller::Cellular::Lte::Modem::LinkRecovery
        class NasLog; //type: Native::Controller::Cellular::Lte::Modem::NasLog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::DmLog> dm_log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::Fota> fota;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::LinkRecovery> link_recovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::NasLog> nas_log;
        
}; // Native::Controller::Cellular::Lte::Modem


class Native::Controller::Cellular::Lte::Modem::DmLog : public ydk::Entity
{
    public:
        DmLog();
        ~DmLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter; //type: Filter
        ydk::YLeaf size; //type: uint16
        ydk::YLeaf filesize; //type: int8
        ydk::YLeaf rotation; //type: empty
        ydk::YLeaf enable; //type: empty
        class Output; //type: Native::Controller::Cellular::Lte::Modem::DmLog::Output
        class Autostop; //type: Native::Controller::Cellular::Lte::Modem::DmLog::Autostop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::DmLog::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::DmLog::Autostop> autostop;
                class Filter;

}; // Native::Controller::Cellular::Lte::Modem::DmLog


class Native::Controller::Cellular::Lte::Modem::DmLog::Output : public ydk::Entity
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

        ydk::YLeaf local_uf; //type: empty
        ydk::YLeaf path; //type: Path
        class Path;

}; // Native::Controller::Cellular::Lte::Modem::DmLog::Output


class Native::Controller::Cellular::Lte::Modem::DmLog::Autostop : public ydk::Entity
{
    public:
        Autostop();
        ~Autostop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_down; //type: empty
        ydk::YLeaf timer; //type: int8

}; // Native::Controller::Cellular::Lte::Modem::DmLog::Autostop


class Native::Controller::Cellular::Lte::Modem::Fota : public ydk::Entity
{
    public:
        Fota();
        ~Fota();

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
        ydk::YLeaf poll_timer; //type: uint32

}; // Native::Controller::Cellular::Lte::Modem::Fota


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
        ydk::YLeaf disable; //type: empty
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


class Native::Controller::Cellular::Lte::Modem::NasLog : public ydk::Entity
{
    public:
        NasLog();
        ~NasLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf filesize; //type: int8
        ydk::YLeaf enable; //type: empty
        class Output; //type: Native::Controller::Cellular::Lte::Modem::NasLog::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::NasLog::Output> output;
        
}; // Native::Controller::Cellular::Lte::Modem::NasLog


class Native::Controller::Cellular::Lte::Modem::NasLog::Output : public ydk::Entity
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

        ydk::YLeaf path; //type: Path
        class Path;

}; // Native::Controller::Cellular::Lte::Modem::NasLog::Output


class Native::Controller::Cellular::Lte::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionStatus; //type: Native::Controller::Cellular::Lte::Event::ConnectionStatus
        class Ecio; //type: Native::Controller::Cellular::Lte::Event::Ecio
        class ModemState; //type: Native::Controller::Cellular::Lte::Event::ModemState
        class Network; //type: Native::Controller::Cellular::Lte::Event::Network
        class Rsrp; //type: Native::Controller::Cellular::Lte::Event::Rsrp
        class Rsrq; //type: Native::Controller::Cellular::Lte::Event::Rsrq
        class Rssi; //type: Native::Controller::Cellular::Lte::Event::Rssi
        class Service; //type: Native::Controller::Cellular::Lte::Event::Service
        class Temperature; //type: Native::Controller::Cellular::Lte::Event::Temperature

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::ConnectionStatus> connection_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Ecio> ecio;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::ModemState> modem_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrp> rsrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrq> rsrq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rssi> rssi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Temperature> temperature;
        
}; // Native::Controller::Cellular::Lte::Event


class Native::Controller::Cellular::Lte::Event::ConnectionStatus : public ydk::Entity
{
    public:
        ConnectionStatus();
        ~ConnectionStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::ConnectionStatus


class Native::Controller::Cellular::Lte::Event::Ecio : public ydk::Entity
{
    public:
        Ecio();
        ~Ecio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Abate; //type: Native::Controller::Cellular::Lte::Event::Ecio::Abate
        class Onset; //type: Native::Controller::Cellular::Lte::Event::Ecio::Onset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Ecio::Abate> abate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Ecio::Onset> onset;
        
}; // Native::Controller::Cellular::Lte::Event::Ecio


class Native::Controller::Cellular::Lte::Event::Ecio::Abate : public ydk::Entity
{
    public:
        Abate();
        ~Abate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Ecio::Abate


class Native::Controller::Cellular::Lte::Event::Ecio::Onset : public ydk::Entity
{
    public:
        Onset();
        ~Onset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Ecio::Onset


class Native::Controller::Cellular::Lte::Event::ModemState : public ydk::Entity
{
    public:
        ModemState();
        ~ModemState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::ModemState


class Native::Controller::Cellular::Lte::Event::Network : public ydk::Entity
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

        ydk::YLeaf mib_trap; //type: empty

}; // Native::Controller::Cellular::Lte::Event::Network


class Native::Controller::Cellular::Lte::Event::Rsrp : public ydk::Entity
{
    public:
        Rsrp();
        ~Rsrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Abate; //type: Native::Controller::Cellular::Lte::Event::Rsrp::Abate
        class Onset; //type: Native::Controller::Cellular::Lte::Event::Rsrp::Onset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrp::Abate> abate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrp::Onset> onset;
        
}; // Native::Controller::Cellular::Lte::Event::Rsrp


class Native::Controller::Cellular::Lte::Event::Rsrp::Abate : public ydk::Entity
{
    public:
        Abate();
        ~Abate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rsrp::Abate


class Native::Controller::Cellular::Lte::Event::Rsrp::Onset : public ydk::Entity
{
    public:
        Onset();
        ~Onset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rsrp::Onset


class Native::Controller::Cellular::Lte::Event::Rsrq : public ydk::Entity
{
    public:
        Rsrq();
        ~Rsrq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Abate; //type: Native::Controller::Cellular::Lte::Event::Rsrq::Abate
        class Onset; //type: Native::Controller::Cellular::Lte::Event::Rsrq::Onset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrq::Abate> abate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rsrq::Onset> onset;
        
}; // Native::Controller::Cellular::Lte::Event::Rsrq


class Native::Controller::Cellular::Lte::Event::Rsrq::Abate : public ydk::Entity
{
    public:
        Abate();
        ~Abate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int8
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rsrq::Abate


class Native::Controller::Cellular::Lte::Event::Rsrq::Onset : public ydk::Entity
{
    public:
        Onset();
        ~Onset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int8
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rsrq::Onset


class Native::Controller::Cellular::Lte::Event::Rssi : public ydk::Entity
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

        class Abate; //type: Native::Controller::Cellular::Lte::Event::Rssi::Abate
        class Onset; //type: Native::Controller::Cellular::Lte::Event::Rssi::Onset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rssi::Abate> abate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Rssi::Onset> onset;
        
}; // Native::Controller::Cellular::Lte::Event::Rssi


class Native::Controller::Cellular::Lte::Event::Rssi::Abate : public ydk::Entity
{
    public:
        Abate();
        ~Abate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rssi::Abate


class Native::Controller::Cellular::Lte::Event::Rssi::Onset : public ydk::Entity
{
    public:
        Onset();
        ~Onset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: int16
        ydk::YLeafList mib_trap; //type: list of  MibTrap
        class MibTrap;

}; // Native::Controller::Cellular::Lte::Event::Rssi::Onset


class Native::Controller::Cellular::Lte::Event::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mib_trap; //type: empty

}; // Native::Controller::Cellular::Lte::Event::Service


class Native::Controller::Cellular::Lte::Event::Temperature : public ydk::Entity
{
    public:
        Temperature();
        ~Temperature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Abate; //type: Native::Controller::Cellular::Lte::Event::Temperature::Abate
        class Onset; //type: Native::Controller::Cellular::Lte::Event::Temperature::Onset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Temperature::Abate> abate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Event::Temperature::Onset> onset;
        
}; // Native::Controller::Cellular::Lte::Event::Temperature


class Native::Controller::Cellular::Lte::Event::Temperature::Abate : public ydk::Entity
{
    public:
        Abate();
        ~Abate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mib_trap; //type: empty
        ydk::YLeaf threshold; //type: int16

}; // Native::Controller::Cellular::Lte::Event::Temperature::Abate


class Native::Controller::Cellular::Lte::Event::Temperature::Onset : public ydk::Entity
{
    public:
        Onset();
        ~Onset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mib_trap; //type: empty
        ydk::YLeaf threshold; //type: int16

}; // Native::Controller::Cellular::Lte::Event::Temperature::Onset


class Native::Controller::Cellular::Lte::Dyinggasp : public ydk::Entity
{
    public:
        Dyinggasp();
        ~Dyinggasp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detach; //type: Native::Controller::Cellular::Lte::Dyinggasp::Detach
        class Sms; //type: Native::Controller::Cellular::Lte::Dyinggasp::Sms

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Dyinggasp::Detach> detach;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Dyinggasp::Sms> sms;
        
}; // Native::Controller::Cellular::Lte::Dyinggasp


class Native::Controller::Cellular::Lte::Dyinggasp::Detach : public ydk::Entity
{
    public:
        Detach();
        ~Detach();

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

}; // Native::Controller::Cellular::Lte::Dyinggasp::Detach


class Native::Controller::Cellular::Lte::Dyinggasp::Sms : public ydk::Entity
{
    public:
        Sms();
        ~Sms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send; //type: string
        ydk::YLeaf sms_text; //type: string

}; // Native::Controller::Cellular::Lte::Dyinggasp::Sms


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
        class Clock; //type: Native::Controller::SONET::Clock
        class Aug; //type: Native::Controller::SONET::Aug
        class Au3; //type: Native::Controller::SONET::Au3
        class Au4Atm; //type: Native::Controller::SONET::Au4Atm
        class Au4; //type: Native::Controller::SONET::Au4
        class Aps; //type: Native::Controller::SONET::Aps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Clock> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aug> aug;
        ydk::YList au_3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4Atm> au_4_atm;
        ydk::YList au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps> aps;
                class Framing;

}; // Native::Controller::SONET


class Native::Controller::SONET::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

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

}; // Native::Controller::SONET::Clock


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3::Overhead> overhead;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3::Mode> mode;
        
}; // Native::Controller::SONET::Au3


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4::ImaGroup> ima_group;
                class Mode;
        class Framing;

}; // Native::Controller::SONET::Au4


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

        ydk::YList tug_2;
        
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

        ydk::YList tug_2;
        
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

class Native::Platform::TcamParityError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Platform::TimeSource::Ntp::TimeScale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf epoch_1900;
        static const ydk::Enum::YLeaf epoch_1970;

};

class Native::Platform::Console::Output : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf serial;
        static const ydk::Enum::YLeaf virtual_;

};

class Native::Platform::Hardware::Lite::License : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::Platform::Hardware::Throughput::Disable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal_license;

};

class Native::Platform::Hardware::Throughput::Level::Kbps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_10000;
        static const ydk::Enum::YLeaf Y_25000;
        static const ydk::Enum::YLeaf Y_35000;
        static const ydk::Enum::YLeaf Y_50000;
        static const ydk::Enum::YLeaf Y_75000;
        static const ydk::Enum::YLeaf Y_100000;
        static const ydk::Enum::YLeaf Y_150000;
        static const ydk::Enum::YLeaf Y_200000;
        static const ydk::Enum::YLeaf Y_250000;
        static const ydk::Enum::YLeaf Y_300000;
        static const ydk::Enum::YLeaf Y_400000;
        static const ydk::Enum::YLeaf Y_500000;
        static const ydk::Enum::YLeaf Y_1000000;
        static const ydk::Enum::YLeaf Y_1500000;
        static const ydk::Enum::YLeaf Y_2000000;
        static const ydk::Enum::YLeaf Y_3000000;

};

class Native::Platform::Ipsec::Gdoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept_both;

};

class Native::Platform::Ipsec::ControlPlane : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf heavy;
        static const ydk::Enum::YLeaf medium;

};

class Native::Platform::Trace::Runtime::Process : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iomd;

};

class Native::Platform::Trace::Runtime::Module : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all_modules;

};

class Native::Platform::Trace::Runtime::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf info;

};

class Native::Enable::LastResort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf password;
        static const ydk::Enum::YLeaf succeed;

};

class Native::Enable::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Enable::Secret::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_4;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Archive::Path : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf harddisk__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;

};

class Native::Archive::Log::Config::Notify::Syslog::Contenttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plaintext;
        static const ydk::Enum::YLeaf xml;

};

class Native::Username::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Username::Secret::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_5;
        static const ydk::Enum::YLeaf Y_9;

};

class Native::Card::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;

};

class Native::Controller::ControllerTxExList::Name : public ydk::Enum
{
    public:
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

class Native::Controller::ControllerTxExList::Clock::Source::Line::LineMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class Native::Controller::Cellular::Lte::Sim::Authenticate::PinType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Controller::Cellular::Lte::Sms::Archive::Path : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;

};

class Native::Controller::Cellular::Lte::Gps::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ms_based;
        static const ydk::Enum::YLeaf standalone;

};

class Native::Controller::Cellular::Lte::Modem::DmLog::Filter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf webui__COLON__;

};

class Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;

};

class Native::Controller::Cellular::Lte::Modem::NasLog::Output::Path : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;

};

class Native::Controller::Cellular::Lte::Event::ConnectionStatus::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1xrtt;
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf evdoRel0;
        static const ydk::Enum::YLeaf evdoRelA;
        static const ydk::Enum::YLeaf evdoRelB;
        static const ydk::Enum::YLeaf gprs;
        static const ydk::Enum::YLeaf umts__FWD_SLASH__wcdma;
        static const ydk::Enum::YLeaf hsdpa;
        static const ydk::Enum::YLeaf hsupa;
        static const ydk::Enum::YLeaf hspa;
        static const ydk::Enum::YLeaf hspa_plus;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1xrtt;
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf evdoRel0;
        static const ydk::Enum::YLeaf evdoRelA;
        static const ydk::Enum::YLeaf evdoRelB;
        static const ydk::Enum::YLeaf gprs;
        static const ydk::Enum::YLeaf umts__FWD_SLASH__wcdma;
        static const ydk::Enum::YLeaf hsdpa;
        static const ydk::Enum::YLeaf hsupa;
        static const ydk::Enum::YLeaf hspa;
        static const ydk::Enum::YLeaf hspa_plus;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::ModemState::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Controller::Cellular::Lte::Event::Rsrp::Abate::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Rsrp::Onset::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Rsrq::Abate::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Rsrq::Onset::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Rssi::Abate::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::Cellular::Lte::Event::Rssi::Onset::MibTrap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf All_lte;
        static const ydk::Enum::YLeaf lte_tdd;
        static const ydk::Enum::YLeaf lte_fdd;

};

class Native::Controller::SONET::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class Native::Controller::SONET::Clock::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class Native::Controller::SONET::Aug::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf au_3;
        static const ydk::Enum::YLeaf au_4;

};

class Native::Controller::SONET::Au3::Overhead::Byte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j1;

};

class Native::Controller::SONET::Au3::Mode::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;

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


}
}

#endif /* _CISCO_IOS_XE_NATIVE_1_ */

