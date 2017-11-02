#ifndef _CISCO_IOS_XE_NATIVE_176_
#define _CISCO_IOS_XE_NATIVE_176_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_175.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::PerPort : public ydk::Entity
{
    public:
        PerPort();
        ~PerPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::On


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port : public ydk::Entity
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

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All> all;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On


class Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly


class Native::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf run; //type: empty

}; // Native::Lldp


class Native::MaintenanceTemplate : public ydk::Entity
{
    public:
        MaintenanceTemplate();
        ~MaintenanceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf templ_name; //type: string
        class ConfigMaintenanceTempl; //type: Native::MaintenanceTemplate::ConfigMaintenanceTempl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate::ConfigMaintenanceTempl> config_maintenance_templ;
        
}; // Native::MaintenanceTemplate


class Native::MaintenanceTemplate::ConfigMaintenanceTempl : public ydk::Entity
{
    public:
        ConfigMaintenanceTempl();
        ~ConfigMaintenanceTempl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router
        class Shutdown; //type: Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown> shutdown;
        
}; // Native::MaintenanceTemplate::ConfigMaintenanceTempl


class Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router : public ydk::Entity
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

        class RoutingProtocol; //type: Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol> > routing_protocol;
        
}; // Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router


class Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol : public ydk::Entity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();

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
        ydk::YLeaf instance; //type: uint16
        class Protocol;

}; // Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol


class Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown : public ydk::Entity
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

        ydk::YLeaf l2; //type: empty

}; // Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown


class Native::Nat66 : public ydk::Entity
{
    public:
        Nat66();
        ~Nat66();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefix; //type: Native::Nat66::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66::Prefix> prefix;
        
}; // Native::Nat66


class Native::Nat66::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Inside; //type: Native::Nat66::Prefix::Inside

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66::Prefix::Inside> > inside;
        
}; // Native::Nat66::Prefix


class Native::Nat66::Prefix::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inside_pfx; //type: string
        ydk::YLeaf outside; //type: string

}; // Native::Nat66::Prefix::Inside


class Native::PmAgent : public ydk::Entity
{
    public:
        PmAgent();
        ~PmAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfigPmAgent; //type: Native::PmAgent::ConfigPmAgent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent> config_pm_agent;
        
}; // Native::PmAgent


class Native::PmAgent::ConfigPmAgent : public ydk::Entity
{
    public:
        ConfigPmAgent();
        ~ConfigPmAgent();

        bool has_data() const override;
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
        class Device; //type: Native::PmAgent::ConfigPmAgent::Device
        class InstanceId; //type: Native::PmAgent::ConfigPmAgent::InstanceId
        class Region; //type: Native::PmAgent::ConfigPmAgent::Region
        class Site; //type: Native::PmAgent::ConfigPmAgent::Site
        class Tenant; //type: Native::PmAgent::ConfigPmAgent::Tenant
        class Pmcs; //type: Native::PmAgent::ConfigPmAgent::Pmcs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device> device;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId> > instance_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region> region;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site> site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant> tenant;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs> pmcs;
        
}; // Native::PmAgent::ConfigPmAgent


class Native::PmAgent::ConfigPmAgent::Device : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Device::Id
        class Type; //type: Native::PmAgent::ConfigPmAgent::Device::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type> type;
        
}; // Native::PmAgent::ConfigPmAgent::Device


class Native::PmAgent::ConfigPmAgent::Device::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DeviceRange; //type: Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange> > device_range;
        
}; // Native::PmAgent::ConfigPmAgent::Device::Id


class Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange : public ydk::Entity
{
    public:
        DeviceRange();
        ~DeviceRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf device_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange


class Native::PmAgent::ConfigPmAgent::Device::Type : public ydk::Entity
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

