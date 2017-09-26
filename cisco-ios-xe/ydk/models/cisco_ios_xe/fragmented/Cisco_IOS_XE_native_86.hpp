#ifndef _CISCO_IOS_XE_NATIVE_86_
#define _CISCO_IOS_XE_NATIVE_86_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_85.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Otv::Site::Default_::Otv_::Isis::Authentication : public ydk::Entity
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
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Default_::Otv_::Isis::Authentication


class Native::Otv::Site::Default_::Otv_::Isis::Hello : public ydk::Entity
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

        class Padding; //type: Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Default_::Otv_::Isis::Hello


class Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding : public ydk::Entity
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

}; // Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Default_::Otv_::Isis::HelloInterval : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Default_::Otv_::Isis::HelloInterval


class Native::Otv::Site::Otv_ : public ydk::Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Otv::Site::Otv_::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Otv_


class Native::Otv::Site::Otv_::Isis : public ydk::Entity
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

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf hello_multiplier; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Otv_::Isis::HelloInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Otv_::Isis


class Native::Otv::Site::Otv_::Isis::Authentication : public ydk::Entity
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
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Otv_::Isis::Authentication


class Native::Otv::Site::Otv_::Isis::Hello : public ydk::Entity
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

        class Padding; //type: Native::Otv::Site::Otv_::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Otv_::Isis::Hello


class Native::Otv::Site::Otv_::Isis::Hello::Padding : public ydk::Entity
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

}; // Native::Otv::Site::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Otv_::Isis::HelloInterval : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Otv_::Isis::HelloInterval


class Native::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: one of string, enumeration
        ydk::YLeaf type; //type: Type
        ydk::YLeaf parameter_map_type; //type: ParameterMapType
        ydk::YLeaf alert; //type: Alert
        ydk::YLeaf application_inspect; //type: ApplicationInspect
        ydk::YLeaf audit_trail; //type: AuditTrail
        ydk::YLeaf dns_timeout; //type: uint32
        ydk::YLeaf max_destination; //type: uint32
        ydk::YLeaf zone_mismatch; //type: ZoneMismatch
        class Timeout; //type: Native::ParameterMap::Timeout
        class WatchList; //type: Native::ParameterMap::WatchList
        class AggressiveAging; //type: Native::ParameterMap::AggressiveAging
        class Global; //type: Native::ParameterMap::Global
        class Icmp; //type: Native::ParameterMap::Icmp
        class Lisp; //type: Native::ParameterMap::Lisp
        class Log; //type: Native::ParameterMap::Log
        class MaxIncomplete; //type: Native::ParameterMap::MaxIncomplete
        class OneMinute; //type: Native::ParameterMap::OneMinute
        class Sessions; //type: Native::ParameterMap::Sessions
        class TcpInspect; //type: Native::ParameterMap::TcpInspect
        class TcpInspectZone; //type: Native::ParameterMap::TcpInspectZone
        class ThreatDetection; //type: Native::ParameterMap::ThreatDetection
        class Udp; //type: Native::ParameterMap::Udp
        class Vrf; //type: Native::ParameterMap::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging> aggressive_aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::OneMinute> one_minute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Sessions> sessions;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect> tcp_inspect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone> tcp_inspect_zone;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection> threat_detection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::WatchList> watch_list;
                class Name;
        class Type;
        class ParameterMapType;
        class Alert;
        class ApplicationInspect;
        class AuditTrail;
        class ZoneMismatch;

}; // Native::ParameterMap


class Native::ParameterMap::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class High; //type: Native::ParameterMap::AggressiveAging::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High> high;
        
}; // Native::ParameterMap::AggressiveAging


class Native::ParameterMap::AggressiveAging::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Absolute; //type: Native::ParameterMap::AggressiveAging::High::Absolute
        class Percent; //type: Native::ParameterMap::AggressiveAging::High::Percent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Absolute> absolute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::AggressiveAging::High::Percent> percent;
        
}; // Native::ParameterMap::AggressiveAging::High


class Native::ParameterMap::AggressiveAging::High::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint64
        ydk::YLeaf low; //type: uint64

}; // Native::ParameterMap::AggressiveAging::High::Absolute


