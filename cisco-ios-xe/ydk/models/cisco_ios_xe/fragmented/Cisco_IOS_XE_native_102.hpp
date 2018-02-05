#ifndef _CISCO_IOS_XE_NATIVE_102_
#define _CISCO_IOS_XE_NATIVE_102_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_101.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Cts::Sxp::Connection::Peer::Ipv4 : public ydk::Entity
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
        class Source; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source> source;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password> > password;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4


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


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password : public ydk::Entity
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
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode> mode;
                class PasswordType;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode : public ydk::Entity
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

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local : public ydk::Entity
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

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both : public ydk::Entity
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

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener : public ydk::Entity
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
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime : public ydk::Entity
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

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker : public ydk::Entity
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
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime : public ydk::Entity
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

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_ : public ydk::Entity
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

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both : public ydk::Entity
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

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener : public ydk::Entity
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
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime : public ydk::Entity
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

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker : public ydk::Entity
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
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker


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


class Native::BfdTemplate : public ydk::Entity
{
    public:
        BfdTemplate();
        ~BfdTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SingleHop; //type: Native::BfdTemplate::SingleHop

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop> > single_hop;
        
}; // Native::BfdTemplate


class Native::BfdTemplate::SingleHop : public ydk::Entity
{
    public:
        SingleHop();
        ~SingleHop();

        bool has_data() const override;
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
        class Interval; //type: Native::BfdTemplate::SingleHop::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop::Interval> interval;
        
}; // Native::BfdTemplate::SingleHop


class Native::BfdTemplate::SingleHop::Interval : public ydk::Entity
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

        ydk::YLeaf microseconds; //type: empty
        ydk::YLeaf both; //type: uint32
        ydk::YLeaf min_tx; //type: uint32
        ydk::YLeaf min_rx; //type: uint32
        ydk::YLeaf multiplier; //type: uint8

}; // Native::BfdTemplate::SingleHop::Interval


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
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface


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
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface


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


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr : public ydk::Entity
{
    public:
        Maxpr();
        ~Maxpr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxpr; //type: uint32
        ydk::YLeaf learn; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range : public ydk::Entity
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

        class Receive; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive> receive;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive


class Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization : public ydk::Entity
{
    public:
        MaxRangeUtilization();
        ~MaxRangeUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer : public ydk::Entity
{
    public:
        McPeer();
        ~McPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4
        class Domain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp
        class HeadEnd; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4> > ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd> head_end;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4 : public ydk::Entity
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
        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain : public ydk::Entity
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

        class Dmval; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval> > dmval;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval : public ydk::Entity
{
    public:
        Dmval();
        ~Dmval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dmval; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf eigrp; //type: string
        ydk::YLeaf head_end; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd : public ydk::Entity
{
    public:
        HeadEnd();
        ~HeadEnd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode : public ydk::Entity
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

        class Monitor; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor
        class Route; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route
        class Verify; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify> verify;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor : public ydk::Entity
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

        ydk::YLeaf both; //type: empty
        ydk::YLeaf fast; //type: empty
        ydk::YLeaf passive; //type: empty
        class Active; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active> active; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf throughput; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf control; //type: empty
        ydk::YLeaf observe; //type: empty
        class Metric; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol> protocol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Bgp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp
        class Static; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static> static_;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf local_pref; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol : public ydk::Entity
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

        ydk::YLeaf pbr; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bidirectional; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Threshold; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold> threshold;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold : public ydk::Entity
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

        class MosThresh; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh> > mos_thresh;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh : public ydk::Entity
{
    public:
        MosThresh();
        ~MosThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mos_thresh; //type: string
        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh


class Native::Pfr::Master::IcmpModeConfigPfrMc::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packets; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Probe


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve : public ydk::Entity
{
    public:
        Resolve();
        ~Resolve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cost; //type: empty
        ydk::YLeaf equivalent_path_round_robin; //type: empty
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss> loss;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos> mos;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay : public ydk::Entity
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

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DelPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol> > del_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol : public ydk::Entity
{
    public:
        DelPol();
        ~DelPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf del_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter : public ydk::Entity
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

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class JitPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol> > jit_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol : public ydk::Entity
{
    public:
        JitPol();
        ~JitPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf jit_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss : public ydk::Entity
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

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class LossPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol> > loss_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol : public ydk::Entity
{
    public:
        LossPol();
        ~LossPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loss_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MosPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol> > mos_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol : public ydk::Entity
{
    public:
        MosPol();
        ~MosPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mos_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf post_dial_delay; //type: uint16
        ydk::YLeaf signaling_retries; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery : public ydk::Entity
{
    public:
        TargetDiscovery();
        ~TargetDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ResponderList; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList> responder_list;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList : public ydk::Entity
{
    public:
        ResponderList();
        ~ResponderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TdNum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum> > td_num;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum : public ydk::Entity
{
    public:
        TdNum();
        ~TdNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf td_num; //type: string
        ydk::YLeaf inside_prefixes; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf probe_delay; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute


class Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
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

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable


class Native::PfrMap : public ydk::Entity
{
    public:
        PfrMap();
        ~PfrMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pfr_tg; //type: string
        class Match; //type: Native::PfrMap::Match
        class Set; //type: Native::PfrMap::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set> set;
        
}; // Native::PfrMap


class Native::PfrMap::Match : public ydk::Entity
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

        class Ip; //type: Native::PfrMap::Match::Ip
        class Pfr; //type: Native::PfrMap::Match::Pfr
        class TrafficClass; //type: Native::PfrMap::Match::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::TrafficClass> traffic_class;
        
}; // Native::PfrMap::Match


class Native::PfrMap::Match::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::PfrMap::Match::Ip


class Native::PfrMap::Match::Pfr : public ydk::Entity
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

        ydk::YLeaf learn; //type: empty

}; // Native::PfrMap::Match::Pfr


class Native::PfrMap::Match::TrafficClass : public ydk::Entity
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

        ydk::YLeaf access_list; //type: empty
        ydk::YLeaf application; //type: empty
        ydk::YLeaf prefix_list; //type: empty

}; // Native::PfrMap::Match::TrafficClass


class Native::PfrMap::Set : public ydk::Entity
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

        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf jitter; //type: empty
        ydk::YLeaf mode; //type: empty
        ydk::YLeaf mos; //type: empty
        ydk::YLeaf next_hop; //type: empty
        ydk::YLeaf periodic; //type: empty
        ydk::YLeaf probe; //type: empty
        ydk::YLeaf resolve; //type: empty
        ydk::YLeaf traceroute; //type: empty
        ydk::YLeaf trap_enable; //type: empty
        ydk::YLeaf trigger_log_percentage; //type: empty
        ydk::YLeaf unreachable; //type: empty
        class ActiveProbe; //type: Native::PfrMap::Set::ActiveProbe
        class Backoff; //type: Native::PfrMap::Set::Backoff
        class Delay; //type: Native::PfrMap::Set::Delay
        class LinkGroup; //type: Native::PfrMap::Set::LinkGroup
        class Loss; //type: Native::PfrMap::Set::Loss

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup> link_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Loss> loss;
        
}; // Native::PfrMap::Set

class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

};

class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_102_ */