        ydk::YLeaf pxtr; //type: empty
        class Ntr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr
        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr> ntr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr> rtr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr : public ydk::Entity
{
    public:
        Ntr();
        ~Ntr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr> rtr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr : public ydk::Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr : public ydk::Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty
        ydk::YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Xtr


class Native::PmAgent::ConfigPmAgent::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_id_range; //type: uint32
        class ConfigPmAgentInstance; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance> config_pm_agent_instance;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance : public ydk::Entity
{
    public:
        ConfigPmAgentInstance();
        ~ConfigPmAgentInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnterprisePrefix; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix> enterprise_prefix;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix : public ydk::Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4 : public ydk::Entity
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

        ydk::YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6 : public ydk::Entity
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

        ydk::YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6


class Native::PmAgent::ConfigPmAgent::Region : public ydk::Entity
{
    public:
        Region();
        ~Region();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Region::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Region


class Native::PmAgent::ConfigPmAgent::Region::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RegionIdRange; //type: Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange> > region_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Region::Id


class Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange : public ydk::Entity
{
    public:
        RegionIdRange();
        ~RegionIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf region_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange


class Native::PmAgent::ConfigPmAgent::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Site::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Site


class Native::PmAgent::ConfigPmAgent::Site::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SiteIdRange; //type: Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange> > site_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Site::Id


class Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange : public ydk::Entity
{
    public:
        SiteIdRange();
        ~SiteIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf site_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange


class Native::PmAgent::ConfigPmAgent::Tenant : public ydk::Entity
{
    public:
        Tenant();
        ~Tenant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant


class Native::PmAgent::ConfigPmAgent::Tenant::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TenantIdRange; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange> > tenant_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant::Id


class Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange : public ydk::Entity
{
    public:
        TenantIdRange();
        ~TenantIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tenant_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange


class Native::PmAgent::ConfigPmAgent::Pmcs : public ydk::Entity
{
    public:
        Pmcs();
        ~Pmcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4 : public ydk::Entity
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

        class PmcsIpv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4> > pmcs_ipv4;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4 : public ydk::Entity
{
    public:
        PmcsIpv4();
        ~PmcsIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf backup; //type: empty
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6 : public ydk::Entity
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

        class PmcsIpv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6> > pmcs_ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6 : public ydk::Entity
{
    public:
        PmcsIpv6();
        ~PmcsIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf backup; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6 : public ydk::Entity
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

        class Ipv6_; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_> > ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_ : public ydk::Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf backup; //type: empty
        ydk::YLeaf ipv4; //type: string

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_


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
        class Inline_; //type: Native::Power::Inline_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_> inline_; // presence node
                class RedundancyMode;
        class MaxMin;

}; // Native::Power


class Native::Power::Inline_ : public ydk::Entity
{
    public:
        Inline_();
        ~Inline_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Consumption; //type: Native::Power::Inline_::Consumption
        class Logging; //type: Native::Power::Inline_::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_::Consumption> consumption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline_::Logging> logging;
        
}; // Native::Power::Inline_


class Native::Power::Inline_::Consumption : public ydk::Entity
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

}; // Native::Power::Inline_::Consumption


class Native::Power::Inline_::Logging : public ydk::Entity
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

}; // Native::Power::Inline_::Logging


class Native::NamedOrderingRouteMap : public ydk::Entity
{
    public:
        NamedOrderingRouteMap();
        ~NamedOrderingRouteMap();

        bool has_data() const override;
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

}; // Native::NamedOrderingRouteMap


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList::List> > list;
        
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


class Native::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MdnsSd; //type: Native::ServiceList::MdnsSd

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd> > mdns_sd;
        
}; // Native::ServiceList


class Native::ServiceList::MdnsSd : public ydk::Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_list_name; //type: string
        class Deny; //type: Native::ServiceList::MdnsSd::Deny
        class Permit; //type: Native::ServiceList::MdnsSd::Permit
        class Query; //type: Native::ServiceList::MdnsSd::Query

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny> > deny;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit> > permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Query> query;
        
}; // Native::ServiceList::MdnsSd


class Native::ServiceList::MdnsSd::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Deny::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match> match;
        
}; // Native::ServiceList::MdnsSd::Deny


class Native::ServiceList::MdnsSd::Deny::Match : public ydk::Entity
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

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Deny::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Deny::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Deny::Match


class Native::ServiceList::MdnsSd::Deny::Match::Location : public ydk::Entity
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

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Deny::Match::Location


class Native::ServiceList::MdnsSd::Deny::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Deny::Match::MessageType


class Native::ServiceList::MdnsSd::Permit : public ydk::Entity
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

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Permit::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match> match;
        
}; // Native::ServiceList::MdnsSd::Permit


class Native::ServiceList::MdnsSd::Permit::Match : public ydk::Entity
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

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Permit::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Permit::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Permit::Match


class Native::ServiceList::MdnsSd::Permit::Match::Location : public ydk::Entity
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

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Permit::Match::Location


class Native::ServiceList::MdnsSd::Permit::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Permit::Match::MessageType


class Native::ServiceList::MdnsSd::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_type; //type: string

}; // Native::ServiceList::MdnsSd::Query


class Native::ServiceRouting : public ydk::Entity
{
    public:
        ServiceRouting();
        ~ServiceRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capabilities_manager; //type: boolean
        ydk::YLeaf mdns_sd; //type: empty

}; // Native::ServiceRouting


class Native::NetworkPolicy : public ydk::Entity
{
    public:
        NetworkPolicy();
        ~NetworkPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf profile; //type: uint32

}; // Native::NetworkPolicy


class Native::Energywise : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Domain; //type: Native::Energywise::Domain

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain> > domain;
        
}; // Native::Energywise


class Native::Energywise::Domain : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf word; //type: string
        class Security; //type: Native::Energywise::Domain::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain::Security> security;
        
}; // Native::Energywise::Domain


class Native::Energywise::Domain::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SharedSecret; //type: Native::Energywise::Domain::Security::SharedSecret

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret> shared_secret;
        
}; // Native::Energywise::Domain::Security