class Native::ParameterMap::AggressiveAging::High::Percent : public ydk::Entity
{
    public:
        Percent();
        ~Percent();

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
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::AggressiveAging::High::Percent


class Native::ParameterMap::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fail_open; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf redirect_list; //type: uint16
        class License; //type: Native::ParameterMap::Global::License
        class Primary; //type: Native::ParameterMap::Global::Primary
        class Secondary; //type: Native::ParameterMap::Global::Secondary
        class Whitelist; //type: Native::ParameterMap::Global::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::License> license;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary> primary; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary> secondary; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist> whitelist; // presence node
        
}; // Native::ParameterMap::Global


class Native::ParameterMap::Global::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unencypted; //type: Native::ParameterMap::Global::License::Unencypted
        class Encrypted; //type: Native::ParameterMap::Global::License::Encrypted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Encrypted> encrypted;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::License::Unencypted> unencypted;
        
}; // Native::ParameterMap::Global::License


class Native::ParameterMap::Global::License::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Encrypted


class Native::ParameterMap::Global::License::Unencypted : public ydk::Entity
{
    public:
        Unencypted();
        ~Unencypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Global::License::Unencypted


class Native::ParameterMap::Global::Primary : public ydk::Entity
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

        class Tower; //type: Native::ParameterMap::Global::Primary::Tower

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Primary::Tower> tower;
        
}; // Native::ParameterMap::Global::Primary


class Native::ParameterMap::Global::Primary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Primary::Tower


class Native::ParameterMap::Global::Secondary : public ydk::Entity
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

        class Tower; //type: Native::ParameterMap::Global::Secondary::Tower

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Secondary::Tower> tower;
        
}; // Native::ParameterMap::Global::Secondary


class Native::ParameterMap::Global::Secondary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Secondary::Tower


class Native::ParameterMap::Global::Whitelist : public ydk::Entity
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

        class Acl; //type: Native::ParameterMap::Global::Whitelist::Acl
        class DomainName; //type: Native::ParameterMap::Global::Whitelist::DomainName
        class Download; //type: Native::ParameterMap::Global::Whitelist::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Global::Whitelist::Download> download; // presence node
        
}; // Native::ParameterMap::Global::Whitelist


class Native::ParameterMap::Global::Whitelist::Acl : public ydk::Entity
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

        ydk::YLeaf acl_number; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Global::Whitelist::Acl


class Native::ParameterMap::Global::Whitelist::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::ParameterMap::Global::Whitelist::DomainName


class Native::ParameterMap::Global::Whitelist::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::ParameterMap::Global::Whitelist::Download


class Native::ParameterMap::Icmp : public ydk::Entity
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

        ydk::YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Icmp


class Native::ParameterMap::Lisp : public ydk::Entity
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

        ydk::YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Lisp


class Native::ParameterMap::Log : public ydk::Entity
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

        ydk::YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Log::FlowExport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Log


class Native::ParameterMap::Log::FlowExport : public ydk::Entity
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

        class Template_; //type: Native::ParameterMap::Log::FlowExport::Template_
        class V9; //type: Native::ParameterMap::Log::FlowExport::V9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::Template_> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Log::FlowExport


class Native::ParameterMap::Log::FlowExport::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Log::FlowExport::Template_


class Native::ParameterMap::Log::FlowExport::V9 : public ydk::Entity
{
    public:
        V9();
        ~V9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Native::ParameterMap::Log::FlowExport::V9::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Log::FlowExport::V9


class Native::ParameterMap::Log::FlowExport::V9::Udp : public ydk::Entity
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

        class Destination; //type: Native::ParameterMap::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Log::FlowExport::V9::Udp


class Native::ParameterMap::Log::FlowExport::V9::Udp::Destination : public ydk::Entity
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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::MaxIncomplete


class Native::ParameterMap::OneMinute : public ydk::Entity
{
    public:
        OneMinute();
        ~OneMinute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::OneMinute


class Native::ParameterMap::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        class Queue; //type: Native::ParameterMap::Sessions::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Sessions::Queue> queue;
        
}; // Native::ParameterMap::Sessions


class Native::ParameterMap::Sessions::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf min_threshold; //type: uint16

}; // Native::ParameterMap::Sessions::Queue


class Native::ParameterMap::TcpInspect : public ydk::Entity
{
    public:
        TcpInspect();
        ~TcpInspect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::ParameterMap::TcpInspect::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspect


class Native::ParameterMap::TcpInspect::Tcp : public ydk::Entity
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

