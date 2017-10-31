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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::PuntPolicer::PuntNum> > punt_num;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Platform::Trace::Runtime> > runtime;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Eap::Profile> > profile;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList> > controller_tx_ex_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Cellular> > cellular;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET> > sonet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR> > sonet_acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Wanphy> > wanphy;
        
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
        ydk::YLeaf linecode; //type: Linecode
        class Clock_; //type: Native::Controller::ControllerTxExList::Clock_
        class Cablelength; //type: Native::Controller::ControllerTxExList::Cablelength
        class ChannelGroup; //type: Native::Controller::ControllerTxExList::ChannelGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock_> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Cablelength> cablelength;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::ChannelGroup> > channel_group;
                class Name;
        class Linecode;

}; // Native::Controller::ControllerTxExList


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Clock_> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aug> aug;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au3> > au_3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4Atm> au_4_atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Au4> > au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps> aps;
                class Framing;

}; // Native::Controller::SONET


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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Protect> protect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Interchassis> interchassis;
        
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Clock_> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aug> aug;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3> > au_3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4Atm> au_4_atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4> > au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps> aps;
                class Framing;

}; // Native::Controller::SONETACR


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Overhead> overhead;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Mode> mode;
        
}; // Native::Controller::SONETACR::Au3


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ImaGroup> ima_group;
                class Mode;
        class Framing;

}; // Native::Controller::SONETACR::Au4


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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Protect> protect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Interchassis> interchassis;
        
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


class Native::Vrf : public ydk::Entity
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

        class Definition; //type: Native::Vrf::Definition

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition> > definition;
        
}; // Native::Vrf


class Native::Vrf::Definition : public ydk::Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf rd; //type: string
        class AddressFamily; //type: Native::Vrf::Definition::AddressFamily
        class RouteTarget; //type: Native::Vrf::Definition::RouteTarget

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget> route_target;
        
}; // Native::Vrf::Definition


class Native::Vrf::Definition::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Vrf::Definition::AddressFamily::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Vrf::Definition::AddressFamily


class Native::Vrf::Definition::AddressFamily::Ipv4 : public ydk::Entity
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

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Export_
        class Maximum; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Maximum
        class Mdt; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt
        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget
        class Bgp; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Bgp
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Export_> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Maximum> maximum; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt> mdt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Import> import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4


class Native::Vrf::Definition::AddressFamily::Ipv4::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Export_


class Native::Vrf::Definition::AddressFamily::Ipv4::Maximum : public ydk::Entity
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

        ydk::YLeaf routes; //type: uint32
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf reinstall; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Maximum


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt : public ydk::Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_reuse; //type: empty
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeafList preference; //type: list of  Preference
        class Default_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_
        class Data; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data> data;
                class Preference;

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_ : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        class Mpls; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls> mpls;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls : public ydk::Entity
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

        ydk::YLeaf mldp; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf threshold; //type: uint32
        class Multicast; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast> > multicast;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf wildcard; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import


class Native::Vrf::Definition::AddressFamily::Ipv4::Bgp : public ydk::Entity
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

        class NextHop; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop> next_hop;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Bgp


class Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop


class Native::Vrf::Definition::AddressFamily::Ipv4::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Import


class Native::Vrf::Definition::AddressFamily::Ipv6 : public ydk::Entity
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

        class Mdt; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Mdt
        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget
        class Bgp; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Mdt> mdt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Import> import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6


class Native::Vrf::Definition::AddressFamily::Ipv6::Mdt : public ydk::Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint16

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Mdt


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp : public ydk::Entity
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

        class NextHop; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop> next_hop;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4
        class Ipv6_; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_> ipv6;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4 : public ydk::Entity
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

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_ : public ydk::Entity
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

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_


class Native::Vrf::Definition::AddressFamily::Ipv6::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Import


class Native::Vrf::Definition::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export_; //type: Native::Vrf::Definition::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::RouteTarget::Import

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::RouteTarget


class Native::Vrf::Definition::RouteTarget::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::RouteTarget::Export_


class Native::Vrf::Definition::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::RouteTarget::Import


class Native::Rmon : public ydk::Entity
{
    public:
        Rmon();
        ~Rmon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Alarm; //type: Native::Rmon::Alarm
        class Event; //type: Native::Rmon::Event

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Alarm> > alarm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Event> > event;
        
}; // Native::Rmon


class Native::Rmon::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mib_object; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf test_mode; //type: TestMode
        ydk::YLeaf rising_threshold; //type: int32
        ydk::YLeaf rising_event; //type: uint16
        ydk::YLeaf falling_threshold; //type: int32
        ydk::YLeaf falling_event; //type: uint16
        ydk::YLeaf owner; //type: string
        class TestMode;

}; // Native::Rmon::Alarm