class Native::Energywise::Domain::Security::SharedSecret : public ydk::Entity
{
    public:
        SharedSecret();
        ~SharedSecret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Zero; //type: Native::Energywise::Domain::Security::SharedSecret::Zero

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero> > zero;
        
}; // Native::Energywise::Domain::Security::SharedSecret


class Native::Energywise::Domain::Security::SharedSecret::Zero : public ydk::Entity
{
    public:
        Zero();
        ~Zero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class Protocol; //type: Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol> protocol;
        
}; // Native::Energywise::Domain::Security::SharedSecret::Zero


class Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol : public ydk::Entity
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

        class Udp; //type: Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp> udp;
        
}; // Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol


class Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        ydk::YLeaf ip; //type: string

}; // Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp


class Native::CiscoIOSXESwitchTemplate : public ydk::Entity
{
    public:
        CiscoIOSXESwitchTemplate();
        ~CiscoIOSXESwitchTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IPCAMERAINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE
        class LAPINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE
        class APINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE
        class DMPINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE
        class IPPHONEINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE
        class MSPCAMERAINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE
        class MSPVCINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE
        class PRINTERINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE
        class ROUTERINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE
        class SWITCHINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE
        class TPINTERFACETEMPLATE; //type: Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE> ip_camera_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE> lap_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE> ap_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE> dmp_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE> ip_phone_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE> msp_camera_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE> msp_vc_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE> printer_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE> router_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE> switch_interface_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE> tp_interface_template;
        
}; // Native::CiscoIOSXESwitchTemplate


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE : public ydk::Entity
{
    public:
        IPCAMERAINTERFACETEMPLATE();
        ~IPCAMERAINTERFACETEMPLATE();

        bool has_data() const override;
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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport : public ydk::Entity
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
        class Mode; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode
        class Block; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block
        class PortSecurity; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity
        class Access; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access
        class Voice; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity : public ydk::Entity
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

        class Aging; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation> violation;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging : public ydk::Entity
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
        class Type; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum : public ydk::Entity
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

        class Range; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range : public ydk::Entity
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
        class Vlan; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard
        class Portfast; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast> portfast;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl : public ydk::Entity
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

        class Broadcast; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast
        class Action; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action> action;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast : public ydk::Entity
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

        class Level; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level> level;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level : public ydk::Entity
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
        class Pps; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps> bps;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip : public ydk::Entity
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

        class Dhcp; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp> dhcp;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp : public ydk::Entity
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

        class Snooping; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping> snooping;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping : public ydk::Entity
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

        class Limit; //type: Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping


class Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit : public ydk::Entity
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

}; // Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE : public ydk::Entity
{
    public:
        LAPINTERFACETEMPLATE();
        ~LAPINTERFACETEMPLATE();

        bool has_data() const override;
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
        class ServicePolicy; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy
        class Switchport; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport
        class SpanningTree; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree
        class StormControl; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl
        class Ip; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip> ip;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE


class Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input
        class Output; //type: Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output> output;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice> voice;
        
}; // Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport


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

class Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;

};

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


}
}

#endif /* _CISCO_IOS_XE_NATIVE_176_ */