        ydk::YLeaf finwait_time; //type: uint32
        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf synwait_time; //type: uint32
        class MaxIncomplete; //type: Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete> max_incomplete;
        
}; // Native::ParameterMap::TcpInspect::Tcp


class Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: uint32

}; // Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete


class Native::ParameterMap::TcpInspectZone : public ydk::Entity
{
    public:
        TcpInspectZone();
        ~TcpInspectZone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::ParameterMap::TcpInspectZone::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp> tcp;
        
}; // Native::ParameterMap::TcpInspectZone


class Native::ParameterMap::TcpInspectZone::Tcp : public ydk::Entity
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

        class SynFlood; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate> rate;
        
}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood


class Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_destination; //type: uint32

}; // Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate


class Native::ParameterMap::ThreatDetection : public ydk::Entity
{
    public:
        ThreatDetection();
        ~ThreatDetection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf basic_threat; //type: empty
        class Rate; //type: Native::ParameterMap::ThreatDetection::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate> rate;
        
}; // Native::ParameterMap::ThreatDetection


class Native::ParameterMap::ThreatDetection::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwDrop; //type: Native::ParameterMap::ThreatDetection::Rate::FwDrop
        class InspectDrop; //type: Native::ParameterMap::ThreatDetection::Rate::InspectDrop
        class SynAttack; //type: Native::ParameterMap::ThreatDetection::Rate::SynAttack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::FwDrop> fw_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::InspectDrop> inspect_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::ThreatDetection::Rate::SynAttack> syn_attack;
        
}; // Native::ParameterMap::ThreatDetection::Rate


class Native::ParameterMap::ThreatDetection::Rate::FwDrop : public ydk::Entity
{
    public:
        FwDrop();
        ~FwDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::FwDrop


class Native::ParameterMap::ThreatDetection::Rate::InspectDrop : public ydk::Entity
{
    public:
        InspectDrop();
        ~InspectDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::InspectDrop


class Native::ParameterMap::ThreatDetection::Rate::SynAttack : public ydk::Entity
{
    public:
        SynAttack();
        ~SynAttack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint32
        ydk::YLeaf average_threshold; //type: uint64
        ydk::YLeaf burst_threshold; //type: uint64

}; // Native::ParameterMap::ThreatDetection::Rate::SynAttack


class Native::ParameterMap::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitState; //type: Native::ParameterMap::Timeout::InitState
        class FinWait; //type: Native::ParameterMap::Timeout::FinWait

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Timeout::FinWait> fin_wait;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Timeout::InitState> init_state; // presence node
        
}; // Native::ParameterMap::Timeout


class Native::ParameterMap::Timeout::FinWait : public ydk::Entity
{
    public:
        FinWait();
        ~FinWait();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: uint32

}; // Native::ParameterMap::Timeout::FinWait


class Native::ParameterMap::Timeout::InitState : public ydk::Entity
{
    public:
        InitState();
        ~InitState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sec; //type: uint32

}; // Native::ParameterMap::Timeout::InitState


class Native::ParameterMap::Udp : public ydk::Entity
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

        ydk::YLeaf idle_time; //type: uint32

}; // Native::ParameterMap::Udp


class Native::ParameterMap::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf inspect; //type: string

}; // Native::ParameterMap::Vrf


class Native::ParameterMap::WatchList : public ydk::Entity
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

        ydk::YLeaf enabled; //type: empty
        ydk::YLeaf dynamic_expiry_timeout; //type: uint32
        class AddItem; //type: Native::ParameterMap::WatchList::AddItem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::WatchList::AddItem> add_item;
        
}; // Native::ParameterMap::WatchList


class Native::ParameterMap::WatchList::AddItem : public ydk::Entity
{
    public:
        AddItem();
        ~AddItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::ParameterMap::WatchList::AddItem


class Native::Parser : public ydk::Entity
{
    public:
        Parser();
        ~Parser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Native::Parser::Config

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Parser::Config> config;
        
}; // Native::Parser


class Native::Parser::Config : public ydk::Entity
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

        ydk::YLeaf cache; //type: Cache
        ydk::YLeaf partition; //type: empty
        class Cache;

}; // Native::Parser::Config


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


class Native::Performance : public ydk::Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Monitor; //type: Native::Performance::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor> monitor;
        
}; // Native::Performance


