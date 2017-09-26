#ifndef _CISCO_IOS_XE_NATIVE_13_
#define _CISCO_IOS_XE_NATIVE_13_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_12.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime : public ydk::Entity
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

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source : public ydk::Entity
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

        class Ipv4_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_> > ipv4;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_ : public ydk::Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

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
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password> > password;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password : public ydk::Entity
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

        ydk::YLeaf password_type; //type: PasswordType
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode> mode;
                class PasswordType;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode : public ydk::Entity
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

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local : public ydk::Entity
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

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime : public ydk::Entity
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

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime : public ydk::Entity
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

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_ : public ydk::Entity
{
    public:
        Peer_();
        ~Peer_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime : public ydk::Entity
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

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime : public ydk::Entity
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

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime


class Native::Cts::Sxp::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf source_ip; //type: string
        class Password; //type: Native::Cts::Sxp::Default_::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Default_::Password> password;
        
}; // Native::Cts::Sxp::Default_


class Native::Cts::Sxp::Default_::Password : public ydk::Entity
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

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Cts::Sxp::Default_::Password


class Native::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Crypto; //type: Native::Default_::Crypto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default_::Crypto> crypto;
        
}; // Native::Default_


class Native::Default_::Crypto : public ydk::Entity
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

        class Ikev2; //type: Native::Default_::Crypto::Ikev2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Default_::Crypto::Ikev2> ikev2;
        
}; // Native::Default_::Crypto


class Native::Default_::Crypto::Ikev2 : public ydk::Entity
{
    public:
        Ikev2();
        ~Ikev2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf proposal; //type: empty
        ydk::YLeaf policy; //type: empty

}; // Native::Default_::Crypto::Ikev2


class Native::Device : public ydk::Entity
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

        ydk::YLeaf classifier; //type: empty

}; // Native::Device


class Native::DeviceSensor : public ydk::Entity
{
    public:
        DeviceSensor();
        ~DeviceSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::DeviceSensor


class Native::DeviceTracking : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Policy; //type: Native::DeviceTracking::Policy
        class Tracking; //type: Native::DeviceTracking::Tracking

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy> > policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking> tracking; // presence node
        
}; // Native::DeviceTracking


class Native::DeviceTracking::Policy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf word; //type: string
        class DeviceRole; //type: Native::DeviceTracking::Policy::DeviceRole
        class Protocol; //type: Native::DeviceTracking::Policy::Protocol
        class Tracking; //type: Native::DeviceTracking::Policy::Tracking
        class Limit; //type: Native::DeviceTracking::Policy::Limit
        class SecurityLevel; //type: Native::DeviceTracking::Policy::SecurityLevel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::SecurityLevel> security_level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Tracking> tracking;
        
}; // Native::DeviceTracking::Policy


class Native::DeviceTracking::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: boolean
        ydk::YLeaf switch_; //type: empty

}; // Native::DeviceTracking::Policy::DeviceRole


class Native::DeviceTracking::Policy::Limit : public ydk::Entity
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

        ydk::YLeaf address_count; //type: uint16

}; // Native::DeviceTracking::Policy::Limit


class Native::DeviceTracking::Policy::Protocol : public ydk::Entity
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

        ydk::YLeaf udp; //type: boolean
        ydk::YLeaf arp; //type: boolean
        ydk::YLeaf dhcp4; //type: boolean
        ydk::YLeaf dhcp6; //type: boolean
        ydk::YLeaf ndp; //type: boolean

}; // Native::DeviceTracking::Policy::Protocol


class Native::DeviceTracking::Policy::SecurityLevel : public ydk::Entity
{
    public:
        SecurityLevel();
        ~SecurityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf glean; //type: empty

}; // Native::DeviceTracking::Policy::SecurityLevel


class Native::DeviceTracking::Policy::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking_on_off; //type: TrackingOnOff
        class TrackingOnOff;

}; // Native::DeviceTracking::Policy::Tracking


class Native::DeviceTracking::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf retry_interval; //type: uint16
        class AutoSource; //type: Native::DeviceTracking::Tracking::AutoSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource> auto_source; // presence node
        
}; // Native::DeviceTracking::Tracking


class Native::DeviceTracking::Tracking::AutoSource : public ydk::Entity
{
    public:
        AutoSource();
        ~AutoSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf override; //type: empty
        class Fallback; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback> fallback;
        
}; // Native::DeviceTracking::Tracking::AutoSource


class Native::DeviceTracking::Tracking::AutoSource::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4SubnetType1; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1
        class Ipv4SubnetType2; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1> ipv4_subnet_type1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2> ipv4_subnet_type2;
        
}; // Native::DeviceTracking::Tracking::AutoSource::Fallback


class Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1 : public ydk::Entity
{
    public:
        Ipv4SubnetType1();
        ~Ipv4SubnetType1();

        bool has_data() const override;
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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf override; //type: empty

}; // Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1


class Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2 : public ydk::Entity
{
    public:
        Ipv4SubnetType2();
        ~Ipv4SubnetType2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_prefix_name; //type: string
        ydk::YLeaf override; //type: empty

}; // Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2


class Native::Diagnostic : public ydk::Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bootup; //type: Native::Diagnostic::Bootup
        class EventLog; //type: Native::Diagnostic::EventLog
        class Monitor; //type: Native::Diagnostic::Monitor
        class Schedule; //type: Native::Diagnostic::Schedule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Bootup> bootup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::EventLog> event_log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule> schedule;
        
}; // Native::Diagnostic


class Native::Diagnostic::Bootup : public ydk::Entity
{
    public:
        Bootup();
        ~Bootup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::Diagnostic::Bootup


class Native::Diagnostic::EventLog : public ydk::Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Diagnostic::EventLog


class Native::Diagnostic::Monitor : public ydk::Entity
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