class Native::Rmon::Event : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        class Log; //type: Native::Rmon::Event::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Event::Log> log; // presence node
        
}; // Native::Rmon::Event


class Native::Rmon::Event::Log : public ydk::Entity
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

        ydk::YLeaf trap; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf owner; //type: string

}; // Native::Rmon::Event::Log


class Native::Sampler : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class Mode; //type: Native::Sampler::Mode
        class Granularity; //type: Native::Sampler::Granularity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Granularity> granularity;
        
}; // Native::Sampler


class Native::Sampler::Mode : public ydk::Entity
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

        class Deterministic; //type: Native::Sampler::Mode::Deterministic
        class Hash; //type: Native::Sampler::Mode::Hash
        class Random; //type: Native::Sampler::Mode::Random

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Deterministic> deterministic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Hash> hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Random> random;
        
}; // Native::Sampler::Mode


class Native::Sampler::Mode::Deterministic : public ydk::Entity
{
    public:
        Deterministic();
        ~Deterministic();

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
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Deterministic


class Native::Sampler::Mode::Hash : public ydk::Entity
{
    public:
        Hash();
        ~Hash();

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
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Hash


class Native::Sampler::Mode::Random : public ydk::Entity
{
    public:
        Random();
        ~Random();

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
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Random


class Native::Sampler::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection; //type: empty
        ydk::YLeaf packet; //type: empty

}; // Native::Sampler::Granularity


class Native::Flow : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Record; //type: Native::Flow::Record
        class Exporter; //type: Native::Flow::Exporter
        class Monitor; //type: Native::Flow::Monitor

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record> > record;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter> > exporter;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor> > monitor;
        
}; // Native::Flow


class Native::Flow::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: Type
        ydk::YLeaf description; //type: string
        class Collect; //type: Native::Flow::Record::Collect
        class Default_; //type: Native::Flow::Record::Default_
        class Match; //type: Native::Flow::Record::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect> collect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match> match;
                class Type;

}; // Native::Flow::Record


class Native::Flow::Record::Collect : public ydk::Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Flow::Record::Collect::Application
        class Connection; //type: Native::Flow::Record::Collect::Connection
        class Counter; //type: Native::Flow::Record::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Collect::Mpls
        class Network; //type: Native::Flow::Record::Collect::Network
        class Pfr; //type: Native::Flow::Record::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Collect::Policy
        class Routing; //type: Native::Flow::Record::Collect::Routing
        class Services; //type: Native::Flow::Record::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Collect::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection> connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services> services;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp> timestamp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport> transport;
        
}; // Native::Flow::Record::Collect


class Native::Flow::Record::Collect::Application : public ydk::Entity
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

        ydk::YLeaf vendor; //type: empty
        ydk::YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Collect::Application::Ssl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media> media;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Name> name; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Nntp> nntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Pop3> pop3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Sip> sip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Smtp> smtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Collect::Application


class Native::Flow::Record::Collect::Application::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Dns


class Native::Flow::Record::Collect::Application::Http : public ydk::Entity
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

        ydk::YLeaf host; //type: empty
        ydk::YLeaf referer; //type: empty
        ydk::YLeaf url; //type: empty
        ydk::YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Collect::Application::Http::Uri

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Collect::Application::Http


class Native::Flow::Record::Collect::Application::Http::Uri : public ydk::Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics; //type: empty

}; // Native::Flow::Record::Collect::Application::Http::Uri


class Native::Flow::Record::Collect::Application::Media : public ydk::Entity
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

        ydk::YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Application::Media::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Collect::Application::Media


class Native::Flow::Record::Collect::Application::Media::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes


class Native::Flow::Record::Collect::Application::Media::Bytes::Counter : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Counter


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate : public ydk::Entity
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

        class PerFlow; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Application::Media::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets

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

class Native::Controller::SONET::Clock_::Source : public ydk::Enum
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

class Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONETACR::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class Native::Controller::SONETACR::Clock_::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class Native::Controller::SONETACR::Aug::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf au_3;
        static const ydk::Enum::YLeaf au_4;

};

class Native::Controller::SONETACR::Au3::Overhead::Byte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j1;

};

class Native::Controller::SONETACR::Au3::Mode::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;

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

class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mldp;
        static const ydk::Enum::YLeaf pim;

};

class Native::Rmon::Alarm::TestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf delta;

};

class Native::Flow::Record::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf performance_monitor;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_1_ */