class Native::Performance::Monitor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Context; //type: Native::Performance::Monitor::Context
        class ObservationPoint; //type: Native::Performance::Monitor::ObservationPoint

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context> > context;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::ObservationPoint> observation_point;
        
}; // Native::Performance::Monitor


class Native::Performance::Monitor::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
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
        ydk::YLeaf profile; //type: Profile
        ydk::YLeaf description; //type: string
        class Default_; //type: Native::Performance::Monitor::Context::Default_
        class Exporter; //type: Native::Performance::Monitor::Context::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::TrafficMonitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Exporter> exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor> traffic_monitor;
                class Profile;

}; // Native::Performance::Monitor::Context


class Native::Performance::Monitor::Context::Default_ : public ydk::Entity
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
        class Exporter; //type: Native::Performance::Monitor::Context::Default_::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::Exporter> exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor> traffic_monitor;
        
}; // Native::Performance::Monitor::Context::Default_


class Native::Performance::Monitor::Context::Default_::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf transport; //type: Transport
        ydk::YLeaf vrf; //type: string
        class Transport;

}; // Native::Performance::Monitor::Context::Default_::Exporter


class Native::Performance::Monitor::Context::Default_::TrafficMonitor : public ydk::Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats> application_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url> url; // presence node
        
}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::All : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::All


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats : public ydk::Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime : public ydk::Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats : public ydk::Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats : public ydk::Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats : public ydk::Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf egress; //type: empty
        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url


class Native::Performance::Monitor::Context::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf transport; //type: Transport
        ydk::YLeaf vrf; //type: string
        class Transport;

}; // Native::Performance::Monitor::Context::Exporter


class Native::Performance::Monitor::Context::TrafficMonitor : public ydk::Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Performance::Monitor::Context::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats> application_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Url> url; // presence node
        
}; // Native::Performance::Monitor::Context::TrafficMonitor


class Native::Performance::Monitor::Context::TrafficMonitor::All : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::All


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats : public ydk::Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime : public ydk::Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats : public ydk::Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats : public ydk::Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats : public ydk::Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf egress; //type: empty
        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::Media


class Native::Performance::Monitor::Context::TrafficMonitor::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::Url


class Native::Performance::Monitor::ObservationPoint : public ydk::Entity
{
    public:
        ObservationPoint();
        ~ObservationPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encrypted_text; //type: empty

}; // Native::Performance::Monitor::ObservationPoint


class Native::Pfr : public ydk::Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Border; //type: Native::Pfr::Border
        class Master; //type: Native::Pfr::Master

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border> border; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master> master; // presence node
        
}; // Native::Pfr


class Native::Pfr::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PfrModeConfigpfrbr; //type: Native::Pfr::Border::PfrModeConfigpfrbr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr> pfr_mode__config_pfr_br;
        
}; // Native::Pfr::Border


class Native::Pfr::Border::PfrModeConfigpfrbr : public ydk::Entity
{
    public:
        PfrModeConfigpfrbr();
        ~PfrModeConfigpfrbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class ActiveProbe; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe
        class Local; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local
        class Master; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Master

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Master> master;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Address; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address> address;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Source; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source> source;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface> interface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface> interface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local


class Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface


class Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrModeConfigpfrbr::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4> > ipv4;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::Master


class Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf key_chain; //type: string

}; // Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4


class Native::Pfr::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IcmpModeConfigPfrMc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc> icmp_mode_config_pfr_mc;
        
}; // Native::Pfr::Master