        ydk::YLeaf syslog; //type: empty
        class Interval; //type: Native::Diagnostic::Monitor::Interval
        class Switch_; //type: Native::Diagnostic::Monitor::Switch_
        class Threshold; //type: Native::Diagnostic::Monitor::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval> interval;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Switch_> > switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold> threshold;
        
}; // Native::Diagnostic::Monitor


class Native::Diagnostic::Monitor::Interval : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Switch_; //type: Native::Diagnostic::Monitor::Interval::Switch_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch_> switch_;
        
}; // Native::Diagnostic::Monitor::Interval


class Native::Diagnostic::Monitor::Interval::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Switch__; //type: Native::Diagnostic::Monitor::Interval::Switch_::Switch__

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch_::Switch__> > switch_;
        
}; // Native::Diagnostic::Monitor::Interval::Switch_


class Native::Diagnostic::Monitor::Interval::Switch_::Switch__ : public ydk::Entity
{
    public:
        Switch__();
        ~Switch__();

        bool has_data() const override;
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
        class Test; //type: Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test> test;
        
}; // Native::Diagnostic::Monitor::Interval::Switch_::Switch__


class Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds
        class All; //type: Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds> > test_ids;
        
}; // Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test


class Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All : public ydk::Entity
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

        ydk::YLeaf hh_mm_ss; //type: string
        ydk::YLeaf milli_seconds; //type: uint16
        ydk::YLeaf number_of_days; //type: uint16

}; // Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All


class Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

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
        ydk::YLeaf hh_mm_ss; //type: string
        ydk::YLeaf milli_seconds; //type: uint16
        ydk::YLeaf number_of_days; //type: uint16

}; // Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds


class Native::Diagnostic::Monitor::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
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
        class Test; //type: Native::Diagnostic::Monitor::Switch_::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Switch_::Test> test;
        
}; // Native::Diagnostic::Monitor::Switch_


class Native::Diagnostic::Monitor::Switch_::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

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
        ydk::YLeaf all; //type: empty

}; // Native::Diagnostic::Monitor::Switch_::Test


class Native::Diagnostic::Monitor::Threshold : public ydk::Entity
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

        class Switch_; //type: Native::Diagnostic::Monitor::Threshold::Switch_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_> > switch_;
        
}; // Native::Diagnostic::Monitor::Threshold


class Native::Diagnostic::Monitor::Threshold::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
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
        class Test; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test> test;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_


class Native::Diagnostic::Monitor::Threshold::Switch_::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds
        class All; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds> > test_ids;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::All : public ydk::Entity
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

        class Failure; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure> failure;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::All


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count> > count;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

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
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf milli_seconds; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf runs; //type: uint16
        ydk::YLeaf seconds; //type: uint32

}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

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
        class Failure; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure> failure;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count> > count;
        
}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure


class Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

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
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf milli_seconds; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf runs; //type: uint16
        ydk::YLeaf seconds; //type: uint32

}; // Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count


class Native::Diagnostic::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Switch_; //type: Native::Diagnostic::Schedule::Switch_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_> > switch_;
        
}; // Native::Diagnostic::Schedule


class Native::Diagnostic::Schedule::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf switch_number; //type: uint8
        class Test; //type: Native::Diagnostic::Schedule::Switch_::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test> test;
        
}; // Native::Diagnostic::Schedule::Switch_


class Native::Diagnostic::Schedule::Switch_::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestIds; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds
        class All; //type: Native::Diagnostic::Schedule::Switch_::Test::All
        class Basic; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic
        class Complete; //type: Native::Diagnostic::Schedule::Switch_::Test::Complete
        class Minimal; //type: Native::Diagnostic::Schedule::Switch_::Test::Minimal
        class NonDisruptive; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive
        class PerPort; //type: Native::Diagnostic::Schedule::Switch_::Test::PerPort

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All> all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic> basic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Complete> complete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Minimal> minimal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive> non_disruptive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort> per_port;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds> > test_ids;
        
}; // Native::Diagnostic::Schedule::Switch_::Test


class Native::Diagnostic::Schedule::Switch_::Test::All : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::All


class Native::Diagnostic::Schedule::Switch_::Test::All::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Daily


class Native::Diagnostic::Schedule::Switch_::Test::All::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::On


class Native::Diagnostic::Schedule::Switch_::Test::All::Port : public ydk::Entity
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

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList
        class All_; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_ : public ydk::Entity
{
    public:
        All_();
        ~All_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::All::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::All::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Basic : public ydk::Entity
{
    public:
        Basic();
        ~Basic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Basic


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Basic::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::On


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port : public ydk::Entity
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

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Complete : public ydk::Entity
{
    public:
        Complete();
        ~Complete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Complete::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Complete::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Complete


class Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Complete::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Complete::On


class Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::Minimal : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::Minimal::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Minimal::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::Minimal


class Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily


class Native::Diagnostic::Schedule::Switch_::Test::Minimal::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Minimal::On


class Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive : public ydk::Entity
{
    public:
        NonDisruptive();
        ~NonDisruptive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port : public ydk::Entity
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

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port


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


class Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly


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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly> weekly;
        
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port


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


class Native::Diagnostic::Schedule::Switch_::Test::TestIds : public ydk::Entity
{
    public:
        TestIds();
        ~TestIds();

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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::On


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port : public ydk::Entity
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

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All : public ydk::Entity
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

        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList : public ydk::Entity
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
        class Daily; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily : public ydk::Entity
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

}; // Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily

class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

};

class Native::Cts::Sxp::Default_::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::DeviceTracking::Policy::Tracking::TrackingOnOff : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Diagnostic::Bootup::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf minimal;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_13_ */