class Native::Pfr::Master::IcmpModeConfigPfrMc : public ydk::Entity
{
    public:
        IcmpModeConfigPfrMc();
        ~IcmpModeConfigPfrMc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bandwidth_resolution; //type: empty
        ydk::YLeaf exporter; //type: string
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf keepalive; //type: uint16
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf periodic; //type: uint16
        ydk::YLeaf policy_rules; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trigger_log_percentage; //type: uint8
        class ActiveProbe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe
        class Application; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application
        class Backoff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff
        class Border; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter
        class Learn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Loss
        class Max; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max
        class MaxRangeUtilization; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization
        class McPeer; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer
        class Mode; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos
        class Probe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Probe
        class Resolve; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve
        class Rsvp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp
        class TargetDiscovery; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery
        class Traceroute; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute
        class Unreachable; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border> border;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn> learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Loss> loss;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max> max;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization> max_range_utilization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer> mc_peer; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos> mos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Probe> probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve> resolve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery> target_discovery; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute> traceroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable> unreachable;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf echo; //type: one of string, union
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter
        class TcpConn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of string, union
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn : public ydk::Entity
{
    public:
        TcpConn();
        ~TcpConn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of string, union
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of string, union
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Define; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define> define;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define : public ydk::Entity
{
    public:
        Define();
        ~Define();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AppDef; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef> > app_def;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef : public ydk::Entity
{
    public:
        AppDef();
        ~AppDef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf app_def; //type: string
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf nbar; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Boff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff> > boff;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff : public ydk::Entity
{
    public:
        Boff();
        ~Boff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf boff; //type: uint16
        class Boff0; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0> > boff0;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0 : public ydk::Entity
{
    public:
        Boff0();
        ~Boff0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff0; //type: uint16
        ydk::YLeaf bstep; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: empty
        class KeyChain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain> > key_chain;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain : public ydk::Entity
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

        ydk::YLeaf kc_name; //type: string
        ydk::YLeaf interface; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain


class Native::Pfr::Master::IcmpModeConfigPfrMc::Delay : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn : public ydk::Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LrnModeConfigpfrmclearn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn> lrn_mode__config_pfr_mc_learn;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn : public ydk::Entity
{
    public:
        LrnModeConfigpfrmclearn();
        ~LrnModeConfigpfrmclearn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: empty
        ydk::YLeaf monitor_period; //type: uint16
        ydk::YLeaf periodic_interval; //type: uint16
        ydk::YLeaf throughput; //type: empty
        class AggregationType; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType
        class Expire; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire
        class Inside; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside
        class List; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List
        class Prefixes; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes
        class TrafficClass; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType> aggregation_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire> expire;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass> traffic_class;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType : public ydk::Entity
{
    public:
        AggregationType();
        ~AggregationType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf non_bgp; //type: empty
        ydk::YLeaf prefix_length; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire : public ydk::Entity
{
    public:
        Expire();
        ~Expire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class After; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After> after;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After : public ydk::Entity
{
    public:
        After();
        ~After();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: uint16
        ydk::YLeaf time; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside : public ydk::Entity
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

        ydk::YLeaf bgp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List : public ydk::Entity
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

        class Seq; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq> seq;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PfrTc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc> > pfr_tc;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc : public ydk::Entity
{
    public:
        PfrTc();
        ~PfrTc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pfr_tc; //type: uint16
        ydk::YLeaf refname; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prnum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum> > prnum;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum : public ydk::Entity
{
    public:
        Prnum();
        ~Prnum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prnum; //type: uint32
        ydk::YLeaf applications; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Aggregate; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate
        class Filter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter
        class Keys; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate> aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys> keys;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport
        class Dscp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport> dport; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp> dscp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport : public ydk::Entity
{
    public:
        Dport();
        ~Dport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max : public ydk::Entity
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

        class Prefix; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix
        class Range; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range> range;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix : public ydk::Entity
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

        class Total; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total> total;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total : public ydk::Entity
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

        class Maxpr; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr> > maxpr;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

class Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Otv::Site::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::ParameterMap::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf gtp;

};

class Native::ParameterMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cws_tunnel;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf inspect_global;
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf inspect_vrf;
        static const ydk::Enum::YLeaf inspect_zone;
        static const ydk::Enum::YLeaf regex;
        static const ydk::Enum::YLeaf authbypass;

};

class Native::ParameterMap::ParameterMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf authbypass;

};

class Native::ParameterMap::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::ParameterMap::ApplicationInspect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf gtp;
        static const ydk::Enum::YLeaf h323;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf netbios;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf rtsp;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf skinny;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf tftp;

};

class Native::ParameterMap::AuditTrail : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::ParameterMap::ZoneMismatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;

};

class Native::Parser::Config::Cache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;

};

class Native::Performance::Monitor::Context::Profile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_experience;
        static const ydk::Enum::YLeaf application_performance;
        static const ydk::Enum::YLeaf application_statistics;

};

class Native::Performance::Monitor::Context::Default_::Exporter::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Exporter::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_86_ */

